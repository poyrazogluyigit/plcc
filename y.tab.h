/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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
