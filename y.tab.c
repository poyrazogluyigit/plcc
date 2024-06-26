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
     IDK = 283,
     GT = 284,
     LT = 285,
     GEQ = 286,
     LEQ = 287,
     ASGN = 288,
     IFX = 289,
     UPLUS = 290,
     UMINUS = 291
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
#define IDK 283
#define GT 284
#define LT 285
#define GEQ 286
#define LEQ 287
#define ASGN 288
#define IFX 289
#define UPLUS 290
#define UMINUS 291




/* Copy the first part of user declarations.  */
#line 1 "grmr.y"

#include "defs.h"

extern std::map<std::string, int> symbolTable;
void yyerror(char* v);
extern FILE * yyin;
extern int yylineno;
extern int yylex();
int error = 0;
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
#line 13 "grmr.y"
{
        char* dval;
}
/* Line 193 of yacc.c.  */
#line 184 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 197 "y.tab.c"

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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   497

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNRULES -- Number of states.  */
#define YYNSTATES  203

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   291

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    39,     2,     2,
      49,    50,    37,    35,    46,    36,    42,    38,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    43,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    44,     2,    45,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    47,     2,    48,     2,     2,     2,     2,
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
      40,    41
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    13,    18,    22,    23,    26,    30,
      37,    43,    52,    56,    57,    60,    68,    71,    72,    74,
      78,    79,    86,    89,    90,    99,   102,   103,   107,   114,
     117,   119,   123,   125,   127,   129,   131,   132,   135,   138,
     140,   145,   152,   157,   164,   171,   172,   177,   178,   183,
     188,   193,   198,   203,   208,   213,   219,   221,   223,   226,
     228,   232,   233,   238,   241,   245,   249,   253,   257,   261,
     265,   267,   271,   275,   277,   279,   283,   287,   291,   295,
     296,   300,   304,   308,   312,   316,   319,   322,   324,   329,
     331,   335
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      52,     0,    -1,    53,    42,    -1,    55,    57,    58,    60,
      61,    62,    -1,    55,    57,    58,    62,    -1,     5,    56,
      43,    -1,    -1,     1,    43,    -1,     4,    27,     3,    -1,
       7,     4,    27,    44,    73,    45,    -1,    56,    46,     4,
      27,     3,    -1,    56,    46,     7,     4,    27,    44,    73,
      45,    -1,     6,    59,    43,    -1,    -1,     1,    43,    -1,
       7,    47,     3,    48,    59,    43,    58,    -1,     1,    43,
      -1,    -1,     4,    -1,    59,    46,     4,    -1,    -1,    60,
       8,     4,    43,    54,    43,    -1,     1,    43,    -1,    -1,
       9,     4,    49,    59,    50,    43,    54,    43,    -1,     1,
      43,    -1,    -1,     4,    33,    75,    -1,     4,    44,    75,
      45,    33,    75,    -1,    10,     4,    -1,    68,    -1,    11,
      70,    12,    -1,    63,    -1,    64,    -1,    69,    -1,    67,
      -1,    -1,     1,    12,    -1,     1,    43,    -1,     1,    -1,
      13,    72,    14,    62,    -1,    13,    72,    14,    62,    15,
      62,    -1,    16,    72,    17,    62,    -1,    18,     4,    19,
      75,    17,    62,    -1,    18,     4,    20,    75,    17,    62,
      -1,    -1,    16,     1,    65,    62,    -1,    -1,    18,     1,
      66,    62,    -1,    23,    49,     4,    50,    -1,    24,    49,
       4,    50,    -1,    25,    49,     4,    50,    -1,    23,    49,
       1,    50,    -1,    24,    49,     1,    50,    -1,    25,    49,
       1,    50,    -1,    10,     4,    49,    74,    50,    -1,    21,
      -1,    22,    -1,    22,    75,    -1,    62,    -1,    70,    43,
      62,    -1,    -1,    70,     1,    71,    62,    -1,    26,    75,
      -1,    75,    27,    75,    -1,    75,    28,    75,    -1,    75,
      29,    75,    -1,    75,    30,    75,    -1,    75,    32,    75,
      -1,    75,    31,    75,    -1,     3,    -1,    73,    46,     3,
      -1,    73,     1,     3,    -1,     3,    -1,     4,    -1,    74,
      46,     3,    -1,    74,    46,     4,    -1,    74,     1,     3,
      -1,    74,     1,     4,    -1,    -1,    75,    35,    75,    -1,
      75,    36,    75,    -1,    75,    37,    75,    -1,    75,    38,
      75,    -1,    75,    39,    75,    -1,    35,    75,    -1,    36,
      75,    -1,     4,    -1,     4,    44,    75,    45,    -1,     3,
      -1,    49,    75,    50,    -1,    68,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    49,    49,    51,    53,    56,    57,    58,    63,    64,
      65,    66,    70,    71,    72,    76,    77,    78,    82,    83,
      84,    88,    89,    90,    94,    95,    96,   101,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     120,   121,   124,   125,   126,   127,   127,   128,   128,   132,
     133,   134,   135,   136,   137,   142,   148,   148,   148,   151,
     152,   153,   153,   157,   158,   159,   160,   161,   162,   163,
     167,   168,   169,   173,   174,   175,   176,   177,   178,   179,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195
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
  "READ", "WRITE", "WRITELINE", "ODD", "EQ", "IDK", "GT", "LT", "GEQ",
  "LEQ", "ASGN", "IFX", "'+'", "'-'", "'*'", "'/'", "'%'", "UPLUS",
  "UMINUS", "'.'", "';'", "'['", "']'", "','", "'{'", "'}'", "'('", "')'",
  "$accept", "Program", "TopBlock", "Block", "ConstDecl",
  "ConstAssignmentList", "VarDecl", "ArrayDecl", "IdentifierList",
  "ProcDecl", "FuncDecl", "Statement", "ConditionalStatement",
  "LoopStatement", "@1", "@2", "IOStatement", "FuncCall",
  "ControlStatement", "StatementList", "@3", "Condition", "ConstArray",
  "GeneralList", "Expression", 0
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
     285,   286,   287,   288,   289,    43,    45,    42,    47,    37,
     290,   291,    46,    59,    91,    93,    44,   123,   125,    40,
      41
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    53,    54,    55,    55,    55,    56,    56,
      56,    56,    57,    57,    57,    58,    58,    58,    59,    59,
      59,    60,    60,    60,    61,    61,    61,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      63,    63,    64,    64,    64,    65,    64,    66,    64,    67,
      67,    67,    67,    67,    67,    68,    69,    69,    69,    70,
      70,    71,    70,    72,    72,    72,    72,    72,    72,    72,
      73,    73,    73,    74,    74,    74,    74,    74,    74,    74,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     6,     4,     3,     0,     2,     3,     6,
       5,     8,     3,     0,     2,     7,     2,     0,     1,     3,
       0,     6,     2,     0,     8,     2,     0,     3,     6,     2,
       1,     3,     1,     1,     1,     1,     0,     2,     2,     1,
       4,     6,     4,     6,     6,     0,     4,     0,     4,     4,
       4,     4,     4,     4,     4,     5,     1,     1,     2,     1,
       3,     0,     4,     2,     3,     3,     3,     3,     3,     3,
       1,     3,     3,     1,     1,     3,     3,     3,     3,     0,
       3,     3,     3,     3,     3,     2,     2,     1,     4,     1,
       3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     7,     0,     0,     0,
       1,     2,     0,    20,     0,     0,     0,     5,     0,    14,
      18,     0,     0,     0,     0,     8,     0,     0,     0,    12,
       0,    16,     0,     0,     0,     0,     0,     0,    19,     0,
      22,     0,     0,     0,     0,    70,     0,    10,     0,    20,
      25,     0,     0,    39,     0,     0,     0,     0,     0,     0,
      56,    57,     0,     0,     0,     3,    32,    33,    35,    30,
      34,     0,     9,     0,     0,     0,     0,    20,    37,    38,
       0,     0,    29,    59,     0,    89,    87,     0,     0,     0,
       0,     0,    91,     0,     0,    45,     0,    47,     0,    58,
       0,     0,     0,    72,    71,     0,     0,     0,     0,     0,
      27,     0,    79,    61,    31,     0,     0,     0,    63,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    15,    21,     0,     0,
       0,    73,    74,     0,     0,    60,     0,    90,    40,    64,
      65,    66,    67,    69,    68,    80,    81,    82,    83,    84,
      46,    42,    48,     0,     0,    52,    49,    53,    50,    54,
      51,     0,     0,     0,     0,     0,    55,    62,    88,     0,
       0,     0,     4,     0,    28,    77,    78,    75,    76,    41,
      43,    44,    24
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,   107,   108,     9,    14,    24,    21,    34,
      44,    65,    66,    67,   134,   136,    68,    92,    70,    84,
     154,    93,    46,   153,    94
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -104
static const yytype_int16 yypact[] =
{
     330,   -25,    16,    46,    15,   355,  -104,    57,    85,    42,
    -104,  -104,    64,   121,   380,   135,   117,  -104,    89,  -104,
    -104,    51,   131,   125,   405,  -104,   133,   148,   175,  -104,
     176,  -104,   183,   144,   430,   185,   187,   164,  -104,   149,
    -104,   153,   196,   201,   455,  -104,     4,  -104,   163,   121,
    -104,   171,   167,    10,   -12,   213,   258,     5,     3,    94,
    -104,     7,   170,   172,   173,  -104,  -104,  -104,  -104,  -104,
    -104,   217,  -104,   220,   185,    66,   188,   121,  -104,  -104,
       7,     7,   179,  -104,    18,  -104,   189,   230,     7,     7,
       7,     7,  -104,   226,    92,  -104,   224,  -104,    98,   -11,
     107,   138,   139,  -104,  -104,    13,   160,   199,   242,    37,
     -11,    27,   129,  -104,  -104,   258,     7,   179,   -11,  -104,
    -104,    -2,   214,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,   214,   214,   214,     7,     7,   194,
     195,   197,   200,   204,   211,  -104,  -104,  -104,   286,   208,
     239,  -104,  -104,     1,   258,  -104,   425,  -104,   260,   -11,
     -11,   -11,   -11,   -11,   -11,    31,    31,  -104,  -104,  -104,
    -104,  -104,  -104,    38,    65,  -104,  -104,  -104,  -104,  -104,
    -104,   302,   188,     7,   156,   162,  -104,  -104,  -104,   214,
     214,   214,  -104,   234,   -11,  -104,  -104,  -104,  -104,  -104,
    -104,  -104,  -104
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -104,  -104,  -104,    91,   278,  -104,   178,  -103,   -33,  -104,
    -104,   -55,  -104,  -104,  -104,  -104,  -104,   -44,  -104,  -104,
    -104,   231,   210,  -104,    25
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -37
static const yytype_int16 yytable[] =
{
      69,    83,   184,   146,    95,    71,    85,    86,    85,    86,
      85,    86,    69,    87,    71,    87,    75,    87,     6,   113,
       7,    80,    78,     8,   129,   130,   131,   132,   133,    88,
     114,    88,    81,   129,   130,   131,   132,   133,    89,    90,
      89,    90,    89,    90,   109,   181,    10,   185,   157,    72,
      73,   186,    91,    79,    91,   190,    91,    11,   145,    73,
     155,   115,   129,   130,   131,   132,   133,   158,   131,   132,
     133,    69,   150,   129,   130,   131,   132,   133,    69,   170,
     171,   172,   191,    30,    15,    17,    99,   149,    18,    16,
      69,    69,    69,    27,    29,    97,    28,    30,    98,   187,
     129,   130,   131,   132,   133,   110,   111,    19,   139,   106,
      69,   140,    30,   118,   119,   120,   121,   137,   138,   123,
     124,   125,   126,   127,   128,    20,   192,   129,   130,   131,
     132,   133,   151,   152,   199,   200,   201,    69,    25,   141,
     143,   156,   142,   144,    26,    69,    69,    69,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   195,
     196,    22,   173,   174,   -17,   197,   198,    23,   -17,   -17,
     -17,   -17,    32,   -17,    31,    36,   -17,    35,   -17,    37,
      38,   -17,   -17,   -17,   -17,   -17,    39,    40,    45,     1,
      47,    48,    -6,     2,    -6,    -6,    50,    49,    -6,    -6,
      51,    -6,   -17,   -17,    -6,    52,    -6,    74,   194,    -6,
      -6,    -6,    -6,    -6,    76,    53,    77,    82,    54,   100,
     103,   101,   102,   104,    55,    56,   -36,    57,   112,   -36,
      58,    -6,    59,   116,   117,    60,    61,    62,    63,    64,
     122,   135,   147,    12,   175,   176,   -13,   177,    13,   -13,
     178,   182,   -13,   -13,   179,   -13,   -36,   -36,   -13,    53,
     -13,   180,    54,   -13,   -13,   -13,   -13,   -13,    55,    56,
     -36,    57,   183,   193,    58,   189,    59,   202,     5,    60,
      61,    62,    63,    64,   105,   -13,   148,    22,     0,    96,
     -17,     0,     0,    23,     0,     0,   -17,   -17,     0,   -17,
       0,   -36,   -17,    53,   -17,     0,    54,   -17,   -17,   -17,
     -17,   -17,    55,    56,     0,    57,     0,     0,    58,     0,
      59,     0,     0,    60,    61,    62,    63,    64,     0,   -17,
       0,     1,     0,     0,    -6,     2,    -6,    -6,    -6,    -6,
      -6,    -6,     0,    -6,     0,   -36,    -6,     0,    -6,     0,
       0,    -6,    -6,    -6,    -6,    -6,    12,     0,     0,   -13,
       0,    13,   -13,   -13,   -13,   -13,   -13,     0,   -13,     0,
       0,   -13,    -6,   -13,     0,     0,   -13,   -13,   -13,   -13,
     -13,    22,     0,     0,   -17,     0,     0,    23,   -17,   -17,
     -17,   -17,     0,   -17,     0,     0,   -17,   -13,   -17,     0,
       0,   -17,   -17,   -17,   -17,   -17,    33,     0,     0,   -23,
       0,     0,     0,   -23,   -23,   -23,   -23,     0,   -23,     0,
       0,   -23,   -17,   -23,     0,     0,   -23,   -23,   -23,   -23,
     -23,    41,     0,     0,   -26,     0,     0,     0,    42,    43,
     -26,   -26,     0,   -26,     0,     0,   -26,   -23,   -26,     0,
       0,   -26,   -26,   -26,   -26,   -26,    53,     0,     0,    54,
     129,   130,   131,   132,   133,    55,    56,     0,    57,     0,
     188,    58,   -26,    59,     0,     0,    60,    61,    62,    63,
      64,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -36
};

static const yytype_int16 yycheck[] =
{
      44,    56,     1,   106,     1,     1,     3,     4,     3,     4,
       3,     4,    56,    10,     1,    10,    49,    10,    43,     1,
       4,    33,    12,     7,    35,    36,    37,    38,    39,    26,
      12,    26,    44,    35,    36,    37,    38,    39,    35,    36,
      35,    36,    35,    36,    77,   148,     0,    46,    50,    45,
      46,    50,    49,    43,    49,    17,    49,    42,    45,    46,
     115,    43,    35,    36,    37,    38,    39,   122,    37,    38,
      39,   115,    45,    35,    36,    37,    38,    39,   122,   134,
     135,   136,    17,    46,    27,    43,    61,    50,    46,     4,
     134,   135,   136,     4,    43,     1,     7,    46,     4,   154,
      35,    36,    37,    38,    39,    80,    81,    43,     1,    43,
     154,     4,    46,    88,    89,    90,    91,    19,    20,    27,
      28,    29,    30,    31,    32,     4,   181,    35,    36,    37,
      38,    39,     3,     4,   189,   190,   191,   181,     3,     1,
       1,   116,     4,     4,    27,   189,   190,   191,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,     3,
       4,     1,   137,   138,     4,     3,     4,     7,     8,     9,
      10,    11,    47,    13,    43,    27,    16,    44,    18,     4,
       4,    21,    22,    23,    24,    25,     3,    43,     3,     1,
       3,    27,     4,     5,     6,     7,    43,    48,    10,    11,
       4,    13,    42,    43,    16,     4,    18,    44,   183,    21,
      22,    23,    24,    25,    43,     1,    49,     4,     4,    49,
       3,    49,    49,     3,    10,    11,    12,    13,    49,    15,
      16,    43,    18,    44,     4,    21,    22,    23,    24,    25,
      14,    17,    43,     1,    50,    50,     4,    50,     6,     7,
      50,    43,    10,    11,    50,    13,    42,    43,    16,     1,
      18,    50,     4,    21,    22,    23,    24,    25,    10,    11,
      12,    13,    33,   182,    16,    15,    18,    43,     0,    21,
      22,    23,    24,    25,    74,    43,   108,     1,    -1,    58,
       4,    -1,    -1,     7,    -1,    -1,    10,    11,    -1,    13,
      -1,    43,    16,     1,    18,    -1,     4,    21,    22,    23,
      24,    25,    10,    11,    -1,    13,    -1,    -1,    16,    -1,
      18,    -1,    -1,    21,    22,    23,    24,    25,    -1,    43,
      -1,     1,    -1,    -1,     4,     5,     6,     7,     8,     9,
      10,    11,    -1,    13,    -1,    43,    16,    -1,    18,    -1,
      -1,    21,    22,    23,    24,    25,     1,    -1,    -1,     4,
      -1,     6,     7,     8,     9,    10,    11,    -1,    13,    -1,
      -1,    16,    42,    18,    -1,    -1,    21,    22,    23,    24,
      25,     1,    -1,    -1,     4,    -1,    -1,     7,     8,     9,
      10,    11,    -1,    13,    -1,    -1,    16,    42,    18,    -1,
      -1,    21,    22,    23,    24,    25,     1,    -1,    -1,     4,
      -1,    -1,    -1,     8,     9,    10,    11,    -1,    13,    -1,
      -1,    16,    42,    18,    -1,    -1,    21,    22,    23,    24,
      25,     1,    -1,    -1,     4,    -1,    -1,    -1,     8,     9,
      10,    11,    -1,    13,    -1,    -1,    16,    42,    18,    -1,
      -1,    21,    22,    23,    24,    25,     1,    -1,    -1,     4,
      35,    36,    37,    38,    39,    10,    11,    -1,    13,    -1,
      45,    16,    42,    18,    -1,    -1,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     5,    52,    53,    55,    43,     4,     7,    56,
       0,    42,     1,     6,    57,    27,     4,    43,    46,    43,
       4,    59,     1,     7,    58,     3,    27,     4,     7,    43,
      46,    43,    47,     1,    60,    44,    27,     4,     4,     3,
      43,     1,     8,     9,    61,     3,    73,     3,    27,    48,
      43,     4,     4,     1,     4,    10,    11,    13,    16,    18,
      21,    22,    23,    24,    25,    62,    63,    64,    67,    68,
      69,     1,    45,    46,    44,    59,    43,    49,    12,    43,
      33,    44,     4,    62,    70,     3,     4,    10,    26,    35,
      36,    49,    68,    72,    75,     1,    72,     1,     4,    75,
      49,    49,    49,     3,     3,    73,    43,    54,    55,    59,
      75,    75,    49,     1,    12,    43,    44,     4,    75,    75,
      75,    75,    14,    27,    28,    29,    30,    31,    32,    35,
      36,    37,    38,    39,    65,    17,    66,    19,    20,     1,
       4,     1,     4,     1,     4,    45,    58,    43,    57,    50,
      45,     3,     4,    74,    71,    62,    75,    50,    62,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      62,    62,    62,    75,    75,    50,    50,    50,    50,    50,
      50,    58,    43,    33,     1,    46,    50,    62,    45,    15,
      17,    17,    62,    54,    75,     3,     4,     3,     4,    62,
      62,    62,    43
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
        case 7:
#line 58 "grmr.y"
    {yyerror("Invalid const declaration"); yyerrok;}
    break;

  case 8:
#line 63 "grmr.y"
    {constAssign((yyvsp[(1) - (3)].dval), (yyvsp[(3) - (3)].dval));}
    break;

  case 10:
#line 65 "grmr.y"
    {constAssign((yyvsp[(3) - (5)].dval), (yyvsp[(5) - (5)].dval));}
    break;

  case 14:
#line 72 "grmr.y"
    {yyerror("Invalid variable declaration"); yyerrok;}
    break;

  case 16:
#line 77 "grmr.y"
    {yyerror("Invalid array declaration"); yyerrok;}
    break;

  case 22:
#line 89 "grmr.y"
    {yyerror("Invalid procedure declaration"); yyerrok;}
    break;

  case 25:
#line 95 "grmr.y"
    {yyerror("Invalid function declaration"); yyerrok;}
    break;

  case 27:
#line 101 "grmr.y"
    {assignment((yyvsp[(1) - (3)].dval), (yyvsp[(3) - (3)].dval));}
    break;

  case 37:
#line 112 "grmr.y"
    {yyerror("Invalid statement"); yyerrok;}
    break;

  case 38:
#line 113 "grmr.y"
    {yyerror("Invalid statement"); yyerrok;}
    break;

  case 39:
#line 114 "grmr.y"
    {yyerror("Invalid statement");}
    break;

  case 45:
#line 127 "grmr.y"
    {yyerror("Invalid while construct"); yyclearin;}
    break;

  case 47:
#line 128 "grmr.y"
    {yyerror("Invalid for construct"); yyclearin;}
    break;

  case 49:
#line 132 "grmr.y"
    {read((yyvsp[(3) - (4)].dval));}
    break;

  case 50:
#line 133 "grmr.y"
    {write((yyvsp[(3) - (4)].dval));}
    break;

  case 51:
#line 134 "grmr.y"
    {writeline((yyvsp[(3) - (4)].dval));}
    break;

  case 52:
#line 135 "grmr.y"
    {yyerror("Invalid read() call"); yyerrok;}
    break;

  case 53:
#line 136 "grmr.y"
    {yyerror("Invalid write() call"); yyerrok;}
    break;

  case 54:
#line 137 "grmr.y"
    {yyerror("Invalid writeline() call"); yyerrok;}
    break;

  case 61:
#line 153 "grmr.y"
    {yyerror("Missing semicolon"); yyerrok;}
    break;

  case 63:
#line 157 "grmr.y"
    {(yyval.dval) = odd(string((yyvsp[(2) - (2)].dval)));}
    break;

  case 64:
#line 158 "grmr.y"
    {(yyval.dval) = condition(string("eq"), string((yyvsp[(1) - (3)].dval)), string((yyvsp[(3) - (3)].dval)));}
    break;

  case 65:
#line 159 "grmr.y"
    {(yyval.dval) = condition(string("ne"), string((yyvsp[(1) - (3)].dval)), string((yyvsp[(3) - (3)].dval)));}
    break;

  case 66:
#line 160 "grmr.y"
    {(yyval.dval) = condition(string("sgt"), string((yyvsp[(1) - (3)].dval)), string((yyvsp[(3) - (3)].dval)));}
    break;

  case 67:
#line 161 "grmr.y"
    {(yyval.dval) = condition(string("slt"), string((yyvsp[(1) - (3)].dval)), string((yyvsp[(3) - (3)].dval)));}
    break;

  case 68:
#line 162 "grmr.y"
    {(yyval.dval) = condition(string("sle"), string((yyvsp[(1) - (3)].dval)), string((yyvsp[(3) - (3)].dval)));}
    break;

  case 69:
#line 163 "grmr.y"
    {(yyval.dval) = condition(string("sge"), string((yyvsp[(1) - (3)].dval)), string((yyvsp[(3) - (3)].dval)));}
    break;

  case 72:
#line 169 "grmr.y"
    {yyerror("Invalid list construct"); yyerrok;}
    break;

  case 74:
#line 174 "grmr.y"
    {(yyval.dval) = loadvariable(string((yyvsp[(1) - (1)].dval)));}
    break;

  case 77:
#line 177 "grmr.y"
    {yyerror("Invalid list construct"); yyerrok;}
    break;

  case 78:
#line 178 "grmr.y"
    {yyerror("Invalid list construct"); yyerrok;}
    break;

  case 80:
#line 184 "grmr.y"
    {(yyval.dval) = operation(string("add"), string((yyvsp[(1) - (3)].dval)), string((yyvsp[(3) - (3)].dval)));}
    break;

  case 81:
#line 185 "grmr.y"
    {(yyval.dval) = operation(string("sub"),string((yyvsp[(1) - (3)].dval)),string((yyvsp[(3) - (3)].dval))) ;}
    break;

  case 82:
#line 186 "grmr.y"
    {(yyval.dval) = operation(string("mul"),string((yyvsp[(1) - (3)].dval)),string((yyvsp[(3) - (3)].dval))) ;}
    break;

  case 83:
#line 187 "grmr.y"
    {(yyval.dval) = operation(string("sdiv"),string((yyvsp[(1) - (3)].dval)),string((yyvsp[(3) - (3)].dval))) ;}
    break;

  case 84:
#line 188 "grmr.y"
    {(yyval.dval) = operation(string("srem"), string((yyvsp[(1) - (3)].dval)), string((yyvsp[(3) - (3)].dval)));}
    break;

  case 85:
#line 189 "grmr.y"
    { (yyval.dval) = (yyvsp[(2) - (2)].dval); }
    break;

  case 86:
#line 190 "grmr.y"
    { (yyval.dval) = operation(string("sub"),string("0"),string((yyvsp[(2) - (2)].dval))); }
    break;

  case 87:
#line 191 "grmr.y"
    {(yyval.dval) = loadvariable(string((yyvsp[(1) - (1)].dval)));}
    break;

  case 88:
#line 192 "grmr.y"
    {}
    break;

  case 89:
#line 193 "grmr.y"
    { (yyval.dval) = (yyvsp[(1) - (1)].dval) ; }
    break;

  case 90:
#line 194 "grmr.y"
    { (yyval.dval) = (yyvsp[(2) - (3)].dval) ; }
    break;


/* Line 1267 of yacc.c.  */
#line 1836 "y.tab.c"
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


#line 198 "grmr.y"


