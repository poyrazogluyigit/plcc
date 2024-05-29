#pragma once

#include <map>
#include <string>
#include <vector>

using namespace std;

extern map<string, string> symtab;
extern map<string, int> consttab;
extern vector<string> scopelist;

// extern int rhsflag ;
// extern string va ;

char *symlook(char *cs);
void setConst(char *cs);
void setSymbol(string s);

bool is_tmp_or_integer(string &token);
