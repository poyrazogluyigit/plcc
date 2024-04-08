%% 
#include <string.h>
// C code definitions
%%
// keywords
"const"             {return CONST;}
"var"               {return VAR;}
"array"             {return ARRAY;}
"procedure"         {return PROCEDURE;}
"function"          {return FUNCTION;}
"call"              {return CALL;} 
"begin"             {return BEGIN;}
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

// regex
[a-zA-Z][a-zA-Z0-9]+ {yylval = yytext; return IDENTIFIER; } // identifier terminal
[0-9]+ { yylval = atoi(yytext); return NUMBER; } // Number terminal

"=" {return EQ};
"<>" {return IDK;}
">" {return GT;}
"<" {return LT;}
"<=" {return LEQ;}
">=" {return GEQ;}
":=" {return ASGN;}

[ \t\n]+   ; // ignore whitespace
. return yytext[0]; 


%% 
// user defined