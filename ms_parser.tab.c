/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "ms_parser.y" /* yacc.c:339  */

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "cgen.h"

extern int yylex(void);
extern int line_num;

#line 77 "ms_parser.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "ms_parser.tab.h".  */
#ifndef YY_YY_MS_PARSER_TAB_H_INCLUDED
# define YY_YY_MS_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENT = 258,
    REAL = 259,
    CONST_STRING = 260,
    POS_NUM = 261,
    NEG_NUM = 262,
    KW_NUMBER = 263,
    KW_BOOLEAN = 264,
    KW_STRING = 265,
    KW_VOID = 266,
    KW_TRUE = 267,
    KW_FALSE = 268,
    KW_VAR = 269,
    KW_CONST = 270,
    KW_IF = 271,
    KW_ELSE = 272,
    KW_FOR = 273,
    KW_WHILE = 274,
    KW_FUNCTION = 275,
    KW_BREAK = 276,
    KW_CONTINUE = 277,
    KW_RETURN = 278,
    KW_NULL = 279,
    KW_START = 280,
    KW_NOT = 281,
    TK_POW = 282,
    STRING_SIMPLE = 283,
    TK_EQUAL = 284,
    TK_NEQUAL = 285,
    TK_LEQUAL = 286,
    KW_AND = 287,
    KW_OR = 288
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 13 "ms_parser.y" /* yacc.c:355  */

	char* crepr;

#line 155 "ms_parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MS_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 172 "ms_parser.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  17
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   390

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  109
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  294

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   288

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    32,     2,     2,
      34,    35,    30,    28,    48,    27,     2,    31,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    49,    50,
      40,    47,    41,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    36,     2,    37,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    38,     2,    39,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    29,    33,    42,    43,    44,    45,    46
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    81,    81,    82,    99,   100,   101,   102,   107,   108,
     109,   110,   115,   116,   117,   118,   119,   124,   125,   126,
     127,   132,   133,   137,   138,   139,   140,   145,   146,   147,
     152,   153,   154,   155,   156,   160,   161,   166,   167,   168,
     173,   174,   175,   176,   180,   181,   182,   187,   188,   192,
     193,   194,   197,   198,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   235,   236,   242,   243,   244,   245,   246,   247,   251,
     252,   253,   257,   261,   265,   266,   267,   271,   272,   273,
     274,   275,   276,   277,   278,   282,   288,   289,   290,   291
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENT", "REAL", "CONST_STRING",
  "POS_NUM", "NEG_NUM", "KW_NUMBER", "KW_BOOLEAN", "KW_STRING", "KW_VOID",
  "KW_TRUE", "KW_FALSE", "KW_VAR", "KW_CONST", "KW_IF", "KW_ELSE",
  "KW_FOR", "KW_WHILE", "KW_FUNCTION", "KW_BREAK", "KW_CONTINUE",
  "KW_RETURN", "KW_NULL", "KW_START", "KW_NOT", "'-'", "'+'", "TK_POW",
  "'*'", "'/'", "'%'", "STRING_SIMPLE", "'('", "')'", "'['", "']'", "'{'",
  "'}'", "'<'", "'>'", "TK_EQUAL", "TK_NEQUAL", "TK_LEQUAL", "KW_AND",
  "KW_OR", "'='", "','", "':'", "';'", "$accept", "program",
  "start_condition", "types", "variable_declaration", "varList", "vars1",
  "vars2", "varsCont", "constant_declaration", "constList", "consts1",
  "consts2", "constsCont", "function_declaration", "function_parameters",
  "returnStatement", "expr", "stmt_expr", "statements", "ifStatement",
  "whileStatement", "functionCall", "functionCall_parameters",
  "assignmentStatement", "forStatement", "body", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,    45,    43,   282,
      42,    47,    37,   283,    40,    41,    91,    93,   123,   125,
      60,    62,   284,   285,   286,   287,   288,    61,    44,    58,
      59
};
# endif

#define YYPACT_NINF -170

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-170)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      35,    25,    26,     6,    33,  -170,  -170,  -170,  -170,    -2,
      -7,   -11,    42,    32,    66,    68,    88,  -170,     7,   133,
     174,   120,    14,   203,   174,   125,   126,    34,    94,  -170,
    -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,   -18,
      52,  -170,    98,    95,  -170,  -170,  -170,  -170,  -170,    13,
      54,  -170,    92,   109,    96,   112,   120,    35,    15,   113,
     203,   125,    35,    17,   174,   122,   151,   168,   127,  -170,
     137,   213,  -170,   138,  -170,   166,   163,   174,   176,   177,
     174,  -170,   178,  -170,   174,   181,   126,   187,    97,   174,
     165,   174,   180,   203,  -170,    97,   -12,   229,   230,   200,
     201,   218,    12,  -170,  -170,  -170,  -170,   220,  -170,  -170,
    -170,  -170,   214,   204,    35,   205,    35,   219,    91,   144,
      71,   207,    74,   208,    91,   256,    91,  -170,   263,   263,
     263,   263,  -170,  -170,   263,   263,   263,    97,   250,   233,
    -170,    35,  -170,    35,  -170,   222,   263,   338,   225,   239,
     249,   274,  -170,    20,   174,    21,   174,   251,   237,   235,
     252,   150,   338,   150,   150,   338,   298,   318,  -170,   263,
     263,   263,   263,   263,   263,   263,   263,   263,   263,   263,
     263,   263,    97,    56,  -170,  -170,    35,   338,    91,   238,
     144,   144,   144,   144,   144,   144,    97,   261,    23,   270,
      76,   271,    91,   272,  -170,  -170,   338,   338,   123,   150,
     150,   150,    63,    63,    63,    63,    63,   262,  -170,  -170,
     273,  -170,  -170,    97,  -170,  -170,  -170,  -170,  -170,  -170,
    -170,   264,   120,    97,   266,   125,    97,    56,   281,    56,
     282,  -170,   316,   285,  -170,   217,   286,  -170,   283,   256,
     284,    97,   287,   174,   288,   174,    -9,   317,   301,  -170,
     174,   303,   174,   304,   340,    97,   319,    97,   321,    97,
     322,    97,   339,  -170,    56,  -170,    97,  -170,    97,  -170,
      91,   335,  -170,  -170,   341,   325,   347,    97,    56,  -170,
     348,   327,    97,  -170
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     0,     0,     3,     4,     5,     6,    21,
       0,    17,     0,     0,    35,     0,     0,     1,     0,     0,
       0,     0,     0,     0,     0,     0,    51,     0,     0,    19,
      23,    26,    24,    25,    22,     8,     9,    11,    10,     0,
      21,    18,     0,     0,    40,    43,    41,    42,    37,     0,
       0,    36,     0,     0,     0,    20,     0,    12,     0,     0,
       0,     0,    30,     0,     0,     0,     0,     0,     0,    14,
       0,     0,    38,     0,    32,     0,    49,     0,     0,     0,
       0,    20,    43,    39,     0,     0,    51,     0,   109,     0,
       0,     0,    31,     0,    50,   109,     0,     0,     0,     0,
       0,     0,     0,   106,   107,    88,   108,    83,    84,    86,
      87,    85,     0,     0,    13,     0,     0,     0,    96,     0,
      21,     0,     0,     0,     0,     0,     0,    56,    55,    60,
      54,    57,    58,    59,     0,     0,     0,   109,     0,     0,
       7,     0,    15,     0,    33,     0,    56,    81,    94,     0,
      56,     0,    98,     0,     0,     0,     0,     0,     0,     0,
       0,    63,    64,    61,    62,    78,     0,     0,    52,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   109,     0,    16,    34,    47,    82,    96,     0,
       0,     0,     0,     0,     0,     0,   109,     0,     0,     0,
       0,     0,     0,     0,    65,    66,    68,    67,    72,    69,
      70,    71,    73,    74,    75,    76,    77,    79,    80,    53,
       0,    48,    95,   109,   100,    99,   104,   101,   102,   103,
      97,    20,     0,   109,     0,     0,   109,     0,     0,     0,
       0,    93,     0,     0,    27,     0,     0,    44,     0,     0,
       0,   109,     0,     0,    43,     0,     0,     0,     0,    91,
       0,     0,     0,     0,     0,   109,     0,   109,     0,   109,
       0,   109,     0,    89,     0,    92,   109,    28,   109,    45,
       0,     0,    29,    46,     0,     0,     0,   109,     0,   105,
       0,     0,   109,    90
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -170,  -170,   -50,   -24,  -170,   -20,  -170,  -170,  -170,  -170,
     -22,  -170,   -17,  -170,  -170,   300,  -170,    70,  -122,  -169,
    -170,  -170,  -108,   202,  -115,  -170,   -90
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,    39,     6,    10,    11,    34,   103,     7,
      13,    14,    83,   104,     8,    53,   105,   147,   148,   106,
     107,   108,   109,   149,   110,   111,   112
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      49,    41,   157,    51,   160,   117,    48,    69,   264,    15,
     159,   152,    74,    28,   220,   127,   128,   129,   130,   131,
      42,    70,   118,    75,   132,   133,   197,   199,     9,    12,
      56,    16,    57,    17,    18,   119,    68,    21,   134,    73,
      76,   265,    20,    72,    29,    19,   135,   168,   136,     1,
       2,    43,    29,    87,    43,     3,    90,    29,    43,    96,
      92,    61,   137,    62,   142,   113,   144,   115,   248,    54,
     250,   232,    99,   233,   100,   101,   123,   121,    22,   102,
     238,    24,   224,   225,   226,   227,   228,   229,    58,    23,
      63,   184,   219,   185,   146,   128,   129,   130,   131,    19,
      96,    23,    26,   132,   133,   281,   230,   153,   180,   181,
     155,    97,    98,    99,    25,   100,   101,   134,    19,   290,
     102,    23,    27,    40,   235,   135,   236,   136,    50,    52,
     198,    55,   200,   241,   257,    59,   221,    30,    31,    32,
      33,    64,    60,   244,    65,    66,   247,   150,   128,   129,
     130,   131,   171,   172,   173,   174,   132,   133,   284,    67,
      71,   259,    78,   175,   176,   177,   178,   179,   180,   181,
     134,    77,   138,    79,    81,   273,    80,   275,   135,   277,
     136,   279,    35,    36,    37,    38,   282,    84,   283,   151,
     175,   176,   177,   178,   179,   180,   181,   289,   161,   162,
     163,   164,   293,    85,   165,   166,   167,    44,    45,    46,
      47,    86,   243,   246,    88,   114,   187,    44,    82,    46,
      47,    44,   254,    46,    47,    95,    89,    91,    93,   261,
     116,   263,   120,   122,   124,   125,   268,   139,   270,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   126,   140,   141,   143,   154,   156,   145,   158,
     206,   207,   208,   209,   210,   211,   127,   128,   129,   130,
     131,   183,   186,   188,   189,   132,   133,   169,   170,   171,
     172,   173,   174,   118,   119,   202,   201,   203,   223,   134,
     175,   176,   177,   178,   179,   180,   181,   135,   231,   136,
     182,   190,   191,   192,   193,   194,   195,   234,   181,   237,
     239,   242,   240,   245,   175,   176,   177,   178,   179,   180,
     181,   252,   256,   258,   196,   169,   170,   171,   172,   173,
     174,   249,   251,   204,   253,   255,   260,   262,   175,   176,
     177,   178,   179,   180,   181,   169,   170,   171,   172,   173,
     174,   267,   266,   269,   271,   205,   272,   274,   175,   176,
     177,   178,   179,   180,   181,   169,   170,   171,   172,   173,
     174,   276,   278,   280,   285,   287,   286,   292,   175,   176,
     177,   178,   179,   180,   181,   288,    94,   291,     0,     0,
     222
};

static const yytype_int16 yycheck[] =
{
      24,    21,   124,    25,   126,    95,    23,    57,    17,     3,
     125,   119,    62,     6,   183,     3,     4,     5,     6,     7,
       6,     6,    34,     6,    12,    13,     6,     6,     3,     3,
      48,    25,    50,     0,    36,    47,    56,    48,    26,    61,
      64,    50,    49,    60,    37,    47,    34,   137,    36,    14,
      15,    37,    37,    77,    37,    20,    80,    37,    37,     3,
      84,    48,    50,    50,   114,    89,   116,    91,   237,    35,
     239,    48,    16,    50,    18,    19,    98,    97,    36,    23,
     202,    49,   190,   191,   192,   193,   194,   195,    36,    47,
      36,   141,   182,   143,     3,     4,     5,     6,     7,    47,
       3,    47,    34,    12,    13,   274,   196,    36,    45,    46,
      36,    14,    15,    16,    48,    18,    19,    26,    47,   288,
      23,    47,    34,     3,    48,    34,    50,    36,     3,     3,
     154,    37,   156,   223,   249,    37,   186,     4,     5,     6,
       7,    49,    47,   233,    35,    49,   236,     3,     4,     5,
       6,     7,    29,    30,    31,    32,    12,    13,   280,    47,
      47,   251,    11,    40,    41,    42,    43,    44,    45,    46,
      26,    49,   102,     5,    37,   265,    49,   267,    34,   269,
      36,   271,     8,     9,    10,    11,   276,    49,   278,   119,
      40,    41,    42,    43,    44,    45,    46,   287,   128,   129,
     130,   131,   292,    37,   134,   135,   136,     4,     5,     6,
       7,    48,   232,   235,    38,    50,   146,     4,     5,     6,
       7,     4,     5,     6,     7,    38,    49,    49,    47,   253,
      50,   255,     3,     3,    34,    34,   260,    17,   262,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,    34,    39,    50,    50,    49,    49,    39,     3,
     190,   191,   192,   193,   194,   195,     3,     4,     5,     6,
       7,    38,    50,    48,    35,    12,    13,    27,    28,    29,
      30,    31,    32,    34,    47,    50,    35,    35,    50,    26,
      40,    41,    42,    43,    44,    45,    46,    34,    37,    36,
      50,    27,    28,    29,    30,    31,    32,    37,    46,    38,
      38,    47,    39,    47,    40,    41,    42,    43,    44,    45,
      46,     5,    39,    39,    50,    27,    28,    29,    30,    31,
      32,    50,    50,    35,    49,    49,    49,    49,    40,    41,
      42,    43,    44,    45,    46,    27,    28,    29,    30,    31,
      32,    50,    35,    50,    50,    37,    16,    38,    40,    41,
      42,    43,    44,    45,    46,    27,    28,    29,    30,    31,
      32,    50,    50,    34,    39,    50,    35,    50,    40,    41,
      42,    43,    44,    45,    46,    38,    86,    39,    -1,    -1,
     188
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    14,    15,    20,    52,    53,    55,    60,    65,     3,
      56,    57,     3,    61,    62,     3,    25,     0,    36,    47,
      49,    48,    36,    47,    49,    48,    34,    34,     6,    37,
       4,     5,     6,     7,    58,     8,     9,    10,    11,    54,
       3,    56,     6,    37,     4,     5,     6,     7,    63,    54,
       3,    61,     3,    66,    35,    37,    48,    50,    36,    37,
      47,    48,    50,    36,    49,    35,    49,    47,    56,    53,
       6,    47,    63,    61,    53,     6,    54,    49,    11,     5,
      49,    37,     5,    63,    49,    37,    48,    54,    38,    49,
      54,    49,    54,    47,    66,    38,     3,    14,    15,    16,
      18,    19,    23,    59,    64,    67,    70,    71,    72,    73,
      75,    76,    77,    54,    50,    54,    50,    77,    34,    47,
       3,    56,     3,    61,    34,    34,    34,     3,     4,     5,
       6,     7,    12,    13,    26,    34,    36,    50,    68,    17,
      39,    50,    53,    50,    53,    39,     3,    68,    69,    74,
       3,    68,    73,    36,    49,    36,    49,    69,     3,    75,
      69,    68,    68,    68,    68,    68,    68,    68,    77,    27,
      28,    29,    30,    31,    32,    40,    41,    42,    43,    44,
      45,    46,    50,    38,    53,    53,    50,    68,    48,    35,
      27,    28,    29,    30,    31,    32,    50,     6,    54,     6,
      54,    35,    50,    35,    35,    37,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    77,
      70,    53,    74,    50,    73,    73,    73,    73,    73,    73,
      77,    37,    48,    50,    37,    48,    50,    38,    69,    38,
      39,    77,    47,    56,    77,    47,    61,    77,    70,    50,
      70,    50,     5,    49,     5,    49,    39,    75,    39,    77,
      49,    54,    49,    54,    17,    50,    35,    50,    54,    50,
      54,    50,    16,    77,    38,    77,    50,    77,    50,    77,
      34,    70,    77,    77,    69,    39,    35,    50,    38,    77,
      70,    39,    50,    77
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    52,    53,    53,    53,    53,    54,    54,
      54,    54,    55,    55,    55,    55,    55,    56,    56,    56,
      56,    57,    57,    58,    58,    58,    58,    59,    59,    59,
      60,    60,    60,    60,    60,    61,    61,    62,    62,    62,
      63,    63,    63,    63,    64,    64,    64,    65,    65,    66,
      66,    66,    67,    67,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    69,    69,    70,    70,    70,    70,    70,    70,    71,
      71,    71,    72,    73,    74,    74,    74,    75,    75,    75,
      75,    75,    75,    75,    75,    76,    77,    77,    77,    77
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     1,     1,     1,     9,     1,     1,
       1,     1,     5,     9,     6,    10,    11,     1,     3,     3,
       4,     1,     3,     1,     1,     1,     1,     6,    10,    11,
       5,     8,     6,    10,    11,     1,     3,     3,     5,     6,
       1,     1,     1,     1,     6,    10,    11,    11,    12,     3,
       5,     0,     3,     4,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     3,
       3,     1,     2,     1,     1,     1,     1,     1,     1,     9,
      17,     7,     9,     6,     1,     3,     0,     5,     3,     5,
       5,     5,     5,     5,     5,    13,     1,     1,     1,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:
#line 83 "ms_parser.y" /* yacc.c:1646  */
    {
	if (yyerror_count == 0) {
		FILE *fp;
		fp = fopen("c_out.c","w");
    // include the mslib.h file
	  fputs(c_prologue,fp);
	  fprintf(fp,"/* Program */ \n\n");
	  fprintf(fp,"#include <stdlib.h>\n#include <stdarg.h>\n#include <stdio.h>\n#include <string.h>\n\n\n");
	  fprintf(fp,"%s\n\n", (yyvsp[0].crepr));
		fclose(fp);
	}
}
#line 1467 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 99 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s", (yyvsp[0].crepr));}
#line 1473 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 100 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s", (yyvsp[0].crepr));}
#line 1479 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 101 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s", (yyvsp[0].crepr));}
#line 1485 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 102 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("void main(){\n%s\n} \n", (yyvsp[-1].crepr));}
#line 1491 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 107 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = "double";}
#line 1497 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 108 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = "int";}
#line 1503 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 109 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = "void";}
#line 1509 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 110 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = "char*";}
#line 1515 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 115 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s %s ;\n", (yyvsp[-1].crepr),(yyvsp[-3].crepr));}
#line 1521 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 116 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s %s, %s %s ;", (yyvsp[-5].crepr), (yyvsp[-7].crepr), (yyvsp[-1].crepr), (yyvsp[-3].crepr));}
#line 1527 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 117 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s %s ;\n %s", (yyvsp[-2].crepr), (yyvsp[-4].crepr), (yyvsp[0].crepr));}
#line 1533 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 118 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s %s, %s %s ;\n %s", (yyvsp[-6].crepr), (yyvsp[-8].crepr), (yyvsp[-2].crepr), (yyvsp[-4].crepr), (yyvsp[0].crepr));}
#line 1539 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 119 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s* %s %s ; \n %s", (yyvsp[-2].crepr),(yyvsp[-9].crepr),(yyvsp[-4].crepr),(yyvsp[0].crepr));}
#line 1545 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 124 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = (yyvsp[0].crepr);}
#line 1551 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 125 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s , %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1557 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 126 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s []", (yyvsp[-2].crepr));}
#line 1563 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 127 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s [%s]", (yyvsp[-3].crepr),(yyvsp[-1].crepr));}
#line 1569 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 132 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s", (yyvsp[0].crepr));}
#line 1575 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 133 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s = %s", (yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1581 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 137 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s", (yyvsp[0].crepr));}
#line 1587 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 138 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s", (yyvsp[0].crepr));}
#line 1593 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 139 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s", (yyvsp[0].crepr));}
#line 1599 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 140 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s", (yyvsp[0].crepr));}
#line 1605 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 145 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s %s;\n %s", (yyvsp[-2].crepr), (yyvsp[-4].crepr), (yyvsp[0].crepr));}
#line 1611 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 146 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s %s, %s %s;\n %s", (yyvsp[-6].crepr), (yyvsp[-8].crepr), (yyvsp[-2].crepr), (yyvsp[-4].crepr), (yyvsp[0].crepr));}
#line 1617 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 147 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s* %s %s; \n%s", (yyvsp[-2].crepr),(yyvsp[-9].crepr),(yyvsp[-4].crepr),(yyvsp[0].crepr));}
#line 1623 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 152 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("const %s %s;\n ", (yyvsp[-1].crepr), (yyvsp[-3].crepr));}
#line 1629 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 153 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("const %s %s, %s %s;", (yyvsp[-4].crepr), (yyvsp[-6].crepr), (yyvsp[0].crepr), (yyvsp[-2].crepr));}
#line 1635 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 154 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("const %s %s;\n\n %s", (yyvsp[-2].crepr), (yyvsp[-4].crepr), (yyvsp[0].crepr));}
#line 1641 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 155 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("const %s %s, %s %s;\n %s", (yyvsp[-6].crepr), (yyvsp[-8].crepr), (yyvsp[-2].crepr), (yyvsp[-4].crepr), (yyvsp[0].crepr));}
#line 1647 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 156 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s* %s %s; \n%s", (yyvsp[-2].crepr),(yyvsp[-9].crepr),(yyvsp[-4].crepr),(yyvsp[0].crepr));}
#line 1653 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 160 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = (yyvsp[0].crepr);}
#line 1659 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 161 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s , %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1665 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 166 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s = %s", (yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1671 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 167 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s[] = %s", (yyvsp[-4].crepr),(yyvsp[0].crepr));}
#line 1677 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 168 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s[%s] = %s", (yyvsp[-5].crepr),(yyvsp[-3].crepr),(yyvsp[0].crepr));}
#line 1683 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 173 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s", (yyvsp[0].crepr));}
#line 1689 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 174 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s", (yyvsp[0].crepr));}
#line 1695 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 175 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s", (yyvsp[0].crepr));}
#line 1701 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 176 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s", (yyvsp[0].crepr));}
#line 1707 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 180 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("const %s %s;\n %s", (yyvsp[-2].crepr), (yyvsp[-4].crepr), (yyvsp[0].crepr));}
#line 1713 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 181 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("const %s %s, %s %s;\n %s", (yyvsp[-6].crepr), (yyvsp[-8].crepr), (yyvsp[-2].crepr), (yyvsp[-4].crepr), (yyvsp[0].crepr));}
#line 1719 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 182 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s* %s = %s; \n%s", (yyvsp[-2].crepr),(yyvsp[-9].crepr),(yyvsp[-4].crepr),(yyvsp[0].crepr));}
#line 1725 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 187 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s %s(%s) {\n%s\n} \n%s",(yyvsp[-4].crepr),(yyvsp[-9].crepr),(yyvsp[-7].crepr),(yyvsp[-2].crepr));}
#line 1731 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 188 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s %s(%s) {\n%s\n} \n%s",(yyvsp[-5].crepr),(yyvsp[-10].crepr),(yyvsp[-8].crepr),(yyvsp[-3].crepr),(yyvsp[0].crepr));}
#line 1737 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 192 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)= template("%s %s",(yyvsp[0].crepr),(yyvsp[-2].crepr));}
#line 1743 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 193 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)= template ("%s %s,%s",(yyvsp[-2].crepr),(yyvsp[-4].crepr),(yyvsp[0].crepr));}
#line 1749 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 194 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = "" ;}
#line 1755 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 197 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("return;\n%s",(yyvsp[0].crepr));}
#line 1761 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 198 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("return %s ;\n%s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1767 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 204 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s",(yyvsp[0].crepr));}
#line 1773 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 205 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s",(yyvsp[0].crepr));}
#line 1779 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 206 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s",(yyvsp[0].crepr));}
#line 1785 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 207 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s",(yyvsp[0].crepr));}
#line 1791 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 208 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("1");}
#line 1797 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 209 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("0");}
#line 1803 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 210 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s", (yyvsp[0].crepr));}
#line 1809 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 211 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s %s", (yyvsp[-1].crepr),(yyvsp[0].crepr));}
#line 1815 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 212 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s %s", (yyvsp[-1].crepr),(yyvsp[0].crepr));}
#line 1821 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 213 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s %s", (yyvsp[-1].crepr),(yyvsp[0].crepr));}
#line 1827 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 214 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s %s", (yyvsp[-1].crepr),(yyvsp[0].crepr));}
#line 1833 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 215 "ms_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("(%s)", (yyvsp[-1].crepr)); }
#line 1839 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 216 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("[%s]", (yyvsp[-1].crepr));}
#line 1845 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 217 "ms_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s + %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1851 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 218 "ms_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s - %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1857 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 220 "ms_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s * %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1863 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 221 "ms_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s / %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1869 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 222 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("fmod(%s,%s)",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1875 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 223 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("pow(%s,%s)",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1881 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 224 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s<%s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1887 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 225 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s>%s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1893 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 226 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s==%s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1899 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 227 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s!=%s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1905 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 228 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s<=%s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1911 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 229 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template ("!%s", (yyvsp[0].crepr));}
#line 1917 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 230 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s && %s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1923 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 231 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s || %s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1929 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 235 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s", (yyvsp[0].crepr));}
#line 1935 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 236 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s %s", (yyvsp[-1].crepr),(yyvsp[0].crepr));}
#line 1941 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 242 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s",(yyvsp[0].crepr));}
#line 1947 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 243 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s",(yyvsp[0].crepr));}
#line 1953 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 244 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s",(yyvsp[0].crepr));}
#line 1959 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 245 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s",(yyvsp[0].crepr));}
#line 1965 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 246 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s",(yyvsp[0].crepr));}
#line 1971 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 247 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s",(yyvsp[0].crepr));}
#line 1977 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 251 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("if(%s) {\n\t%s} \n %s",(yyvsp[-6].crepr),(yyvsp[-3].crepr),(yyvsp[0].crepr));}
#line 1983 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 252 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("if(%s) {\n\t%s}else if(%s){\n\t%s} \n%s",(yyvsp[-14].crepr),(yyvsp[-11].crepr),(yyvsp[-6].crepr),(yyvsp[-3].crepr),(yyvsp[0].crepr));}
#line 1989 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 253 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("else{\n\t%s} \n %s",(yyvsp[-3].crepr),(yyvsp[0].crepr));}
#line 1995 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 257 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("while(%s) {\n\t%s} \n%s",(yyvsp[-6].crepr),(yyvsp[-3].crepr),(yyvsp[0].crepr));}
#line 2001 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 261 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s(%s);\n%s",(yyvsp[-5].crepr),(yyvsp[-3].crepr),(yyvsp[0].crepr));}
#line 2007 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 265 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s",(yyvsp[0].crepr));}
#line 2013 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 266 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s, %s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2019 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 267 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = "" ;}
#line 2025 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 271 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s=%s;\n %s", (yyvsp[-4].crepr), (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2031 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 272 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s=%s \n", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2037 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 273 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s=%s+%s",(yyvsp[-4].crepr),(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2043 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 274 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s=%s-%s",(yyvsp[-4].crepr),(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2049 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 275 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s=%s*%s",(yyvsp[-4].crepr),(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2055 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 276 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s=%s/%s",(yyvsp[-4].crepr),(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2061 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 277 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s=fmod(%s,%s)",(yyvsp[-4].crepr),(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2067 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 278 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s=pow(%s,%s)",(yyvsp[-4].crepr),(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2073 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 282 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("for(double %s;%s;%s){\n\t%s\n}\n%s",(yyvsp[-10].crepr),(yyvsp[-8].crepr),(yyvsp[-6].crepr),(yyvsp[-3].crepr),(yyvsp[0].crepr));}
#line 2079 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 288 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s",(yyvsp[0].crepr));}
#line 2085 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 289 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s",(yyvsp[0].crepr));}
#line 2091 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 290 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s",(yyvsp[0].crepr));}
#line 2097 "ms_parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 291 "ms_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = "" ;}
#line 2103 "ms_parser.tab.c" /* yacc.c:1646  */
    break;


#line 2107 "ms_parser.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 294 "ms_parser.y" /* yacc.c:1906  */

int main () {
  if ( yyparse() != 0 )
    printf("Rejected!\n");
}
