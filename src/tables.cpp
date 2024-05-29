#include "tables.h"

map<string,string> symtab ;
map<string, int> consttab;
vector<string> scopelist;

// look up a symbol table entry, add if not present 
// normally we store a struct here, but in this example 
// we store the string for variable names, constants, temporary vars as 
// string 
char *symlook(char *cs){    
    string s = string(cs) ; 
    symtab[s] = s ;
    consttab[s] = 0;
    return((char *) symtab[s].c_str()) ; 
}

void setConst(char *cs){
    string s = string(cs);
    consttab[s] = 1;
}

void setSymbol(string s){
    symtab[s] = s;
}



bool is_tmp_or_integer(string & token){
    bool isnumber ;

    string::const_iterator k = token.begin(); 

    isnumber = ( isdigit(*k)  || (*k == '%') ) ; 

    k++ ; 
    for( ; k != token.end(); k++) { 
        isnumber = isnumber && isdigit(*k) ;
    }
    return(isnumber) ; 
}   