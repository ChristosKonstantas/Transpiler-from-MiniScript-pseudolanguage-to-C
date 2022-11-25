%{
#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "ms_parser.tab.h"
#include "cgen.h"


int line_num = 1;

%}

ID      			    [a-zA-Z_][0-9a-zA-Z_]*
DIGIT 				    [0-9]
POS_DIGIT 			  [1-9]
INTEGER_PART 		  ({DIGIT}{0,1})|([+-]?{POS_DIGIT}{DIGIT}*)
POS_NUM           [+]{DIGIT}{DIGIT}*
NEG_NUM           [-]{DIGIT}{DIGIT}*
FRACTIONAL_PART 	"."{DIGIT}*
EXPONENTIAL_PART 	[eE][+-]{POS_DIGIT}+
NUMBER_CONSTANT		{INTEGER_PART}{FRACTIONAL_PART}?{EXPONENTIAL_PART}?
CONST_STRING 		  [\"]([^\n'"\\]|([\\][n]|[\\][t]|[\\][r]|[\\][\\]|[\\][']|[\\]["]))+[\"]




%x comment

%%

number 		return KW_NUMBER;
boolean		return KW_BOOLEAN;
string      return KW_STRING;
void		return KW_VOID;
true		return KW_TRUE;
false		return KW_FALSE;
var			return KW_VAR;
const       return KW_CONST;
if          return KW_IF;
else		return KW_ELSE;
for         return KW_FOR;
while		return KW_WHILE;
function	return KW_FUNCTION;
break		return KW_BREAK;
continue	return KW_CONTINUE;
not         return KW_NOT;
and			return KW_AND;
or  		return KW_OR;
return		return KW_RETURN;
null		return KW_NULL;
start		return KW_START;



"+" 			return '+';
"-"			    return '-';
"*"			    return '*';
","				return ',';
"/"			    return '/';
"%"             return '%';
"**"			return TK_POW;
"=="			return TK_EQUAL;
"!="			return TK_NEQUAL;
"<"				return '<';
"<="			return TK_LEQUAL;
"="				return '=';

";"				return ';';
"("			    return '(';
")"			    return ')';
"["			    return '[';
"]"			    return ']';
"{"				return '{';
"}"				return '}';
":"			    return ':';

{ID}  	    		    {yylval.crepr = strdup(yytext); return IDENT; }

{NUMBER_CONSTANT}   {yylval.crepr = strdup(yytext); return REAL; }

{CONST_STRING}			{yylval.crepr = strdup(yytext); return CONST_STRING; }

{POS_NUM}            {yylval.crepr = strdup(yytext); return POS_NUM;}

{NEG_NUM}            {yylval.crepr = strdup(yytext); return NEG_NUM;}



"//"[^\n]*  	/* eat line comments */

"/*"					BEGIN(comment);
<comment>[^*\n]*        /* eat anything that's not a '*' */
<comment>"*"+[^*/\n]*   /* eat up '*'s not followed by ')'s */
<comment>\n             ++line_num;
<comment>"*"+"/"        BEGIN(INITIAL);


[ \r\t]				/* skip whitespace */
\n 						++line_num;
<<EOF>> 			return EOF;

.             { printf("lexical error: unrecognized literal '%s'\n", yytext); }


%%
