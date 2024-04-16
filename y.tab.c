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

#include <stdio.h>
void yyerror(char *s);
extern FILE * yyin;
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
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 187 "y.tab.c"

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
#define YYLAST   398

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  92
/* YYNRULES -- Number of states.  */
#define YYNSTATES  200

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
      47,    48,    37,    35,    46,    36,    42,    38,     2,     2,
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
      40,    41
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    13,    17,    18,    21,    25,    32,
      38,    47,    51,    52,    55,    59,    62,    63,    65,    69,
      70,    77,    80,    81,    90,    93,    94,    98,   104,   111,
     114,   116,   120,   122,   124,   126,   128,   129,   132,   135,
     137,   142,   149,   154,   161,   168,   169,   174,   175,   180,
     185,   190,   195,   200,   205,   210,   216,   218,   220,   223,
     225,   229,   230,   235,   238,   242,   246,   250,   254,   258,
     262,   266,   268,   272,   276,   278,   280,   284,   288,   292,
     296,   297,   301,   305,   309,   313,   317,   320,   323,   325,
     330,   332,   336
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      50,     0,    -1,    51,    42,    -1,    52,    54,    55,    57,
      58,    59,    -1,     5,    53,    43,    -1,    -1,     1,    43,
      -1,     4,    27,     3,    -1,     7,     4,    27,    44,    70,
      45,    -1,    53,    46,     4,    27,     3,    -1,    53,    46,
       7,     4,    27,    44,    70,    45,    -1,     6,    56,    43,
      -1,    -1,     1,    43,    -1,     7,    56,    43,    -1,     1,
      43,    -1,    -1,     4,    -1,    56,    46,     4,    -1,    -1,
      57,     8,     4,    43,    51,    43,    -1,     1,    43,    -1,
      -1,     9,     4,    47,    56,    48,    43,    51,    43,    -1,
       1,    43,    -1,    -1,     4,    33,    72,    -1,     4,    33,
      44,    71,    45,    -1,     4,    44,     3,    45,    33,    72,
      -1,    10,     4,    -1,    65,    -1,    11,    67,    12,    -1,
      60,    -1,    61,    -1,    66,    -1,    64,    -1,    -1,     1,
      12,    -1,     1,    43,    -1,     1,    -1,    13,    69,    14,
      59,    -1,    13,    69,    14,    59,    15,    59,    -1,    16,
      69,    17,    59,    -1,    18,     4,    19,    72,    17,    59,
      -1,    18,     4,    20,    72,    17,    59,    -1,    -1,    16,
       1,    62,    59,    -1,    -1,    18,     1,    63,    59,    -1,
      23,    47,     4,    48,    -1,    24,    47,     4,    48,    -1,
      25,    47,     4,    48,    -1,    23,    47,     1,    48,    -1,
      24,    47,     1,    48,    -1,    25,    47,     1,    48,    -1,
      10,     4,    47,    71,    48,    -1,    21,    -1,    22,    -1,
      22,    72,    -1,    59,    -1,    67,    43,    59,    -1,    -1,
      67,     1,    68,    59,    -1,    26,    72,    -1,    72,    27,
      72,    -1,    72,    28,    72,    -1,    72,    29,    72,    -1,
      72,    30,    72,    -1,    72,    32,    72,    -1,    72,    31,
      72,    -1,    72,    33,    72,    -1,     3,    -1,    70,    46,
       3,    -1,    70,     1,     3,    -1,     3,    -1,     4,    -1,
      71,    46,     3,    -1,    71,    46,     4,    -1,    71,     1,
       3,    -1,    71,     1,     4,    -1,    -1,    72,    35,    72,
      -1,    72,    36,    72,    -1,    72,    37,    72,    -1,    72,
      38,    72,    -1,    72,    39,    72,    -1,    35,    72,    -1,
      36,    72,    -1,     4,    -1,     4,    44,     3,    45,    -1,
       3,    -1,    47,    72,    48,    -1,    65,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    38,    38,    40,    42,    43,    44,    48,    49,    50,
      51,    55,    56,    57,    61,    62,    63,    67,    68,    69,
      73,    74,    75,    79,    80,    81,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     106,   107,   110,   111,   112,   113,   113,   114,   114,   118,
     119,   120,   121,   122,   123,   128,   134,   134,   134,   137,
     138,   139,   139,   143,   144,   145,   146,   147,   148,   149,
     150,   154,   155,   156,   160,   161,   162,   163,   164,   165,
     166,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182
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
  "UMINUS", "'.'", "';'", "'['", "']'", "','", "'('", "')'", "$accept",
  "Program", "Block", "ConstDecl", "ConstAssignmentList", "VarDecl",
  "ArrayDecl", "IdentifierList", "ProcDecl", "FuncDecl", "Statement",
  "ConditionalStatement", "LoopStatement", "@1", "@2", "IOStatement",
  "FuncCall", "ControlStatement", "StatementList", "@3", "Condition",
  "ConstArray", "GeneralList", "Expression", 0
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
     290,   291,    46,    59,    91,    93,    44,    40,    41
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    49,    50,    51,    52,    52,    52,    53,    53,    53,
      53,    54,    54,    54,    55,    55,    55,    56,    56,    56,
      57,    57,    57,    58,    58,    58,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      60,    60,    61,    61,    61,    62,    61,    63,    61,    64,
      64,    64,    64,    64,    64,    65,    66,    66,    66,    67,
      67,    68,    67,    69,    69,    69,    69,    69,    69,    69,
      69,    70,    70,    70,    71,    71,    71,    71,    71,    71,
      71,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     6,     3,     0,     2,     3,     6,     5,
       8,     3,     0,     2,     3,     2,     0,     1,     3,     0,
       6,     2,     0,     8,     2,     0,     3,     5,     6,     2,
       1,     3,     1,     1,     1,     1,     0,     2,     2,     1,
       4,     6,     4,     6,     6,     0,     4,     0,     4,     4,
       4,     4,     4,     4,     4,     5,     1,     1,     2,     1,
       3,     0,     4,     2,     3,     3,     3,     3,     3,     3,
       3,     1,     3,     3,     1,     1,     3,     3,     3,     3,
       0,     3,     3,     3,     3,     3,     2,     2,     1,     4,
       1,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     6,     0,     0,     0,
       1,     2,     0,    19,     0,     0,     0,     4,     0,    13,
      17,     0,     0,    19,     0,     7,     0,     0,     0,    11,
       0,    15,     0,     0,     0,     0,     0,     0,    18,    14,
      21,     0,     0,     0,     0,    71,     0,     9,     0,    24,
       0,     0,    39,     0,     0,     0,     0,     0,     0,    56,
      57,     0,     0,     0,     3,    32,    33,    35,    30,    34,
       0,     8,     0,     0,     0,    19,    37,    38,     0,     0,
      29,    59,     0,    90,    88,     0,     0,     0,     0,     0,
      92,     0,     0,    45,     0,    47,     0,    58,     0,     0,
       0,    73,    72,     0,     0,     0,    80,    26,     0,    80,
      61,    31,     0,     0,     0,    63,    86,    87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    20,     0,    74,    75,     0,     0,
       0,     0,    60,     0,    91,    40,    64,    65,    66,    67,
      69,    68,    70,    81,    82,    83,    84,    85,    46,    42,
      48,     0,     0,    52,    49,    53,    50,    54,    51,     0,
       0,    27,     0,     0,    55,    62,    89,     0,     0,     0,
       0,    78,    79,    76,    77,    28,    41,    43,    44,    23
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     9,    14,    24,    21,    34,    44,
      64,    65,    66,   132,   134,    67,    90,    69,    82,   151,
      91,    46,   148,    92
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -72
static const yytype_int16 yypact[] =
{
     356,   -36,     6,    33,    -3,   158,   -72,    21,    49,   -17,
     -72,   -72,    29,    62,   212,    74,    69,   -72,    23,   -72,
     -72,    -9,    57,    62,   240,   -72,    67,    87,   125,   -72,
     132,   -72,    -8,    96,   268,   139,   145,   128,   -72,   -72,
     -72,   113,   153,   154,   312,   -72,    11,   -72,   116,   -72,
     118,   123,    -7,   -19,   159,   328,    66,     5,    46,   -72,
     137,   130,   138,   141,   -72,   -72,   -72,   -72,   -72,   -72,
     172,   -72,   183,   139,   186,    62,   -72,   -72,   102,   195,
     142,   -72,    16,   -72,   161,   199,   137,   137,   137,   137,
     -72,   192,   355,   -72,   197,   -72,    79,   282,    63,    70,
      90,   -72,   -72,    15,   169,    47,   100,   282,   170,   100,
     -72,   -72,   328,   214,   142,   282,   -72,   -72,   -16,   284,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   284,   284,   284,   137,   137,   176,   178,   179,
     184,   190,   191,   -72,   -72,   175,   -72,   -72,    17,   198,
       3,   328,   -72,   200,   -72,   225,   282,   282,   282,   282,
     282,   282,   282,    48,    48,   -72,   -72,   -72,   -72,   -72,
     -72,     7,   115,   -72,   -72,   -72,   -72,   -72,   -72,   186,
     106,   -72,   124,   137,   -72,   -72,   -72,   284,   284,   284,
     203,   -72,   -72,   -72,   -72,   282,   -72,   -72,   -72,   -72
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -72,   -72,   -71,   -72,   -72,   -72,   -72,   -21,   -72,   -72,
     -54,   -72,   -72,   -72,   -72,   -72,   -44,   -72,   -72,   -72,
     185,   174,   134,    -5
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -37
static const yytype_int16 yytable[] =
{
      68,    81,    32,   104,   180,    76,    93,     6,    83,    84,
       7,    68,    70,     8,    78,    85,    70,   110,   180,   127,
     128,   129,   130,   131,   188,    79,    17,    27,   111,    18,
      28,    86,   154,    10,    29,    39,    77,    30,    30,    11,
      87,    88,   127,   128,   129,   130,   131,    95,    15,   182,
      96,   184,    89,    16,   105,    97,    71,    72,   152,   112,
     143,    72,   181,   182,   137,   155,    20,   138,    68,    83,
      84,   139,    19,   107,   140,    68,    85,    25,   168,   169,
     170,   115,   116,   117,   118,   129,   130,   131,    68,    68,
      68,   141,    86,    30,   142,   145,    26,   185,   135,   136,
      31,    87,    88,   146,   147,    83,    84,    68,   190,   191,
     192,    35,    85,    89,    36,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   193,   194,    37,
     171,   172,   189,   196,   197,   198,    38,    87,    88,    40,
      83,    84,    45,    68,    68,    68,   106,    85,    47,    89,
     127,   128,   129,   130,   131,    48,    49,    50,    51,    12,
      73,    74,   -12,    80,    13,   -12,   -12,   -12,   -12,   -12,
      75,   -12,    87,    88,   -12,   101,   -12,    98,   195,   -12,
     -12,   -12,   -12,   -12,    89,    99,   102,     1,   100,   109,
      -5,     2,    -5,    -5,    -5,    -5,    -5,    -5,   108,    -5,
     -12,   -12,    -5,   114,    -5,   113,   119,    -5,    -5,    -5,
      -5,    -5,   144,    22,   133,   149,   -16,   153,   179,    23,
     -16,   -16,   -16,   -16,   173,   -16,   174,   175,   -16,    -5,
     -16,   183,   176,   -16,   -16,   -16,   -16,   -16,   177,   178,
     187,    33,    94,   150,   -22,   186,   199,   103,   -22,   -22,
     -22,   -22,     0,   -22,   -16,   -16,   -22,     0,   -22,     0,
       0,   -22,   -22,   -22,   -22,   -22,     0,     0,     0,    41,
       0,     0,   -25,     0,     0,     0,    42,    43,   -25,   -25,
       0,   -25,   -22,   -22,   -25,    52,   -25,     0,    53,   -25,
     -25,   -25,   -25,   -25,    54,    55,   -36,    56,     0,   -36,
      57,     0,    58,     0,     0,    59,    60,    61,    62,    63,
     -25,   -25,     0,    52,     0,     0,    53,   127,   128,   129,
     130,   131,    54,    55,     0,    56,   -36,   -36,    57,    52,
      58,     0,    53,    59,    60,    61,    62,    63,    54,    55,
     -36,    56,     0,     0,    57,     0,    58,     0,     0,    59,
      60,    61,    62,    63,   -36,   -36,     0,     1,     0,     0,
      -5,     2,    -5,    -5,    -5,    -5,    -5,    -5,     0,    -5,
       0,   -36,    -5,     0,    -5,     0,     0,    -5,    -5,    -5,
      -5,    -5,   120,   121,   122,   123,   124,   125,   126,     0,
     127,   128,   129,   130,   131,     0,     0,     0,    -5
};

static const yytype_int16 yycheck[] =
{
      44,    55,    23,    74,     1,    12,     1,    43,     3,     4,
       4,    55,     1,     7,    33,    10,     1,     1,     1,    35,
      36,    37,    38,    39,    17,    44,    43,     4,    12,    46,
       7,    26,    48,     0,    43,    43,    43,    46,    46,    42,
      35,    36,    35,    36,    37,    38,    39,     1,    27,    46,
       4,    48,    47,     4,    75,    60,    45,    46,   112,    43,
      45,    46,    45,    46,     1,   119,     4,     4,   112,     3,
       4,     1,    43,    78,     4,   119,    10,     3,   132,   133,
     134,    86,    87,    88,    89,    37,    38,    39,   132,   133,
     134,     1,    26,    46,     4,    48,    27,   151,    19,    20,
      43,    35,    36,     3,     4,     3,     4,   151,   179,     3,
       4,    44,    10,    47,    27,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,     3,     4,     4,
     135,   136,    17,   187,   188,   189,     4,    35,    36,    43,
       3,     4,     3,   187,   188,   189,    44,    10,     3,    47,
      35,    36,    37,    38,    39,    27,    43,     4,     4,     1,
      44,    43,     4,     4,     6,     7,     8,     9,    10,    11,
      47,    13,    35,    36,    16,     3,    18,    47,   183,    21,
      22,    23,    24,    25,    47,    47,     3,     1,    47,    47,
       4,     5,     6,     7,     8,     9,    10,    11,     3,    13,
      42,    43,    16,     4,    18,    44,    14,    21,    22,    23,
      24,    25,    43,     1,    17,    45,     4,     3,    43,     7,
       8,     9,    10,    11,    48,    13,    48,    48,    16,    43,
      18,    33,    48,    21,    22,    23,    24,    25,    48,    48,
      15,     1,    57,   109,     4,    45,    43,    73,     8,     9,
      10,    11,    -1,    13,    42,    43,    16,    -1,    18,    -1,
      -1,    21,    22,    23,    24,    25,    -1,    -1,    -1,     1,
      -1,    -1,     4,    -1,    -1,    -1,     8,     9,    10,    11,
      -1,    13,    42,    43,    16,     1,    18,    -1,     4,    21,
      22,    23,    24,    25,    10,    11,    12,    13,    -1,    15,
      16,    -1,    18,    -1,    -1,    21,    22,    23,    24,    25,
      42,    43,    -1,     1,    -1,    -1,     4,    35,    36,    37,
      38,    39,    10,    11,    -1,    13,    42,    43,    16,     1,
      18,    -1,     4,    21,    22,    23,    24,    25,    10,    11,
      12,    13,    -1,    -1,    16,    -1,    18,    -1,    -1,    21,
      22,    23,    24,    25,    42,    43,    -1,     1,    -1,    -1,
       4,     5,     6,     7,     8,     9,    10,    11,    -1,    13,
      -1,    43,    16,    -1,    18,    -1,    -1,    21,    22,    23,
      24,    25,    27,    28,    29,    30,    31,    32,    33,    -1,
      35,    36,    37,    38,    39,    -1,    -1,    -1,    42
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     5,    50,    51,    52,    43,     4,     7,    53,
       0,    42,     1,     6,    54,    27,     4,    43,    46,    43,
       4,    56,     1,     7,    55,     3,    27,     4,     7,    43,
      46,    43,    56,     1,    57,    44,    27,     4,     4,    43,
      43,     1,     8,     9,    58,     3,    70,     3,    27,    43,
       4,     4,     1,     4,    10,    11,    13,    16,    18,    21,
      22,    23,    24,    25,    59,    60,    61,    64,    65,    66,
       1,    45,    46,    44,    43,    47,    12,    43,    33,    44,
       4,    59,    67,     3,     4,    10,    26,    35,    36,    47,
      65,    69,    72,     1,    69,     1,     4,    72,    47,    47,
      47,     3,     3,    70,    51,    56,    44,    72,     3,    47,
       1,    12,    43,    44,     4,    72,    72,    72,    72,    14,
      27,    28,    29,    30,    31,    32,    33,    35,    36,    37,
      38,    39,    62,    17,    63,    19,    20,     1,     4,     1,
       4,     1,     4,    45,    43,    48,     3,     4,    71,    45,
      71,    68,    59,     3,    48,    59,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    59,    59,
      59,    72,    72,    48,    48,    48,    48,    48,    48,    43,
       1,    45,    46,    33,    48,    59,    45,    15,    17,    17,
      51,     3,     4,     3,     4,    72,    59,    59,    59,    43
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
        case 6:
#line 44 "grmr.y"
    {yyerror("Invalid const declaration"); yyerrok;}
    break;

  case 13:
#line 57 "grmr.y"
    {yyerror("Invalid variable declaration"); yyerrok;}
    break;

  case 15:
#line 62 "grmr.y"
    {yyerror("Invalid array declaration"); yyerrok;}
    break;

  case 21:
#line 74 "grmr.y"
    {yyerror("Invalid procedure declaration"); yyerrok;}
    break;

  case 24:
#line 80 "grmr.y"
    {yyerror("Invalid function declaration"); yyerrok;}
    break;

  case 37:
#line 97 "grmr.y"
    {yyerror("Invalid statement"); yyerrok;}
    break;

  case 38:
#line 98 "grmr.y"
    {yyerror("Invalid statement"); yyerrok;}
    break;

  case 39:
#line 99 "grmr.y"
    {yyerror("Invalid statement");}
    break;

  case 45:
#line 113 "grmr.y"
    {yyerror("Invalid while construct"); yyclearin;}
    break;

  case 47:
#line 114 "grmr.y"
    {yyerror("Invalid for construct"); yyclearin;}
    break;

  case 52:
#line 121 "grmr.y"
    {yyerror("Invalid read() call"); yyerrok;}
    break;

  case 53:
#line 122 "grmr.y"
    {yyerror("Invalid write() call"); yyerrok;}
    break;

  case 54:
#line 123 "grmr.y"
    {yyerror("Invalid writeline() call"); yyerrok;}
    break;

  case 61:
#line 139 "grmr.y"
    {yyerror("Missing semicolon"); yyerrok;}
    break;

  case 73:
#line 156 "grmr.y"
    {yyerror("Invalid list construct"); yyerrok;}
    break;

  case 78:
#line 164 "grmr.y"
    {yyerror("Invalid list construct"); yyerrok;}
    break;

  case 79:
#line 165 "grmr.y"
    {yyerror("Invalid list construct"); yyerrok;}
    break;


/* Line 1267 of yacc.c.  */
#line 1676 "y.tab.c"
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


#line 185 "grmr.y"

// User Subroutines

void yyerror(char *s) {
    fprintf(stderr, "line %d: %s\n", yylineno, s);
}


int main(int argc, char ** argv){

    yyin = fopen(argv[1], "r");
    yyparse();
    fclose(yyin);

}
