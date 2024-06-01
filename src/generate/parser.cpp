/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUMBER = 258,
     IDENTIFIER = 259,
     CONST = 260,
     VAR = 261,
     ARRAY = 262,
     PROCEDURE = 263,
     FUNCTION = 264,
     CALL = 265,
     BEGN = 266,
     END = 267,
     IF = 268,
     THEN = 269,
     ELSE = 270,
     WHILE = 271,
     DO = 272,
     FOR = 273,
     UPTO = 274,
     DOWNTO = 275,
     BREAK = 276,
     RETURN = 277,
     READ = 278,
     WRITE = 279,
     WRITELINE = 280,
     ODD = 281,
     EQ = 282,
     NE = 283,
     GT = 284,
     LT = 285,
     GEQ = 286,
     LEQ = 287,
     ASGN = 288,
     PLUS = 289,
     MINUS = 290,
     MUL = 291,
     DIV = 292,
     MOD = 293,
     IFX = 294,
     UPLUS = 295,
     UMINUS = 296
   };
#endif
/* Tokens.  */
#define NUMBER 258
#define IDENTIFIER 259
#define CONST 260
#define VAR 261
#define ARRAY 262
#define PROCEDURE 263
#define FUNCTION 264
#define CALL 265
#define BEGN 266
#define END 267
#define IF 268
#define THEN 269
#define ELSE 270
#define WHILE 271
#define DO 272
#define FOR 273
#define UPTO 274
#define DOWNTO 275
#define BREAK 276
#define RETURN 277
#define READ 278
#define WRITE 279
#define WRITELINE 280
#define ODD 281
#define EQ 282
#define NE 283
#define GT 284
#define LT 285
#define GEQ 286
#define LEQ 287
#define ASGN 288
#define PLUS 289
#define MINUS 290
#define MUL 291
#define DIV 292
#define MOD 293
#define IFX 294
#define UPLUS 295
#define UMINUS 296




/* Copy the first part of user declarations.  */
#line 1 "./grammar/parser.y"

#include "header.hpp"
ProgramAST *program;
extern FILE *yyin;
void yyerror(std::string s);
extern int yylineno;
extern int yylex();
// int yydebug = 1;


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 11 "./grammar/parser.y"
{
    int token;
    std::string *string;
    ExprAST *expr;
    CondAST *cond;
    StmtAST *stmt;
    DeclAST *decl;
    ConstArrayValuesAST *constArray;
    IdentListAST *identList;
    ConstDeclAST *constDecl;
    BlockAST *block;
    VarDeclAST *varDecl;
    ArrayDeclAST *arrayDecl;
    ProcDeclAST *procDecl;
    FuncDeclAST *funcDecl;
    ListExprAST *generalList;
    StmtListAST *stmtList;
}
/* Line 193 of yacc.c.  */
#line 207 "./src/generate/parser.cpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 220 "./src/generate/parser.cpp"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   446

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  92
/* YYNRULES -- Number of states.  */
#define YYNSTATES  199

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      47,    48,     2,     2,    46,     2,    42,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    43,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    44,     2,    45,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    13,    16,    20,    21,    24,    28,
      35,    41,    50,    54,    55,    58,    62,    65,    66,    68,
      72,    73,    80,    83,    84,    93,    96,    97,    99,   103,
     107,   111,   117,   124,   127,   129,   133,   135,   137,   139,
     141,   142,   145,   148,   150,   155,   162,   167,   174,   181,
     182,   187,   188,   193,   198,   203,   208,   213,   218,   223,
     229,   231,   233,   236,   238,   242,   243,   248,   251,   255,
     259,   263,   267,   271,   275,   277,   279,   283,   287,   291,
     295,   296,   300,   304,   308,   312,   316,   319,   322,   324,
     329,   331,   335
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      50,     0,    -1,    51,    42,    -1,    52,    54,    55,    57,
      58,    60,    -1,     1,    42,    -1,     5,    53,    43,    -1,
      -1,     1,    43,    -1,     4,    27,     3,    -1,     7,     4,
      27,    44,    59,    45,    -1,    53,    46,     4,    27,     3,
      -1,    53,    46,     7,     4,    27,    44,    59,    45,    -1,
       6,    56,    43,    -1,    -1,     1,    43,    -1,     7,    56,
      43,    -1,     1,    43,    -1,    -1,     4,    -1,    56,    46,
       4,    -1,    -1,    57,     8,     4,    43,    51,    43,    -1,
       1,    43,    -1,    -1,     9,     4,    47,    56,    48,    43,
      51,    43,    -1,     1,    43,    -1,    -1,     3,    -1,    59,
      46,     3,    -1,    59,     1,     3,    -1,     4,    33,    72,
      -1,     4,    33,    44,    71,    45,    -1,     4,    44,     3,
      45,    33,    72,    -1,    10,     4,    -1,    66,    -1,    11,
      68,    12,    -1,    61,    -1,    62,    -1,    67,    -1,    65,
      -1,    -1,     1,    12,    -1,     1,    43,    -1,     1,    -1,
      13,    70,    14,    60,    -1,    13,    70,    14,    60,    15,
      60,    -1,    16,    70,    17,    60,    -1,    18,     4,    19,
      72,    17,    60,    -1,    18,     4,    20,    72,    17,    60,
      -1,    -1,    16,     1,    63,    60,    -1,    -1,    18,     1,
      64,    60,    -1,    23,    47,    72,    48,    -1,    24,    47,
      72,    48,    -1,    25,    47,    72,    48,    -1,    23,    47,
       1,    48,    -1,    24,    47,     1,    48,    -1,    25,    47,
       1,    48,    -1,    10,     4,    47,    71,    48,    -1,    21,
      -1,    22,    -1,    22,    72,    -1,    60,    -1,    68,    43,
      60,    -1,    -1,    68,     1,    69,    60,    -1,    26,    72,
      -1,    72,    27,    72,    -1,    72,    28,    72,    -1,    72,
      29,    72,    -1,    72,    30,    72,    -1,    72,    32,    72,
      -1,    72,    31,    72,    -1,     3,    -1,     4,    -1,    71,
      46,     3,    -1,    71,    46,     4,    -1,    71,     1,     3,
      -1,    71,     1,     4,    -1,    -1,    72,    34,    72,    -1,
      72,    35,    72,    -1,    72,    36,    72,    -1,    72,    37,
      72,    -1,    72,    38,    72,    -1,    34,    72,    -1,    35,
      72,    -1,     4,    -1,     4,    44,     3,    45,    -1,     3,
      -1,    47,    72,    48,    -1,    66,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    63,    63,    65,    66,    69,    70,    71,    75,    81,
      87,    90,    96,    97,    98,   102,   103,   104,   108,   109,
     110,   114,   115,   116,   120,   121,   122,   125,   126,   127,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   152,   153,   156,   157,   158,   159,
     159,   160,   160,   164,   165,   166,   167,   168,   169,   174,
     180,   181,   182,   186,   187,   188,   188,   192,   193,   194,
     195,   196,   197,   198,   202,   203,   204,   205,   206,   207,
     208,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "IDENTIFIER", "CONST", "VAR",
  "ARRAY", "PROCEDURE", "FUNCTION", "CALL", "BEGN", "END", "IF", "THEN",
  "ELSE", "WHILE", "DO", "FOR", "UPTO", "DOWNTO", "BREAK", "RETURN",
  "READ", "WRITE", "WRITELINE", "ODD", "EQ", "NE", "GT", "LT", "GEQ",
  "LEQ", "ASGN", "PLUS", "MINUS", "MUL", "DIV", "MOD", "IFX", "UPLUS",
  "UMINUS", "'.'", "';'", "'['", "']'", "','", "'('", "')'", "$accept",
  "Program", "Block", "ConstDecl", "ConstAssignmentList", "VarDecl",
  "ArrayDecl", "IdentifierList", "ProcDecl", "FuncDecl", "ConstArray",
  "Statement", "ConditionalStatement", "LoopStatement", "@1", "@2",
  "IOStatement", "FuncCall", "ControlStatement", "StatementList", "@3",
  "Condition", "GeneralList", "Expression", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,    46,    59,    91,    93,    44,    40,    41
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    49,    50,    51,    51,    52,    52,    52,    53,    53,
      53,    53,    54,    54,    54,    55,    55,    55,    56,    56,
      56,    57,    57,    57,    58,    58,    58,    59,    59,    59,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    61,    61,    62,    62,    62,    63,
      62,    64,    62,    65,    65,    65,    65,    65,    65,    66,
      67,    67,    67,    68,    68,    69,    68,    70,    70,    70,
      70,    70,    70,    70,    71,    71,    71,    71,    71,    71,
      71,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     6,     2,     3,     0,     2,     3,     6,
       5,     8,     3,     0,     2,     3,     2,     0,     1,     3,
       0,     6,     2,     0,     8,     2,     0,     1,     3,     3,
       3,     5,     6,     2,     1,     3,     1,     1,     1,     1,
       0,     2,     2,     1,     4,     6,     4,     6,     6,     0,
       4,     0,     4,     4,     4,     4,     4,     4,     4,     5,
       1,     1,     2,     1,     3,     0,     4,     2,     3,     3,
       3,     3,     3,     3,     1,     1,     3,     3,     3,     3,
       0,     3,     3,     3,     3,     3,     2,     2,     1,     4,
       1,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     4,     7,     0,     0,
       0,     1,     2,     0,    20,     0,     0,     0,     5,     0,
      14,    18,     0,     0,    20,     0,     8,     0,     0,     0,
      12,     0,    16,     0,     0,     0,     0,     0,     0,    19,
      15,    22,     0,     0,     0,     0,    27,     0,    10,     0,
      25,     0,     0,    43,     0,     0,     0,     0,     0,     0,
      60,    61,     0,     0,     0,     3,    36,    37,    39,    34,
      38,     0,     9,     0,     0,     0,    20,    41,    42,     0,
       0,    33,    63,     0,    90,    88,     0,     0,     0,     0,
       0,    92,     0,     0,    49,     0,    51,     0,    62,     0,
       0,     0,    29,    28,     0,     0,     0,    80,    30,     0,
      80,    65,    35,     0,     0,     0,    67,    86,    87,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    21,     0,    74,    75,     0,     0,
       0,     0,    64,     0,    91,    44,    68,    69,    70,    71,
      73,    72,    81,    82,    83,    84,    85,    50,    46,    52,
       0,     0,    56,    53,    57,    54,    58,    55,     0,     0,
      31,     0,     0,    59,    66,    89,     0,     0,     0,     0,
      78,    79,    76,    77,    32,    45,    47,    48,    24
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,    10,    15,    25,    22,    35,    45,
      47,    65,    66,    67,   132,   134,    68,    91,    70,    83,
     151,    92,   148,    93
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -74
static const yytype_int16 yypact[] =
{
     384,    48,    29,    35,   -37,   186,   -74,   -74,    -3,    38,
       7,   -74,   -74,    -6,    42,   240,    54,    32,   -74,    67,
     -74,   -74,    61,    18,    42,   268,   -74,    51,    57,   126,
     -74,   132,   -74,    66,   110,   296,   154,   155,   140,   -74,
     -74,   -74,   116,   157,   168,   340,   -74,    17,   -74,   129,
     -74,   131,   130,    -5,   -12,   172,   356,   134,     5,   107,
     -74,   144,   135,   137,   138,   -74,   -74,   -74,   -74,   -74,
     -74,   183,   -74,   185,   154,   214,    42,   -74,   -74,   136,
     195,   142,   -74,    33,   -74,   156,   197,   144,   144,   144,
     144,   -74,   189,   408,   -74,   188,   -74,   115,    -8,     9,
      13,    63,   -74,   -74,    24,   163,   -26,   146,    -8,   167,
     146,   -74,   -74,   356,   210,   142,    -8,   -74,   -74,    65,
     312,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   312,   312,   312,   144,   144,   166,   311,   169,
     385,   178,   393,   -74,   -74,   173,   -74,   -74,    40,   198,
       3,   356,   -74,   200,   -74,   218,    -8,    -8,    -8,    -8,
      -8,    -8,    89,    89,   -74,   -74,   -74,   -74,   -74,   -74,
     128,   379,   -74,   -74,   -74,   -74,   -74,   -74,   214,   148,
     -74,   152,   144,   -74,   -74,   -74,   312,   312,   312,   191,
     -74,   -74,   -74,   -74,    -8,   -74,   -74,   -74,   -74
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -74,   -74,   -73,   -74,   -74,   -74,   -74,   -21,   -74,   -74,
     180,   -55,   -74,   -74,   -74,   -74,   -74,   -45,   -74,   -74,
     -74,   182,   133,    -7
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -41
static const yytype_int16 yytable[] =
{
      69,    82,   105,    33,   179,    12,    94,    77,    84,    85,
     137,    69,    84,    85,   139,    86,    84,    85,    71,    86,
      31,    79,   145,    86,    16,    71,   127,   128,   129,   130,
     131,    87,    80,     8,   111,    11,     9,    20,    78,    88,
      89,   179,    17,    88,    89,   112,    21,    88,    89,   181,
      18,   183,    90,    19,    98,   106,    90,    26,   152,    27,
      90,    32,    72,    73,   141,   155,    84,    85,    69,   143,
      73,    28,   108,    86,    29,    69,   113,   167,   168,   169,
     116,   117,   118,   119,    37,   180,   181,    69,    69,    69,
       6,     7,   138,   140,   142,    36,   184,    88,    89,   127,
     128,   129,   130,   131,    30,   189,    69,    31,    96,    40,
      90,    97,    31,   154,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   129,   130,   131,   170,   171,
      38,   195,   196,   197,   135,   136,    39,    84,    85,    84,
      85,    69,    69,    69,    86,   187,    86,    84,    85,   146,
     147,   190,   191,    41,    86,   192,   193,    46,    48,    50,
      87,    51,   127,   128,   129,   130,   131,    49,    88,    89,
      88,    89,    52,    74,    75,   194,    81,    76,    88,    89,
     107,    90,    99,    90,   100,   101,   102,    13,   103,   110,
     -13,    90,    14,   -13,   -13,   -13,   -13,   -13,   109,   -13,
     114,   115,   -13,   120,   -13,   133,   144,   -13,   -13,   -13,
     -13,   -13,   149,   153,   172,     1,   178,   174,    -6,     2,
      -6,    -6,    -6,    -6,    -6,    -6,   176,    -6,   -13,   -13,
      -6,   182,    -6,   186,   198,    -6,    -6,    -6,    -6,    -6,
      95,    23,     0,   150,   -17,   185,     0,    24,   -17,   -17,
     -17,   -17,     0,   -17,   104,     0,   -17,    -6,   -17,     0,
       0,   -17,   -17,   -17,   -17,   -17,     0,     0,     0,    34,
       0,     0,   -23,     0,     0,     0,   -23,   -23,   -23,   -23,
       0,   -23,   -17,   -17,   -23,     0,   -23,     0,     0,   -23,
     -23,   -23,   -23,   -23,     0,     0,     0,    42,     0,     0,
     -26,     0,     0,     0,    43,    44,   -26,   -26,     0,   -26,
     -23,   -23,   -26,    53,   -26,     0,    54,   -26,   -26,   -26,
     -26,   -26,    55,    56,   -40,    57,     0,   -40,    58,     0,
      59,     0,     0,    60,    61,    62,    63,    64,   -26,   -26,
       0,    53,     0,     0,    54,   127,   128,   129,   130,   131,
      55,    56,     0,    57,   -40,   -40,    58,    53,    59,   173,
      54,    60,    61,    62,    63,    64,    55,    56,   -40,    57,
       0,     0,    58,     0,    59,     0,     0,    60,    61,    62,
      63,    64,   -40,   -40,     0,     1,     0,     0,    -6,     2,
      -6,    -6,    -6,    -6,    -6,    -6,   188,    -6,     0,   -40,
      -6,     0,    -6,     0,     0,    -6,    -6,    -6,    -6,    -6,
       0,     0,     0,   127,   128,   129,   130,   131,     0,   127,
     128,   129,   130,   131,     0,     0,    -6,   127,   128,   129,
     130,   131,     0,   175,     0,   121,   122,   123,   124,   125,
     126,   177,   127,   128,   129,   130,   131
};

static const yytype_int16 yycheck[] =
{
      45,    56,    75,    24,     1,    42,     1,    12,     3,     4,
       1,    56,     3,     4,     1,    10,     3,     4,     1,    10,
      46,    33,    48,    10,    27,     1,    34,    35,    36,    37,
      38,    26,    44,     4,     1,     0,     7,    43,    43,    34,
      35,     1,     4,    34,    35,    12,     4,    34,    35,    46,
      43,    48,    47,    46,    61,    76,    47,     3,   113,    27,
      47,    43,    45,    46,     1,   120,     3,     4,   113,    45,
      46,     4,    79,    10,     7,   120,    43,   132,   133,   134,
      87,    88,    89,    90,    27,    45,    46,   132,   133,   134,
      42,    43,    99,   100,   101,    44,   151,    34,    35,    34,
      35,    36,    37,    38,    43,   178,   151,    46,     1,    43,
      47,     4,    46,    48,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,    36,    37,    38,   135,   136,
       4,   186,   187,   188,    19,    20,     4,     3,     4,     3,
       4,   186,   187,   188,    10,    17,    10,     3,     4,     3,
       4,     3,     4,    43,    10,     3,     4,     3,     3,    43,
      26,     4,    34,    35,    36,    37,    38,    27,    34,    35,
      34,    35,     4,    44,    43,   182,     4,    47,    34,    35,
      44,    47,    47,    47,    47,    47,     3,     1,     3,    47,
       4,    47,     6,     7,     8,     9,    10,    11,     3,    13,
      44,     4,    16,    14,    18,    17,    43,    21,    22,    23,
      24,    25,    45,     3,    48,     1,    43,    48,     4,     5,
       6,     7,     8,     9,    10,    11,    48,    13,    42,    43,
      16,    33,    18,    15,    43,    21,    22,    23,    24,    25,
      58,     1,    -1,   110,     4,    45,    -1,     7,     8,     9,
      10,    11,    -1,    13,    74,    -1,    16,    43,    18,    -1,
      -1,    21,    22,    23,    24,    25,    -1,    -1,    -1,     1,
      -1,    -1,     4,    -1,    -1,    -1,     8,     9,    10,    11,
      -1,    13,    42,    43,    16,    -1,    18,    -1,    -1,    21,
      22,    23,    24,    25,    -1,    -1,    -1,     1,    -1,    -1,
       4,    -1,    -1,    -1,     8,     9,    10,    11,    -1,    13,
      42,    43,    16,     1,    18,    -1,     4,    21,    22,    23,
      24,    25,    10,    11,    12,    13,    -1,    15,    16,    -1,
      18,    -1,    -1,    21,    22,    23,    24,    25,    42,    43,
      -1,     1,    -1,    -1,     4,    34,    35,    36,    37,    38,
      10,    11,    -1,    13,    42,    43,    16,     1,    18,    48,
       4,    21,    22,    23,    24,    25,    10,    11,    12,    13,
      -1,    -1,    16,    -1,    18,    -1,    -1,    21,    22,    23,
      24,    25,    42,    43,    -1,     1,    -1,    -1,     4,     5,
       6,     7,     8,     9,    10,    11,    17,    13,    -1,    43,
      16,    -1,    18,    -1,    -1,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    -1,    34,
      35,    36,    37,    38,    -1,    -1,    42,    34,    35,    36,
      37,    38,    -1,    48,    -1,    27,    28,    29,    30,    31,
      32,    48,    34,    35,    36,    37,    38
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     5,    50,    51,    52,    42,    43,     4,     7,
      53,     0,    42,     1,     6,    54,    27,     4,    43,    46,
      43,     4,    56,     1,     7,    55,     3,    27,     4,     7,
      43,    46,    43,    56,     1,    57,    44,    27,     4,     4,
      43,    43,     1,     8,     9,    58,     3,    59,     3,    27,
      43,     4,     4,     1,     4,    10,    11,    13,    16,    18,
      21,    22,    23,    24,    25,    60,    61,    62,    65,    66,
      67,     1,    45,    46,    44,    43,    47,    12,    43,    33,
      44,     4,    60,    68,     3,     4,    10,    26,    34,    35,
      47,    66,    70,    72,     1,    70,     1,     4,    72,    47,
      47,    47,     3,     3,    59,    51,    56,    44,    72,     3,
      47,     1,    12,    43,    44,     4,    72,    72,    72,    72,
      14,    27,    28,    29,    30,    31,    32,    34,    35,    36,
      37,    38,    63,    17,    64,    19,    20,     1,    72,     1,
      72,     1,    72,    45,    43,    48,     3,     4,    71,    45,
      71,    69,    60,     3,    48,    60,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    60,    60,    60,
      72,    72,    48,    48,    48,    48,    48,    48,    43,     1,
      45,    46,    33,    48,    60,    45,    15,    17,    17,    51,
       3,     4,     3,     4,    72,    60,    60,    60,    43
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 63 "./grammar/parser.y"
    {program = new ProgramAST((yyvsp[(1) - (2)].block));}
    break;

  case 3:
#line 65 "./grammar/parser.y"
    { (yyval.block) = new BlockAST((yyvsp[(1) - (6)].constDecl), (yyvsp[(2) - (6)].varDecl), (yyvsp[(3) - (6)].arrayDecl), (yyvsp[(4) - (6)].procDecl), (yyvsp[(5) - (6)].funcDecl), (yyvsp[(6) - (6)].stmt)); ;}
    break;

  case 4:
#line 66 "./grammar/parser.y"
    {yyerror("Invalid block construct"); yyerrok;;}
    break;

  case 5:
#line 69 "./grammar/parser.y"
    { (yyval.constDecl) = (yyvsp[(2) - (3)].constDecl); ;}
    break;

  case 6:
#line 70 "./grammar/parser.y"
    { std::vector<ConstVarAST*> vars; std::vector<ConstArrayAST*> arrays; (yyval.constDecl) = new ConstDeclAST(vars, arrays);;}
    break;

  case 7:
#line 71 "./grammar/parser.y"
    {yyerror("Invalid const declaration"); yyerrok;;}
    break;

  case 8:
#line 75 "./grammar/parser.y"
    {
                            std::vector<ConstVarAST*> vars; 
                            std::vector<ConstArrayAST*> arrays;
                            vars.push_back(new ConstVarAST(*(yyvsp[(1) - (3)].string), *(yyvsp[(3) - (3)].string)));
                            (yyval.constDecl) = new ConstDeclAST(vars, arrays);
                            ;}
    break;

  case 9:
#line 81 "./grammar/parser.y"
    {
                            std::vector<ConstVarAST*> vars; 
                            std::vector<ConstArrayAST*> arrays;
                            arrays.push_back(new ConstArrayAST(*(yyvsp[(2) - (6)].string), (yyvsp[(5) - (6)].constArray)));
                            (yyval.constDecl) = new ConstDeclAST(vars, arrays);
                        ;}
    break;

  case 10:
#line 87 "./grammar/parser.y"
    {
                            (yyvsp[(1) - (5)].constDecl)->addVar(new ConstVarAST(*(yyvsp[(3) - (5)].string), *(yyvsp[(5) - (5)].string)));
                        ;}
    break;

  case 11:
#line 90 "./grammar/parser.y"
    {
                            (yyvsp[(1) - (8)].constDecl)->addArray(new ConstArrayAST(*(yyvsp[(4) - (8)].string), (yyvsp[(7) - (8)].constArray)));
                        ;}
    break;

  case 12:
#line 96 "./grammar/parser.y"
    { (yyval.varDecl) = new VarDeclAST((yyvsp[(2) - (3)].identList)); ;}
    break;

  case 13:
#line 97 "./grammar/parser.y"
    { (yyval.varDecl) = new VarDeclAST(nullptr); ;}
    break;

  case 14:
#line 98 "./grammar/parser.y"
    {yyerror("Invalid variable declaration"); yyerrok;;}
    break;

  case 15:
#line 102 "./grammar/parser.y"
    { (yyval.arrayDecl) = new ArrayDeclAST((yyvsp[(2) - (3)].identList)); ;}
    break;

  case 16:
#line 103 "./grammar/parser.y"
    {yyerror("Invalid array declaration"); yyerrok;;}
    break;

  case 17:
#line 104 "./grammar/parser.y"
    { (yyval.arrayDecl) = new ArrayDeclAST(nullptr); ;}
    break;

  case 18:
#line 108 "./grammar/parser.y"
    { std::vector<std::string> ids; (yyval.identList) = new IdentListAST(ids); ids.push_back(*(yyvsp[(1) - (1)].string)); ;}
    break;

  case 19:
#line 109 "./grammar/parser.y"
    { (yyvsp[(1) - (3)].identList)->addToList(*(yyvsp[(3) - (3)].string)); ;}
    break;

  case 20:
#line 110 "./grammar/parser.y"
    { std::vector<std::string> ids; (yyval.identList) = new IdentListAST(ids); ;}
    break;

  case 21:
#line 114 "./grammar/parser.y"
    { (yyval.procDecl) = new ProcDeclAST(*(yyvsp[(3) - (6)].string), (yyvsp[(5) - (6)].block));;}
    break;

  case 22:
#line 115 "./grammar/parser.y"
    {yyerror("Invalid procedure declaration"); yyerrok;;}
    break;

  case 23:
#line 116 "./grammar/parser.y"
    { std::string x; (yyval.procDecl) = new ProcDeclAST(x, nullptr); ;}
    break;

  case 24:
#line 120 "./grammar/parser.y"
    { (yyval.funcDecl) = new FuncDeclAST(*(yyvsp[(2) - (8)].string), (yyvsp[(4) - (8)].identList), (yyvsp[(7) - (8)].block));;}
    break;

  case 25:
#line 121 "./grammar/parser.y"
    {yyerror("Invalid function declaration"); yyerrok;;}
    break;

  case 26:
#line 122 "./grammar/parser.y"
    { std::string x; (yyval.funcDecl) = new FuncDeclAST(x, nullptr, nullptr); ;}
    break;

  case 27:
#line 125 "./grammar/parser.y"
    { std::vector<std::string> nums; (yyval.constArray) = new ConstArrayValuesAST(nums); nums.push_back(*(yyvsp[(1) - (1)].string)); ;}
    break;

  case 28:
#line 126 "./grammar/parser.y"
    { (yyvsp[(1) - (3)].constArray)->addToList(*(yyvsp[(3) - (3)].string)); ;}
    break;

  case 29:
#line 127 "./grammar/parser.y"
    {yyerror("Invalid list construct"); yyerrok;;}
    break;

  case 30:
#line 132 "./grammar/parser.y"
    { (yyval.stmt) = new SingleAssignStmtAST(*(yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 31:
#line 133 "./grammar/parser.y"
    { (yyval.stmt) = new ArrayAssignStmtAST(*(yyvsp[(1) - (5)].string), (yyvsp[(4) - (5)].generalList)); ;}
    break;

  case 32:
#line 134 "./grammar/parser.y"
    { (yyval.stmt) = new IndexedAssignStmtAST(*(yyvsp[(1) - (6)].string), *(yyvsp[(3) - (6)].string), (yyvsp[(6) - (6)].expr)); ;}
    break;

  case 33:
#line 135 "./grammar/parser.y"
    { (yyval.stmt) = new ProcCallAST(*(yyvsp[(2) - (2)].string)); ;}
    break;

  case 34:
#line 136 "./grammar/parser.y"
    { (yyval.stmt) = new FuncCallStmtAST((yyvsp[(1) - (1)].expr));;}
    break;

  case 35:
#line 137 "./grammar/parser.y"
    { (yyval.stmt) = (yyvsp[(2) - (3)].stmtList); ;}
    break;

  case 40:
#line 142 "./grammar/parser.y"
    { std::vector<StmtAST*> stmts; (yyval.stmt) = new StmtListAST(stmts);;}
    break;

  case 41:
#line 143 "./grammar/parser.y"
    {yyerror("Invalid statement"); yyerrok;;}
    break;

  case 42:
#line 144 "./grammar/parser.y"
    {yyerror("Invalid statement"); yyerrok;;}
    break;

  case 43:
#line 145 "./grammar/parser.y"
    {yyerror("Invalid statement");;}
    break;

  case 44:
#line 152 "./grammar/parser.y"
    { (yyval.stmt) = new IfThenAST((yyvsp[(2) - (4)].cond), (yyvsp[(4) - (4)].stmt)); ;}
    break;

  case 45:
#line 153 "./grammar/parser.y"
    { (yyval.stmt) = new IfThenElseAST((yyvsp[(2) - (6)].cond), (yyvsp[(4) - (6)].stmt), (yyvsp[(6) - (6)].stmt)); ;}
    break;

  case 46:
#line 156 "./grammar/parser.y"
    { (yyval.stmt) = new WhileStmtAST((yyvsp[(2) - (4)].cond), (yyvsp[(4) - (4)].stmt)); ;}
    break;

  case 47:
#line 157 "./grammar/parser.y"
    { (yyval.stmt) = new ForStmtAST(*(yyvsp[(2) - (6)].string), (yyvsp[(4) - (6)].expr), 0, (yyvsp[(6) - (6)].stmt)); ;}
    break;

  case 48:
#line 158 "./grammar/parser.y"
    { (yyval.stmt) = new ForStmtAST(*(yyvsp[(2) - (6)].string), (yyvsp[(4) - (6)].expr), 1, (yyvsp[(6) - (6)].stmt)); ;}
    break;

  case 49:
#line 159 "./grammar/parser.y"
    {yyerror("Invalid while construct"); yyclearin;;}
    break;

  case 50:
#line 159 "./grammar/parser.y"
    { (yyval.stmt) = new WhileStmtAST(0, (yyvsp[(4) - (4)].stmt));;}
    break;

  case 51:
#line 160 "./grammar/parser.y"
    {yyerror("Invalid for construct"); yyclearin;;}
    break;

  case 52:
#line 160 "./grammar/parser.y"
    { (yyval.stmt) = new ForStmtAST("", 0, 0, (yyvsp[(4) - (4)].stmt));;}
    break;

  case 53:
#line 164 "./grammar/parser.y"
    { (yyval.stmt) = new IOStmtAST(0, (yyvsp[(3) - (4)].expr)); ;}
    break;

  case 54:
#line 165 "./grammar/parser.y"
    { (yyval.stmt) = new IOStmtAST(1, (yyvsp[(3) - (4)].expr)); ;}
    break;

  case 55:
#line 166 "./grammar/parser.y"
    { (yyval.stmt) = new IOStmtAST(2, (yyvsp[(3) - (4)].expr)); ;}
    break;

  case 56:
#line 167 "./grammar/parser.y"
    {yyerror("Invalid read() call"); yyerrok;;}
    break;

  case 57:
#line 168 "./grammar/parser.y"
    {yyerror("Invalid write() call"); yyerrok;;}
    break;

  case 58:
#line 169 "./grammar/parser.y"
    {yyerror("Invalid writeline() call"); yyerrok;;}
    break;

  case 59:
#line 174 "./grammar/parser.y"
    { (yyval.expr) = new FuncCallAST(*(yyvsp[(2) - (5)].string), (yyvsp[(4) - (5)].generalList));;}
    break;

  case 60:
#line 180 "./grammar/parser.y"
    { (yyval.stmt) = new NoValControlAST(0); ;}
    break;

  case 61:
#line 181 "./grammar/parser.y"
    { (yyval.stmt) = new NoValControlAST(1); ;}
    break;

  case 62:
#line 182 "./grammar/parser.y"
    { (yyval.stmt) = new ReturnValueControlAST((yyvsp[(2) - (2)].expr)); ;}
    break;

  case 63:
#line 186 "./grammar/parser.y"
    { std::vector<StmtAST*> stmts; (yyval.stmtList) = new StmtListAST(stmts); ;}
    break;

  case 64:
#line 187 "./grammar/parser.y"
    { (yyvsp[(1) - (3)].stmtList)->addToList((yyvsp[(3) - (3)].stmt)); ;}
    break;

  case 65:
#line 188 "./grammar/parser.y"
    {yyerror("Missing semicolon"); yyerrok;;}
    break;

  case 67:
#line 192 "./grammar/parser.y"
    { (yyval.cond) = new OddCondAST((yyvsp[(2) - (2)].expr)); ;}
    break;

  case 68:
#line 193 "./grammar/parser.y"
    { (yyval.cond) = new BinaryCondAST(0, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 69:
#line 194 "./grammar/parser.y"
    { (yyval.cond) = new BinaryCondAST(1, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 70:
#line 195 "./grammar/parser.y"
    { (yyval.cond) = new BinaryCondAST(2, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 71:
#line 196 "./grammar/parser.y"
    { (yyval.cond) = new BinaryCondAST(3, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 72:
#line 197 "./grammar/parser.y"
    { (yyval.cond) = new BinaryCondAST(4, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 73:
#line 198 "./grammar/parser.y"
    { (yyval.cond) = new BinaryCondAST(5, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 74:
#line 202 "./grammar/parser.y"
    { std::vector<ExprAST*> exprs; exprs.push_back(new NumberExprAST(*(yyvsp[(1) - (1)].string))); (yyval.generalList) = new ListExprAST(exprs);;}
    break;

  case 75:
#line 203 "./grammar/parser.y"
    { std::vector<ExprAST*> exprs; exprs.push_back(new VariableExprAST(*(yyvsp[(1) - (1)].string))); (yyval.generalList) = new ListExprAST(exprs);;}
    break;

  case 76:
#line 204 "./grammar/parser.y"
    { (yyvsp[(1) - (3)].generalList)->addToList(new NumberExprAST(*(yyvsp[(3) - (3)].string))); ;}
    break;

  case 77:
#line 205 "./grammar/parser.y"
    { (yyvsp[(1) - (3)].generalList)->addToList(new VariableExprAST(*(yyvsp[(3) - (3)].string))); ;}
    break;

  case 78:
#line 206 "./grammar/parser.y"
    {yyerror("Invalid list construct"); yyerrok;;}
    break;

  case 79:
#line 207 "./grammar/parser.y"
    {yyerror("Invalid list construct"); yyerrok;;}
    break;

  case 80:
#line 208 "./grammar/parser.y"
    { std::vector<ExprAST*> exprs; (yyval.generalList) = new ListExprAST(exprs); ;}
    break;

  case 81:
#line 213 "./grammar/parser.y"
    { (yyval.expr) = new BinaryExprAST('+', (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 82:
#line 214 "./grammar/parser.y"
    { (yyval.expr) = new BinaryExprAST('-', (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 83:
#line 215 "./grammar/parser.y"
    { (yyval.expr) = new BinaryExprAST('*', (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 84:
#line 216 "./grammar/parser.y"
    { (yyval.expr) = new BinaryExprAST('/', (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 85:
#line 217 "./grammar/parser.y"
    { (yyval.expr) = new BinaryExprAST('%', (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 86:
#line 218 "./grammar/parser.y"
    { (yyval.expr) = new UnaryExprAST('+', (yyvsp[(2) - (2)].expr)); ;}
    break;

  case 87:
#line 219 "./grammar/parser.y"
    { (yyval.expr) = new UnaryExprAST('-', (yyvsp[(2) - (2)].expr)); ;}
    break;

  case 88:
#line 220 "./grammar/parser.y"
    { (yyval.expr) = new VariableExprAST(*(yyvsp[(1) - (1)].string)); ;}
    break;

  case 89:
#line 221 "./grammar/parser.y"
    { (yyval.expr) = new ArrayVarExprAST(*(yyvsp[(1) - (4)].string), *(yyvsp[(3) - (4)].string)); ;}
    break;

  case 90:
#line 222 "./grammar/parser.y"
    { (yyval.expr) = new NumberExprAST(*(yyvsp[(1) - (1)].string));}
    break;

  case 91:
#line 223 "./grammar/parser.y"
    { (yyval.expr) = (yyvsp[(2) - (3)].expr); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2073 "./src/generate/parser.cpp"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 227 "./grammar/parser.y"

// User Subroutines

void yyerror(std::string s) {
    std::cerr << "line " << yylineno << ": " << s << std::endl;
}


int main(int argc, char ** argv){

    yyin = fopen(argv[1], "r");
    yyparse();
    fclose(yyin);

}
