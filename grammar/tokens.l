%{
#include "header.hpp"
#include "parser.hpp"

#define SAVE_TOKEN yylval.string = new std::string(yytext, yyleng)
#define TOKEN(t) (yylval.token = t)
extern "C" int yywrap() { }
%}
%%

"const"             {return TOKEN(CONST);}
"var"               {return TOKEN(VAR);}
"array"             {return TOKEN(ARRAY);}
"procedure"         {return TOKEN(PROCEDURE);}
"function"          {return TOKEN(FUNCTION);}
"call"              {return TOKEN(CALL);} 
"begin"             {return TOKEN(BEGN);}
"end"               {return TOKEN(END);}
"if"                {return TOKEN(IF);}
"then"              {return TOKEN(THEN);}
"else"              {return TOKEN(ELSE);}
"while"             {return TOKEN(WHILE);}
"do"                {return TOKEN(DO);}
"for"               {return TOKEN(FOR);}
"up to"             {return TOKEN(UPTO);}
"down to"           {return TOKEN(DOWNTO);}
"break"             {return TOKEN(BREAK);}
"return"            {return TOKEN(RETURN);}
"odd"               {return TOKEN(ODD);}
"read"              {return TOKEN(READ);}
"write"             {return TOKEN(WRITE);}
"writeline"         {return TOKEN(WRITELINE);}


[a-zA-Z][a-zA-Z0-9]* {SAVE_TOKEN; return IDENTIFIER; } // identifier terminal
[0-9]+ {SAVE_TOKEN; return NUMBER;} // Number terminal

"=" {return TOKEN(EQ);}
"<>" {return TOKEN(NE);}
">" {return TOKEN(GT);}
"<" {return TOKEN(LT);}
"<=" {return TOKEN(LEQ);}
">=" {return TOKEN(GEQ);}
":=" {return TOKEN(ASGN);}
"-" {return TOKEN(MINUS);}
"+" {return TOKEN(PLUS);}
"*" {return TOKEN(MUL);}
"/" {return TOKEN(DIV);}
"%" {return TOKEN(MOD);}

[ \t]+   ;
[\n]        {yylineno++;} 
. {return yytext[0];}


%%
