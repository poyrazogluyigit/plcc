/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "grmr.y"

#include <stdio.h>
void yyerror(char *s);
extern FILE * yyin;
extern int yylineno;
// int yydebug = 1;

#line 79 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    NUMBER = 258,                  /* NUMBER  */
    IDENTIFIER = 259,              /* IDENTIFIER  */
    CONST = 260,                   /* CONST  */
    VAR = 261,                     /* VAR  */
    ARRAY = 262,                   /* ARRAY  */
    PROCEDURE = 263,               /* PROCEDURE  */
    FUNCTION = 264,                /* FUNCTION  */
    CALL = 265,                    /* CALL  */
    BEGN = 266,                    /* BEGN  */
    END = 267,                     /* END  */
    IF = 268,                      /* IF  */
    THEN = 269,                    /* THEN  */
    ELSE = 270,                    /* ELSE  */
    WHILE = 271,                   /* WHILE  */
    DO = 272,                      /* DO  */
    FOR = 273,                     /* FOR  */
    UPTO = 274,                    /* UPTO  */
    DOWNTO = 275,                  /* DOWNTO  */
    BREAK = 276,                   /* BREAK  */
    RETURN = 277,                  /* RETURN  */
    READ = 278,                    /* READ  */
    WRITE = 279,                   /* WRITE  */
    WRITELINE = 280,               /* WRITELINE  */
    ODD = 281,                     /* ODD  */
    EQ = 282,                      /* EQ  */
    IDK = 283,                     /* IDK  */
    GT = 284,                      /* GT  */
    LT = 285,                      /* LT  */
    GEQ = 286,                     /* GEQ  */
    LEQ = 287,                     /* LEQ  */
    ASGN = 288,                    /* ASGN  */
    IFX = 289,                     /* IFX  */
    UMINUS = 290,                  /* UMINUS  */
    UPLUS = 291                    /* UPLUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
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
#define UMINUS 290
#define UPLUS 291

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NUMBER = 3,                     /* NUMBER  */
  YYSYMBOL_IDENTIFIER = 4,                 /* IDENTIFIER  */
  YYSYMBOL_CONST = 5,                      /* CONST  */
  YYSYMBOL_VAR = 6,                        /* VAR  */
  YYSYMBOL_ARRAY = 7,                      /* ARRAY  */
  YYSYMBOL_PROCEDURE = 8,                  /* PROCEDURE  */
  YYSYMBOL_FUNCTION = 9,                   /* FUNCTION  */
  YYSYMBOL_CALL = 10,                      /* CALL  */
  YYSYMBOL_BEGN = 11,                      /* BEGN  */
  YYSYMBOL_END = 12,                       /* END  */
  YYSYMBOL_IF = 13,                        /* IF  */
  YYSYMBOL_THEN = 14,                      /* THEN  */
  YYSYMBOL_ELSE = 15,                      /* ELSE  */
  YYSYMBOL_WHILE = 16,                     /* WHILE  */
  YYSYMBOL_DO = 17,                        /* DO  */
  YYSYMBOL_FOR = 18,                       /* FOR  */
  YYSYMBOL_UPTO = 19,                      /* UPTO  */
  YYSYMBOL_DOWNTO = 20,                    /* DOWNTO  */
  YYSYMBOL_BREAK = 21,                     /* BREAK  */
  YYSYMBOL_RETURN = 22,                    /* RETURN  */
  YYSYMBOL_READ = 23,                      /* READ  */
  YYSYMBOL_WRITE = 24,                     /* WRITE  */
  YYSYMBOL_WRITELINE = 25,                 /* WRITELINE  */
  YYSYMBOL_ODD = 26,                       /* ODD  */
  YYSYMBOL_EQ = 27,                        /* EQ  */
  YYSYMBOL_IDK = 28,                       /* IDK  */
  YYSYMBOL_GT = 29,                        /* GT  */
  YYSYMBOL_LT = 30,                        /* LT  */
  YYSYMBOL_GEQ = 31,                       /* GEQ  */
  YYSYMBOL_LEQ = 32,                       /* LEQ  */
  YYSYMBOL_ASGN = 33,                      /* ASGN  */
  YYSYMBOL_IFX = 34,                       /* IFX  */
  YYSYMBOL_35_ = 35,                       /* '+'  */
  YYSYMBOL_36_ = 36,                       /* '-'  */
  YYSYMBOL_37_ = 37,                       /* '*'  */
  YYSYMBOL_38_ = 38,                       /* '/'  */
  YYSYMBOL_39_ = 39,                       /* '%'  */
  YYSYMBOL_UMINUS = 40,                    /* UMINUS  */
  YYSYMBOL_UPLUS = 41,                     /* UPLUS  */
  YYSYMBOL_42_ = 42,                       /* '.'  */
  YYSYMBOL_43_ = 43,                       /* ';'  */
  YYSYMBOL_44_ = 44,                       /* '['  */
  YYSYMBOL_45_ = 45,                       /* ']'  */
  YYSYMBOL_46_ = 46,                       /* ','  */
  YYSYMBOL_47_ = 47,                       /* '('  */
  YYSYMBOL_48_ = 48,                       /* ')'  */
  YYSYMBOL_YYACCEPT = 49,                  /* $accept  */
  YYSYMBOL_Program = 50,                   /* Program  */
  YYSYMBOL_Block = 51,                     /* Block  */
  YYSYMBOL_ConstDecl = 52,                 /* ConstDecl  */
  YYSYMBOL_ConstAssignmentList = 53,       /* ConstAssignmentList  */
  YYSYMBOL_VarDecl = 54,                   /* VarDecl  */
  YYSYMBOL_ArrayDecl = 55,                 /* ArrayDecl  */
  YYSYMBOL_IdentifierList = 56,            /* IdentifierList  */
  YYSYMBOL_ProcDecl = 57,                  /* ProcDecl  */
  YYSYMBOL_FuncDecl = 58,                  /* FuncDecl  */
  YYSYMBOL_Statement = 59,                 /* Statement  */
  YYSYMBOL_ConditionalStatement = 60,      /* ConditionalStatement  */
  YYSYMBOL_LoopStatement = 61,             /* LoopStatement  */
  YYSYMBOL_IOStatement = 62,               /* IOStatement  */
  YYSYMBOL_FuncCall = 63,                  /* FuncCall  */
  YYSYMBOL_ControlStatement = 64,          /* ControlStatement  */
  YYSYMBOL_StatementList = 65,             /* StatementList  */
  YYSYMBOL_66_1 = 66,                      /* $@1  */
  YYSYMBOL_Condition = 67,                 /* Condition  */
  YYSYMBOL_ConstArray = 68,                /* ConstArray  */
  YYSYMBOL_GeneralList = 69,               /* GeneralList  */
  YYSYMBOL_Expression = 70                 /* Expression  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   492

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  98
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  223

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   291


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    37,    37,    39,    41,    42,    43,    47,    48,    49,
      50,    54,    55,    56,    60,    61,    62,    66,    67,    68,
      72,    73,    74,    78,    79,    80,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    99,   100,   101,
     102,   103,   104,   105,   108,   110,   111,   112,   114,   115,
     119,   120,   121,   122,   123,   124,   129,   130,   131,   132,
     133,   139,   139,   139,   142,   143,   144,   144,   148,   149,
     150,   151,   152,   153,   154,   155,   159,   160,   161,   165,
     166,   167,   168,   169,   170,   171,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "NUMBER", "IDENTIFIER",
  "CONST", "VAR", "ARRAY", "PROCEDURE", "FUNCTION", "CALL", "BEGN", "END",
  "IF", "THEN", "ELSE", "WHILE", "DO", "FOR", "UPTO", "DOWNTO", "BREAK",
  "RETURN", "READ", "WRITE", "WRITELINE", "ODD", "EQ", "IDK", "GT", "LT",
  "GEQ", "LEQ", "ASGN", "IFX", "'+'", "'-'", "'*'", "'/'", "'%'", "UMINUS",
  "UPLUS", "'.'", "';'", "'['", "']'", "','", "'('", "')'", "$accept",
  "Program", "Block", "ConstDecl", "ConstAssignmentList", "VarDecl",
  "ArrayDecl", "IdentifierList", "ProcDecl", "FuncDecl", "Statement",
  "ConditionalStatement", "LoopStatement", "IOStatement", "FuncCall",
  "ControlStatement", "StatementList", "$@1", "Condition", "ConstArray",
  "GeneralList", "Expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-99)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-63)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     437,    -6,    20,    49,    14,   239,   -99,    35,    65,    68,
     -99,   -99,    33,    77,   293,    80,    63,   -99,   122,   -99,
     -99,    85,    84,    77,   321,   -99,   120,   138,   171,   -99,
     172,   -99,    90,   137,   349,   179,   188,   165,   -99,   -99,
     -99,   163,   205,   207,   393,   -99,    27,   -99,   169,   -99,
     174,   175,    42,    -8,   136,   409,   167,   167,   214,   -99,
     131,   178,   181,   186,   -99,   -99,   -99,   -99,   -99,   -99,
     218,   -99,   229,   179,   267,    77,   184,   -99,   100,   144,
     194,   194,   194,   194,   -99,   220,   453,   180,   232,   189,
     195,   -99,     4,   200,    12,     6,   -11,     3,   168,   185,
     204,   -99,   -99,    29,   196,   -31,     3,   248,    93,    11,
       3,   -99,   -99,   -17,   365,   194,   194,   194,   194,   194,
     194,   194,   194,   194,   194,   194,   194,    93,     3,   213,
      93,    93,    93,   -99,   -99,   409,   365,   365,   365,   365,
     194,   194,   208,   217,   219,   221,   222,   231,   -99,   -99,
     216,   241,   -99,   -99,     2,   -99,   251,     3,     3,     3,
       3,     3,     3,     3,   162,   162,   -99,   -99,   -99,    34,
     254,     5,     9,    13,   409,   -99,   269,   211,   -99,   -99,
      81,   439,   -99,   -99,   -99,   -99,   -99,   -99,   267,   -99,
     109,   118,   -99,   365,   -99,   194,   -99,   -99,   109,   -99,
     -99,   365,   365,   365,   365,   365,   365,   365,   250,   -99,
     -99,   -99,   -99,   -99,     3,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,   -99
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     6,     0,     0,     0,
       1,     2,     0,    19,     0,     0,     0,     4,     0,    13,
      17,     0,     0,    19,     0,     7,     0,     0,     0,    11,
       0,    15,     0,     0,     0,     0,     0,     0,    18,    14,
      21,     0,     0,     0,     0,    76,     0,     9,     0,    24,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    61,
       0,     0,     0,     0,     3,    32,    33,    35,    30,    34,
       0,     8,     0,     0,     0,    19,     0,    96,    94,     0,
       0,     0,     0,     0,    98,     0,     0,     0,     0,     0,
       0,    64,     0,    94,     0,     0,     0,    63,     0,     0,
       0,    78,    77,     0,     0,     0,    93,     0,    85,     0,
      68,    91,    92,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,    26,     0,
      85,    85,    85,    66,    31,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    20,
       0,     0,    79,    80,     0,    97,    39,    69,    70,    71,
      72,    74,    73,    75,    86,    87,    88,    89,    90,     0,
       0,     0,     0,     0,     0,    65,    40,     0,    45,    44,
       0,     0,    53,    50,    54,    51,    55,    52,     0,    95,
       0,     0,    57,     0,    27,     0,    58,    59,    60,    56,
      67,     0,     0,     0,     0,     0,     0,     0,     0,    83,
      84,    81,    82,    41,    28,    42,    43,    38,    48,    46,
      49,    47,    23
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -99,   -99,   -73,   -99,   -99,   -99,   -99,   -21,   -99,   -99,
     -51,   -99,   -99,   -99,   -44,   -99,   -99,   -99,    82,   223,
     -98,   -16
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,     5,     9,    14,    24,    21,    34,    44,
      64,    65,    66,    67,    84,    69,    92,   174,    85,    46,
     154,    86
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      68,   104,    32,   190,    91,   133,   190,   138,   140,   141,
     190,    68,   131,   136,   198,    30,   134,   150,   122,   123,
     124,   125,   126,   139,     7,    87,   137,     8,    70,   169,
      70,   155,   171,   172,   173,   190,    88,     6,   122,   123,
     124,   125,   126,    76,    97,    77,    78,   135,   191,    10,
     192,   191,    79,   196,   105,   191,    11,   197,   132,   191,
     106,   199,    15,   156,   110,   111,   112,   113,    80,    16,
      68,   128,    71,    72,   148,    72,    19,    81,    82,   194,
     191,    20,   204,    25,   175,   176,   177,   178,   179,    83,
      26,    68,    68,    68,    68,    68,   152,   153,   205,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,    17,   209,   210,    18,   208,   122,   123,   124,   125,
     126,   211,   212,   200,   180,   181,    27,    31,    29,    28,
      68,    30,    76,    39,    77,    93,    30,    89,    94,    95,
      90,    79,   213,   -62,   107,    89,   -62,   108,   109,    68,
     215,   216,   217,   218,   219,   220,   221,    68,    68,    68,
      68,    68,    68,    68,    35,    36,    81,    82,    76,   142,
      77,    93,   143,   -62,   -62,    37,    38,    79,    83,   214,
      40,    76,    45,    77,    93,    76,   144,    77,    78,   145,
      79,    47,    48,    80,    79,    76,   131,    77,    93,   124,
     125,   126,    81,    82,    79,   146,    49,   -29,   147,    50,
     -29,    51,   202,    73,    83,    81,    82,    74,    96,    81,
      82,   101,    75,   -37,   127,    98,   203,    83,    99,    81,
      82,    83,   102,   100,   114,   129,   130,   -29,   -29,   149,
      12,    83,   132,   -12,   107,    13,   -12,   -12,   -12,   -12,
     -12,   151,   -12,   -37,   -37,   -12,   182,   -12,   170,   188,
     -12,   -12,   -12,   -12,   -12,   183,   193,   184,     1,   185,
     186,    -5,     2,    -5,    -5,    -5,    -5,    -5,    -5,   187,
      -5,   -12,   -12,    -5,   201,    -5,   189,   195,    -5,    -5,
      -5,    -5,    -5,   222,    22,     0,   103,   -16,     0,     0,
      23,   -16,   -16,   -16,   -16,     0,   -16,     0,     0,   -16,
      -5,   -16,     0,     0,   -16,   -16,   -16,   -16,   -16,     0,
       0,     0,    33,     0,     0,   -22,     0,     0,     0,   -22,
     -22,   -22,   -22,     0,   -22,   -16,   -16,   -22,     0,   -22,
       0,     0,   -22,   -22,   -22,   -22,   -22,     0,     0,     0,
      41,     0,     0,   -25,     0,     0,     0,    42,    43,   -25,
     -25,     0,   -25,   -22,   -22,   -25,    52,   -25,     0,    53,
     -25,   -25,   -25,   -25,   -25,    54,    55,   -36,    56,     0,
     -36,    57,     0,    58,     0,     0,    59,    60,    61,    62,
      63,   -25,   -25,     0,    52,     0,     0,    53,     0,     0,
       0,     0,     0,    54,    55,     0,    56,   -36,   -36,    57,
      52,    58,     0,    53,    59,    60,    61,    62,    63,    54,
      55,   -36,    56,     0,     0,    57,     0,    58,     0,     0,
      59,    60,    61,    62,    63,   -36,   -36,     0,     1,     0,
     206,    -5,     2,    -5,    -5,    -5,    -5,    -5,    -5,     0,
      -5,     0,   -36,    -5,     0,    -5,   207,     0,    -5,    -5,
      -5,    -5,    -5,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   122,   123,   124,   125,   126,    -5,
     115,   116,   117,   118,   119,   120,   121,     0,   122,   123,
     124,   125,   126
};

static const yytype_int16 yycheck[] =
{
      44,    74,    23,     1,    55,     1,     1,     1,    19,    20,
       1,    55,     1,     1,     1,    46,    12,    48,    35,    36,
      37,    38,    39,    17,     4,    33,    14,     7,     1,   127,
       1,    48,   130,   131,   132,     1,    44,    43,    35,    36,
      37,    38,    39,     1,    60,     3,     4,    43,    46,     0,
      48,    46,    10,    48,    75,    46,    42,    48,    47,    46,
      76,    48,    27,   114,    80,    81,    82,    83,    26,     4,
     114,    87,    45,    46,    45,    46,    43,    35,    36,    45,
      46,     4,     1,     3,   135,   136,   137,   138,   139,    47,
      27,   135,   136,   137,   138,   139,     3,     4,    17,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,    43,     3,     4,    46,   188,    35,    36,    37,    38,
      39,     3,     4,   174,   140,   141,     4,    43,    43,     7,
     174,    46,     1,    43,     3,     4,    46,     1,    56,    57,
       4,    10,   193,    12,    44,     1,    15,    47,     4,   193,
     201,   202,   203,   204,   205,   206,   207,   201,   202,   203,
     204,   205,   206,   207,    44,    27,    35,    36,     1,     1,
       3,     4,     4,    42,    43,     4,     4,    10,    47,   195,
      43,     1,     3,     3,     4,     1,     1,     3,     4,     4,
      10,     3,    27,    26,    10,     1,     1,     3,     4,    37,
      38,    39,    35,    36,    10,     1,    43,    12,     4,     4,
      15,     4,     1,    44,    47,    35,    36,    43,     4,    35,
      36,     3,    47,    12,    44,    47,    15,    47,    47,    35,
      36,    47,     3,    47,    14,     3,    47,    42,    43,    43,
       1,    47,    47,     4,    44,     6,     7,     8,     9,    10,
      11,     3,    13,    42,    43,    16,    48,    18,    45,    43,
      21,    22,    23,    24,    25,    48,    15,    48,     1,    48,
      48,     4,     5,     6,     7,     8,     9,    10,    11,    48,
      13,    42,    43,    16,    15,    18,    45,    33,    21,    22,
      23,    24,    25,    43,     1,    -1,    73,     4,    -1,    -1,
       7,     8,     9,    10,    11,    -1,    13,    -1,    -1,    16,
      43,    18,    -1,    -1,    21,    22,    23,    24,    25,    -1,
      -1,    -1,     1,    -1,    -1,     4,    -1,    -1,    -1,     8,
       9,    10,    11,    -1,    13,    42,    43,    16,    -1,    18,
      -1,    -1,    21,    22,    23,    24,    25,    -1,    -1,    -1,
       1,    -1,    -1,     4,    -1,    -1,    -1,     8,     9,    10,
      11,    -1,    13,    42,    43,    16,     1,    18,    -1,     4,
      21,    22,    23,    24,    25,    10,    11,    12,    13,    -1,
      15,    16,    -1,    18,    -1,    -1,    21,    22,    23,    24,
      25,    42,    43,    -1,     1,    -1,    -1,     4,    -1,    -1,
      -1,    -1,    -1,    10,    11,    -1,    13,    42,    43,    16,
       1,    18,    -1,     4,    21,    22,    23,    24,    25,    10,
      11,    12,    13,    -1,    -1,    16,    -1,    18,    -1,    -1,
      21,    22,    23,    24,    25,    42,    43,    -1,     1,    -1,
       1,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      13,    -1,    43,    16,    -1,    18,    17,    -1,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,    42,
      27,    28,    29,    30,    31,    32,    33,    -1,    35,    36,
      37,    38,    39
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     5,    50,    51,    52,    43,     4,     7,    53,
       0,    42,     1,     6,    54,    27,     4,    43,    46,    43,
       4,    56,     1,     7,    55,     3,    27,     4,     7,    43,
      46,    43,    56,     1,    57,    44,    27,     4,     4,    43,
      43,     1,     8,     9,    58,     3,    68,     3,    27,    43,
       4,     4,     1,     4,    10,    11,    13,    16,    18,    21,
      22,    23,    24,    25,    59,    60,    61,    62,    63,    64,
       1,    45,    46,    44,    43,    47,     1,     3,     4,    10,
      26,    35,    36,    47,    63,    67,    70,    33,    44,     1,
       4,    59,    65,     4,    67,    67,     4,    70,    47,    47,
      47,     3,     3,    68,    51,    56,    70,    44,    47,     4,
      70,    70,    70,    70,    14,    27,    28,    29,    30,    31,
      32,    33,    35,    36,    37,    38,    39,    44,    70,     3,
      47,     1,    47,     1,    12,    43,     1,    14,     1,    17,
      19,    20,     1,     4,     1,     4,     1,     4,    45,    43,
      48,     3,     3,     4,    69,    48,    59,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    69,
      45,    69,    69,    69,    66,    59,    59,    59,    59,    59,
      70,    70,    48,    48,    48,    48,    48,    48,    43,    45,
       1,    46,    48,    15,    45,    33,    48,    48,     1,    48,
      59,    15,     1,    15,     1,    17,     1,    17,    51,     3,
       4,     3,     4,    59,    70,    59,    59,    59,    59,    59,
      59,    59,    43
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    49,    50,    51,    52,    52,    52,    53,    53,    53,
      53,    54,    54,    54,    55,    55,    55,    56,    56,    56,
      57,    57,    57,    58,    58,    58,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    60,    60,    60,
      60,    60,    60,    60,    61,    61,    61,    61,    61,    61,
      62,    62,    62,    62,    62,    62,    63,    63,    63,    63,
      63,    64,    64,    64,    65,    65,    66,    65,    67,    67,
      67,    67,    67,    67,    67,    67,    68,    68,    68,    69,
      69,    69,    69,    69,    69,    69,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     6,     3,     0,     2,     3,     6,     5,
       8,     3,     0,     2,     3,     2,     0,     1,     3,     0,
       6,     2,     0,     8,     2,     0,     3,     5,     6,     2,
       1,     3,     1,     1,     1,     1,     0,     4,     6,     4,
       4,     6,     6,     6,     4,     4,     6,     6,     6,     6,
       4,     4,     4,     4,     4,     4,     5,     5,     5,     5,
       5,     1,     1,     2,     1,     3,     0,     4,     2,     3,
       3,     3,     3,     3,     3,     3,     1,     3,     3,     1,
       1,     3,     3,     3,     3,     0,     3,     3,     3,     3,
       3,     2,     2,     2,     1,     4,     1,     3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 6: /* ConstDecl: error ';'  */
#line 43 "grmr.y"
                                                 {yyerror("Invalid const declaration"); yyerrok;}
#line 1442 "y.tab.c"
    break;

  case 13: /* VarDecl: error ';'  */
#line 56 "grmr.y"
                                                {yyerror("Invalid variable declaration"); yyerrok;}
#line 1448 "y.tab.c"
    break;

  case 15: /* ArrayDecl: error ';'  */
#line 61 "grmr.y"
                                                    {yyerror("Invalid array declaration"); yyerrok;}
#line 1454 "y.tab.c"
    break;

  case 21: /* ProcDecl: error ';'  */
#line 73 "grmr.y"
                                                    {yyerror("Invalid procedure declaration"); yyerrok;}
#line 1460 "y.tab.c"
    break;

  case 24: /* FuncDecl: error ';'  */
#line 79 "grmr.y"
                                                    {yyerror("Invalid function declaration"); yyerrok;}
#line 1466 "y.tab.c"
    break;

  case 39: /* ConditionalStatement: error Condition THEN Statement  */
#line 101 "grmr.y"
                                                                                {yyerror("Invalid conditional construct"); yyerrok;}
#line 1472 "y.tab.c"
    break;

  case 40: /* ConditionalStatement: IF Condition error Statement  */
#line 102 "grmr.y"
                                                                                {yyerror("Invalid conditional construct"); yyerrok;}
#line 1478 "y.tab.c"
    break;

  case 41: /* ConditionalStatement: error Condition THEN Statement ELSE Statement  */
#line 103 "grmr.y"
                                                                                {yyerror("Invalid conditional construct"); yyerrok;}
#line 1484 "y.tab.c"
    break;

  case 42: /* ConditionalStatement: IF Condition error Statement ELSE Statement  */
#line 104 "grmr.y"
                                                                                {yyerror("Invalid conditional construct"); yyerrok;}
#line 1490 "y.tab.c"
    break;

  case 43: /* ConditionalStatement: IF Condition THEN Statement error Statement  */
#line 105 "grmr.y"
                                                                                {yyerror("Invalid conditional construct"); yyerrok;}
#line 1496 "y.tab.c"
    break;

  case 45: /* LoopStatement: WHILE Condition error Statement  */
#line 110 "grmr.y"
                                                                                            {yyerror("Invalid loop construct"); yyerrok;}
#line 1502 "y.tab.c"
    break;

  case 48: /* LoopStatement: FOR IDENTIFIER UPTO Expression error Statement  */
#line 114 "grmr.y"
                                                                                            {yyerror("Invalid loop construct"); yyerrok;}
#line 1508 "y.tab.c"
    break;

  case 49: /* LoopStatement: FOR IDENTIFIER DOWNTO Expression error Statement  */
#line 115 "grmr.y"
                                                                                            {yyerror("Invalid loop construct"); yyerrok;}
#line 1514 "y.tab.c"
    break;

  case 53: /* IOStatement: READ '(' error ')'  */
#line 122 "grmr.y"
                                 {yyerror("Invalid read() call"); yyerrok;}
#line 1520 "y.tab.c"
    break;

  case 54: /* IOStatement: WRITE '(' error ')'  */
#line 123 "grmr.y"
                                  {yyerror("Invalid write() call"); yyerrok;}
#line 1526 "y.tab.c"
    break;

  case 55: /* IOStatement: WRITELINE '(' error ')'  */
#line 124 "grmr.y"
                                      {yyerror("Invalid writeline() call"); yyerrok;}
#line 1532 "y.tab.c"
    break;

  case 57: /* FuncCall: error IDENTIFIER '(' GeneralList ')'  */
#line 130 "grmr.y"
                                                                        {yyerror("Invalid function call"); yyerrok;}
#line 1538 "y.tab.c"
    break;

  case 58: /* FuncCall: CALL error '(' GeneralList ')'  */
#line 131 "grmr.y"
                                                                        {yyerror("Invalid function call"); yyerrok;}
#line 1544 "y.tab.c"
    break;

  case 59: /* FuncCall: CALL IDENTIFIER error GeneralList ')'  */
#line 132 "grmr.y"
                                                                        {yyerror("Invalid function call"); yyerrok;}
#line 1550 "y.tab.c"
    break;

  case 60: /* FuncCall: CALL IDENTIFIER '(' GeneralList error  */
#line 133 "grmr.y"
                                                                        {yyerror("Invalid function call"); yyerrok;}
#line 1556 "y.tab.c"
    break;

  case 66: /* $@1: %empty  */
#line 144 "grmr.y"
                                  {yyerror("Missing semicolon"); yyerrok;}
#line 1562 "y.tab.c"
    break;

  case 78: /* ConstArray: ConstArray error NUMBER  */
#line 161 "grmr.y"
                                                    {yyerror("Invalid list"); yyerrok;}
#line 1568 "y.tab.c"
    break;

  case 83: /* GeneralList: GeneralList error NUMBER  */
#line 169 "grmr.y"
                                                        {yyerror("Invalid list construct"); yyerrok;}
#line 1574 "y.tab.c"
    break;

  case 84: /* GeneralList: GeneralList error IDENTIFIER  */
#line 170 "grmr.y"
                                                        {yyerror("Invalid list construct"); yyerrok;}
#line 1580 "y.tab.c"
    break;

  case 93: /* Expression: error Expression  */
#line 183 "grmr.y"
                                                        {yyerror("Invalid operator"); yyerrok;}
#line 1586 "y.tab.c"
    break;


#line 1590 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 191 "grmr.y"

// User Subroutines

void yyerror(char *s) {
    fprintf(stderr, "line %d: %s\n", yylineno, s);
}


int main(char * argc, char ** argv){

    yyin = fopen(argv[1], "r");
    yyparse();
    fclose(yyin);

}
