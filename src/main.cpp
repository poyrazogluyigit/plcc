#include "header.hpp"

FILE *yyin;
ProgramAST *program;


int main(int argc, char ** argv){

    yyin = fopen(argv[1], "r");
    yyparse();
    fclose(yyin);

}