%{
#include <string.h>
#include "y.tab.h"
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


[a-zA-Z][a-zA-Z0-9]* {return IDENTIFIER; } // identifier terminal
[0-9]+ {return NUMBER;} // Number terminal

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

