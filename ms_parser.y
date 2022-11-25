%{
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "cgen.h"

extern int yylex(void);
extern int line_num;
%}

%union
{
	char* crepr;
}

%define parse.trace
%debug

%token <crepr> IDENT
%token <crepr> REAL
%token <crepr> CONST_STRING
%token <crepr> POS_NUM
%token <crepr> NEG_NUM

%token KW_NUMBER
%token KW_BOOLEAN
%token KW_STRING
%token KW_VOID
%token KW_TRUE
%token KW_FALSE
%token KW_VAR
%token KW_CONST
%token KW_IF
%token KW_ELSE
%token KW_FOR
%token KW_WHILE
%token KW_FUNCTION
%token KW_BREAK
%token KW_CONTINUE
%token KW_RETURN
%token KW_NULL
%token KW_START


//declare operation precedence
%right KW_NOT
%right '-' '+'
%right TK_POW
%left '*' '/' '%'
%left POS_NUM NEG_NUM REAL STRING_SIMPLE IDENT
%left '(' ')' '[' ']' '{' '}'
%left '<' '>' TK_EQUAL TK_NEQUAL TK_LEQUAL
%left KW_AND
%left KW_OR
%right '='
%right ','

//program is the first non-terminal symbol for the grammar
%start program

%type <crepr> start_condition body
%type <crepr> types
%type <crepr> variable_declaration varList vars1 vars2 varsCont
%type <crepr> constant_declaration constList consts1 consts2 constsCont
%type <crepr> function_declaration function_parameters
%type <crepr>  expr stmt_expr
%type <crepr>  statements
%type <crepr> ifStatement
%type <crepr> whileStatement
%type <crepr> forStatement
%type <crepr> functionCall functionCall_parameters
%type <crepr> assignmentStatement
%type <crepr> returnStatement


%%

//start_condition or empty program

program: %empty
| start_condition
{
	if (yyerror_count == 0) {
		FILE *fp;
		fp = fopen("c_out.c","w");
    // include the mslib.h file
	  fputs(c_prologue,fp);
	  fprintf(fp,"/* Program */ \n\n");
	  fprintf(fp,"#include <stdlib.h>\n#include <stdarg.h>\n#include <stdio.h>\n#include <string.h>\n\n\n");
	  fprintf(fp,"%s\n\n", $1);
		fclose(fp);
	}
}
;

//start condition
start_condition:
  variable_declaration {$$ = template("%s", $1);}
| constant_declaration {$$ = template("%s", $1);}
| function_declaration {$$ = template("%s", $1);}
| KW_FUNCTION KW_START '(' ')' ':' KW_VOID '{' body '}' {$$ = template("void main(){\n%s\n} \n", $8);}
;
//------------------------------------------------------------------------------
//data types
types:
 	KW_NUMBER     {$$ = "double";}
| KW_BOOLEAN    {$$ = "int";}
| KW_VOID       {$$ = "void";}
| KW_STRING  		{$$ = "char*";}
;
//------------------------------------------------------------------------------
//declaration of variables
variable_declaration:
	KW_VAR varList ':' types ';' {$$=template("%s %s ;\n", $4,$2);}
| KW_VAR varList ':' types ',' varList ':' types ';' {$$ = template("%s %s, %s %s ;", $4, $2, $8, $6);}
| KW_VAR varList ':' types ';' start_condition {$$ = template("%s %s ;\n %s", $4, $2, $6);}
| KW_VAR varList ':' types ',' varList ':' types ';' start_condition {$$ = template("%s %s, %s %s ;\n %s", $4, $2, $8, $6, $10);}
| KW_VAR IDENT '[' POS_NUM ']' '=' CONST_STRING ':' types ';' start_condition {$$ = template("%s* %s %s ; \n %s", $9,$2,$7,$11);} //auto gia to *
;

//variable list (simple variables and arrays)
varList:
  vars1 {$$ = $1;}
| vars1 ',' varList {$$ = template("%s , %s", $1, $3);}
| IDENT '[' ']' {$$ = template("%s []", $1);}
| IDENT '[' POS_NUM ']' {$$ = template("%s [%s]", $1,$3);}
;

//all variables except arrays
vars1:
  IDENT {$$ = template("%s", $1);}
| IDENT '=' vars2 {$$ = template("%s = %s", $1,$3);}
;
//right side value of variables vars1
vars2:
  REAL      			 {$$ = template("%s", $1);}
| POS_NUM      		 {$$ = template("%s", $1);}
| NEG_NUM      		 {$$ = template("%s", $1);}
| CONST_STRING    {$$ = template("%s", $1);}
;

//continue
varsCont:
  KW_VAR varList ':' types ';' body {$$ = template("%s %s;\n %s", $4, $2, $6);}
| KW_VAR varList ':' types ',' varList ':' types ';' body {$$ = template("%s %s, %s %s;\n %s", $4, $2, $8, $6, $10);}
| KW_VAR IDENT '[' POS_NUM ']' '=' CONST_STRING ':' types ';' body {$$ = template("%s* %s %s; \n%s", $9,$2,$7,$11);} //auto gia to *
;
//------------------------------------------------------------------------------
//constant declaration is similar to variable declaration but constants have a mandatory value assigned
constant_declaration:
  KW_CONST constList ':' types ';' {$$ = template("const %s %s;\n ", $4, $2);}
| KW_CONST constList ':' types ',' constList ':' types {$$ = template("const %s %s, %s %s;", $4, $2, $8, $6);}
| KW_CONST constList ':' types ';' start_condition {$$ = template("const %s %s;\n\n %s", $4, $2, $6);}
| KW_CONST constList ':' types ',' constList ':' types ';' start_condition {$$ = template("const %s %s, %s %s;\n %s", $4, $2, $8, $6, $10);}
| KW_CONST IDENT '[' POS_NUM ']' '=' CONST_STRING ':' types ';' start_condition {$$ = template("%s* %s %s; \n%s", $9,$2,$7,$11);} //auto gia to *
;
//after this mandatory values will be declared
constList:
  consts1 {$$ = $1;}
| consts1 ',' constList {$$ = template("%s , %s", $1, $3);}
;

//declare mandatory value
consts1:
  IDENT '=' consts2 {$$ = template("%s = %s", $1,$3);}
| IDENT '[' ']' '=' consts2 {$$ = template("%s[] = %s", $1,$5);}
| IDENT '[' POS_NUM ']' '=' consts2 {$$ = template("%s[%s] = %s", $1,$3,$6);}
;

//declare type
consts2:
  REAL      			 {$$ = template("%s", $1);}
| POS_NUM      		 {$$ = template("%s", $1);}
| NEG_NUM      		 {$$ = template("%s", $1);}
| CONST_STRING    {$$ = template("%s", $1);}
;

constsCont:
  KW_CONST constList ':' types ';' body {$$ = template("const %s %s;\n %s", $4, $2, $6);}
| KW_CONST constList ':' types ',' constList ':' types ';' body {$$ = template("const %s %s, %s %s;\n %s", $4, $2, $8, $6, $10);}
| KW_CONST IDENT '[' POS_NUM ']' '=' CONST_STRING ':' types ';' body {$$ = template("%s* %s = %s; \n%s", $9,$2,$7,$11);} //auto gia to *
;
//------------------------------------------------------------------------------
//declare function syntax rules
function_declaration:
	KW_FUNCTION IDENT '(' function_parameters ')' ':' types '{' body '}' ';' {$$ = template("%s %s(%s) {\n%s\n} \n%s",$7,$2,$4,$9);}
| KW_FUNCTION IDENT '(' function_parameters ')' ':' types '{' body '}' ';' start_condition {$$ = template("%s %s(%s) {\n%s\n} \n%s",$7,$2,$4,$9,$12);}

//declare function parameters
function_parameters:
 IDENT ':' types {$$= template("%s %s",$3,$1);}
|IDENT ':' types ',' function_parameters {$$= template ("%s %s,%s",$3,$1,$5);}
|%empty {$$ = "" ;} //empty

returnStatement :
	KW_RETURN ';' body {$$ = template("return;\n%s",$3);}
| KW_RETURN expr ';' body {$$=template("return %s ;\n%s",$2,$4);}
;

//------------------------------------------------------------------------------
//declare available expressions
expr:
  POS_NUM {$$ = template("%s",$1);}
| REAL {$$ = template("%s",$1);}
|	IDENT {$$ = template("%s",$1);}
| NEG_NUM {$$ = template("%s",$1);}
| KW_TRUE {$$ = template("1");} // true = 1 (ms boolean -> c int)
| KW_FALSE {$$ = template("0");} // false = 0 (ms boolean -> c int)
| CONST_STRING {$$ = template("%s", $1);}
| POS_NUM expr {$$ = template("%s %s", $1,$2);}
| NEG_NUM expr {$$ = template("%s %s", $1,$2);}
| REAL expr    {$$ = template("%s %s", $1,$2);}
| CONST_STRING expr {$$ = template("%s %s", $1,$2);}
| '(' expr ')' { $$ = template("(%s)", $2); }
| '[' expr ']'  {$$ = template("[%s]", $2);}
| expr '+' expr { $$ = template("%s + %s", $1, $3); }
| expr '-' expr { $$ = template("%s - %s", $1, $3); }
//| '-' expr { $$ = template(" -%s", $2); }
| expr '*' expr { $$ = template("%s * %s", $1, $3); }
| expr '/' expr { $$ = template("%s / %s", $1, $3); }
| expr '%' expr {$$ = template("fmod(%s,%s)",$1,$3);}
| expr TK_POW expr {$$ = template("pow(%s,%s)",$1,$3);}
| expr '<' expr {$$ = template("%s<%s",$1,$3);}
| expr '>' expr {$$ = template("%s>%s",$1,$3);}
| expr TK_EQUAL expr {$$ = template("%s==%s",$1,$3);}
| expr TK_NEQUAL expr {$$ = template("%s!=%s",$1,$3);}
| expr TK_LEQUAL expr {$$ = template("%s<=%s",$1,$3);}
| KW_NOT expr		{$$ = template ("!%s", $2);}
| expr KW_AND expr {$$ = template("%s && %s",$1,$3);}
| expr KW_OR expr {$$ = template("%s || %s",$1,$3);}
;

stmt_expr:
  expr 		     	{$$ = template("%s", $1);}
| IDENT expr    {$$ = template("%s %s", $1,$2);}
;

//------------------------------------------------------------------------------
//statements
statements:
	ifStatement 		 		  {$$ = template("%s",$1);}
| whileStatement 	 	  	{$$ = template("%s",$1);}
| forStatement 		 		  {$$ = template("%s",$1);}
| functionCall 			    {$$ = template("%s",$1);}
| assignmentStatement	  {$$ = template("%s",$1);}
| returnStatement			  {$$ = template("%s",$1);}
;
//statement of if(){}else{}
ifStatement :
  KW_IF '(' stmt_expr ')' '{' statements '}' ';' body {$$ = template("if(%s) {\n\t%s} \n %s",$3,$6,$9);}
| KW_IF '(' stmt_expr ')' '{' statements '}' KW_ELSE KW_IF '(' stmt_expr ')' '{' statements '}' ';' body {$$ = template("if(%s) {\n\t%s}else if(%s){\n\t%s} \n%s",$3,$6,$11,$14,$17);}
| ifStatement KW_ELSE '{' statements '}' ';' body {$$ = template("else{\n\t%s} \n %s",$4,$7);}
;
//statement of while(){}
whileStatement :
	KW_WHILE '(' stmt_expr ')' '{' statements '}' ';' body {$$ = template("while(%s) {\n\t%s} \n%s",$3,$6,$9);}
;
//function calls
functionCall:
	IDENT '(' functionCall_parameters ')' ';' body {$$ = template("%s(%s);\n%s",$1,$3,$6);}
;
//functionCall parameters
functionCall_parameters:
	stmt_expr {$$ = template("%s",$1);}
|	stmt_expr ',' functionCall_parameters {$$ = template("%s, %s",$1,$3);}
|	%empty {$$ = "" ;}
;

assignmentStatement :
	IDENT '=' expr ';' body   {$$ = template("%s=%s;\n %s", $1, $3, $5);}
| IDENT '=' functionCall 		{$$ = template("%s=%s \n", $1, $3);}
| IDENT '=' expr '+' functionCall {$$ = template("%s=%s+%s",$1,$3,$5);}
| IDENT '=' expr '-' functionCall {$$ = template("%s=%s-%s",$1,$3,$5);}
| IDENT '=' expr '*' functionCall {$$ = template("%s=%s*%s",$1,$3,$5);}
| IDENT '=' expr '/' functionCall {$$ = template("%s=%s/%s",$1,$3,$5);}
| IDENT '=' expr '%' functionCall {$$ = template("%s=fmod(%s,%s)",$1,$3,$5);}
| IDENT '=' expr TK_POW functionCall {$$ = template("%s=pow(%s,%s)",$1,$3,$5);}
;

forStatement :
	KW_FOR '(' assignmentStatement ';' stmt_expr ';' assignmentStatement ')' '{' statements '}' ';' body {$$ = template("for(double %s;%s;%s){\n\t%s\n}\n%s",$3,$5,$7,$10,$13);}
;
//-----------------------------------------------------------------------------


body:
varsCont	{$$ = template("%s",$1);}
|constsCont	{$$ = template("%s",$1);}
|statements {$$ = template("%s",$1);}
|%empty {$$ = "" ;} //empty
;

%%
int main () {
  if ( yyparse() != 0 )
    printf("Rejected!\n");
}
