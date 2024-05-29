#include "defs.h"
#include "llvmcnv.h"

int lineno =  1; 

extern int error;

int main(int argc, char *argv[])
{
    yyparse() ; 
    gen_llvm_ir() ; 
    return 0;
}


int yyerror(string msg)
{
   std::cout << "Line: " << lineno << " " << msg << std::endl ;
   error = 1;
   exit(0) ;
} 
