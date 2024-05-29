#pragma once

#include <vector>
#include <string>
#include <iostream>
#include "tables.h"

using namespace std;

extern vector<string> llvmcode;
extern vector<string> constAssignments;  
extern int rhsflag; 

extern int tmpno;

void gen_llvm_ir();
void write(string t);
void writeline(string t);
void read(string t);
char *operation(string op,string t1,string t2);
char *condition(string op,string t1,string t2);
void assignment(string lhs,string rhs);
char *loadvariable(string t1);
char *odd(string t);
void constAssign(string t, string val);

