/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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
/* Line 1529 of yacc.c.  */
#line 150 "./src/generate/parser.hpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

