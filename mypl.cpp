#include "defs.h"

int lineno =  1 ; 
int tmpno =  1 ; 
vector<string> llvmcode ;
vector<string> constAssignments;  
map<string,string> symtab ; 
int rhsflag = 1 ; 
string va ; 

extern int error;

int main(int argc, char *argv[])
{
    yyparse() ; 
    gen_llvm_ir() ; 
    return 0;
}

void gen_llvm_ir(){
   std::map<std::string, std::string >::iterator si ; 
   std::vector<std::string>::iterator vi ;

   std::cout << "; ModuleID = 'calculator'" << std::endl ; 
   std::cout << "declare i32 @printf(i8*, ...)" << std::endl ;
   std::cout << "declare i32 @scanf(i8*, ...)" << std::endl ;
   std::cout << "@read.str = constant [3 x i8] c\"%d\\00\"" << std::endl ;
   std::cout << "@writeline.str = constant [4 x i8] c\"%d\\0A\\00\"" << std::endl ; 
   std::cout << "@write.str = constant [3 x i8] c\"%d\\00\"" << std::endl ;

    for (vi = constAssignments.begin(); vi != constAssignments.end(); vi++){
        std::cout << *vi << std::endl;
    }

   std::cout << "define i32 @main() {"  << std::endl ;

   for (si=symtab.begin(); si != symtab.end(); si++) {
      if ( ! is_tmp_or_integer(si->second) ) {
        std::cout << "  %" << si->second << " = alloca i32" << std::endl ; 
      }
   } 

   for(int i=0 ; i < llvmcode.size() ; i++) {
      std::cout << "  " << llvmcode[i] << std::endl ; 
   }
   std::cout << "  ret i32 0" << std::endl << "}" << std::endl; 

}

void write(string t) {
  string stm ; 

  stm = string("call i32 (i8*, ...) @printf(i8* getelementptr ([3 x i8], [3 x i8]* @write.str, i32 0, i32 0), i32 ") +
        t + string(" )")   ; 
  llvmcode.push_back(stm) ; 
  tmpno++ ; 
}

void writeline(string t) {
  string stm ; 
  
  stm = string("call i32 (i8*, ...) @printf(i8* getelementptr ([4 x i8], [4 x i8]* @writeline.str, i32 0, i32 0), i32 ") +
        t + string(" )")   ; 
  llvmcode.push_back(stm) ; 
  tmpno++ ; 
}

// copilot generated - dont trust
void read(string t){
    string stm ; 
    stm = string("call i32 (i8*, ...) @scanf(i8* getelementptr ([3 x i8], [3 x i8]* @read.str, i32 0, i32 0), i32* ") +
            t + string(" )")   ; 
    llvmcode.push_back(stm) ; 
    tmpno++ ; 
    
}

char *operation(string op,string t1,string t2) {
  string stm ; 
  char buf[20] ;
  string tmpvar ; 
  snprintf(buf, 20,"%d",tmpno) ;

  tmpvar = string("%") + string(buf) ;
  symtab[tmpvar] = tmpvar ; 
  tmpno++ ; 
  stm = tmpvar + string(" = ") + op + string(" i32 ") + t1 + string(",") + t2 ; 
  llvmcode.push_back(stm) ; 
  return((char *) symtab[tmpvar].c_str()) ; 
}

char *odd(string t){
    string stm, stm2; 
    char buf[20];
    string andReg, cmpReg; 
    
    snprintf(buf, 20, "%d",tmpno);
    
    andReg = string("%") + string(buf);
    symtab[andReg] = andReg; 
    tmpno++; 
    stm = andReg + string(" = and i32 ") + t + string(", 1");
    llvmcode.push_back(stm);

    snprintf(buf, 20, "%d",tmpno);
    cmpReg = string("%") + string(buf);
    symtab[cmpReg] = cmpReg;
    tmpno++;
    stm2  = cmpReg + string(" = icmp eq i32 ") + andReg + string(", 1");
    llvmcode.push_back(stm2);

    return ((char *) symtab[cmpReg].c_str());
}

char *condition(string op, string t1, string t2) {
    
  string stm ; 
  char buf[20] ;
  string tmpvar ; 
  snprintf(buf, 20, "%d",tmpno) ;

  tmpvar = string("%") + string(buf) ;
  symtab[tmpvar] = tmpvar ; 
  tmpno++ ; 
  stm = tmpvar + string(" = icmp ") + op + string(" i32 ") + t1 + string(",") + t2 ; 
  llvmcode.push_back(stm) ; 
  return((char *) symtab[tmpvar].c_str()) ; 
}

char *loadvariable(string t1) {
  string stm ; 
  char buf[20] ;
  string tmpvar ; 
 
  snprintf(buf,20, "%d",tmpno) ;

  tmpvar = string("%") + string(buf) ;
  symtab[tmpvar] = tmpvar ; 
  tmpno++ ; 
  stm = tmpvar + string(" = load i32, i32* %") + t1 ; 
  llvmcode.push_back(stm) ; 
  return((char *) symtab[tmpvar].c_str()) ; 
}

void constAssign(string t, string val){
    // std::cout << t << std::endl;
    constAssignments.push_back(string("@") + t + string(" = global i32 ") + val);
}

void  assignment(string lhs,string rhs) 
{
  string stm ; 

  stm = string("store i32 ") + rhs + string(", i32* %") + lhs ; 
  llvmcode.push_back(stm) ; 
}

int yyerror(string msg)
{
   std::cout << "Line: " << lineno << " " << msg << std::endl ;
   error = 1;
   exit(0) ;
}

// look up a symbol table entry, add if not present 
// normally we store a struct here, but in this example 
// we store the string for variable names, constants, temporary vars as 
// string 
char *symlook(char *cs)
{    
    string s = string(cs) ; 
    symtab[s] = s ;
    return((char *) symtab[s].c_str()) ; 
} 

bool is_tmp_or_integer(string & token) 
{
    bool isnumber ;

    string::const_iterator k = token.begin(); 

    isnumber = ( isdigit(*k)  || (*k == '%') ) ; 

    k++ ; 
    for( ; k != token.end(); k++) { 
        isnumber = isnumber && isdigit(*k) ;
    }
    return(isnumber) ; 
}    
