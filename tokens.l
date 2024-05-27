%{
#include "defs.h"
#include "y.tab.h"
extern int yylex();
extern int yychar;
%}
%%

"const"             {return CONST;}
"var"               {return VAR;}
"array"             {return ARRAY;}
"procedure"         {return PROCEDURE;}
"function"          {return FUNCTION;}
"call"              {return CALL;} 
"begin"             {return BEGN;}
"end"               {return END;}
"if"                {return IF;}
"then"              {return THEN;}
"else"              {return ELSE;}
"while"             {return WHILE;}
"do"                {return DO;}
"for"               {return FOR;}
"up to"             {return UPTO;}
"down to"           {return DOWNTO;}
"break"             {return BREAK;}
"return"            {return RETURN;}
"odd"               {return ODD;}
"read"              {return READ;}
"write"             {return WRITE;}
"writeline"         {return WRITELINE;}


/*  
    buradaki ilginç bir hata ise doğrudan yylval.dval = yytext yapmak yanlış olarak
    sonraki 1-2 karakterin de yylval.dval içine dahil edilmesine sebep oluyor ve
    bu fazlalık llvm koduna yansıyor. test etmek için aşağıdaki symlook() fonksiyonlarını
    kaldırabilirsiniz.
 */
[a-zA-Z][a-zA-Z0-9]* {yylval.dval = symlook(yytext); return IDENTIFIER; } // identifier terminal
[0-9]+ {yylval.dval = symlook(yytext) ; return NUMBER; } // Number terminal

"=" {return EQ;}
"<>" {return IDK;}
">" {return GT;}
"<" {return LT;}
"<=" {return LEQ;}
">=" {return GEQ;}
":=" {return ASGN;}

[ \t]+   ;
[\n]        {yylineno++;} 
. {return yytext[0];} 


%%
