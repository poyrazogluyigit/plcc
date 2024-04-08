%% 
#include <string.h>
#include "y.tab.h"
// C code definitions
%%
"call" {yylval = yytext; return CALL}//                       return yytext} // Call keyword
[a-zA-Z]+ {return IDENTIFIER; } // identifier terminal
[0-9]+ { yylval = atoi(yytext); return NUMBER; } // Number terminal


%% 
// user defined