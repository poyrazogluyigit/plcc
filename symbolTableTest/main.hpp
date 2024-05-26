#include <string>
#include <iostream>
#include <map>

extern std::vector(std::string) scopeList;
extern std::map<std::string, int> mutableTable;
int getSymbol(std::map<std::string, int>&, std::string);
void setSymbol(std::map<std::string, int>&, std::string, int);
void changeScope();
void revertScope();