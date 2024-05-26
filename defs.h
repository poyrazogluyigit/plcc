#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string.h>
#include <sys/time.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <string>

using namespace std ;

extern map<string,string> symtab ;
extern int rhsflag ; 
extern string va ; 

void    write(string t) ;
void    writeline(string t) ;
void    read(string t) ;
char    *symlook(char *cs) ; 
char    *operation(string op,string t1,string t2) ; 
char    *condition(string op,string t1,string t2) ;
void    assignment(string lhs,string rhs) ; 
char    *loadvariable(string t1) ;
void    gen_llvm_ir() ; 
bool    is_tmp_or_integer(string & token) ; 
char    *odd(string t);
void    constAssign(string t, string val);


extern std::map<std::string, int> symbolTable;
int getSymbol(std::string symbol);
void setSymbol(std::string symbol, int scope);


int yyparse();
void generate_llvm_ir();