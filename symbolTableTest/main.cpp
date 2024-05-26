#include "main.hpp"

std::vector(std::string) scopeList;
std::map<std::string, int> mutableTable;

int getSymbol(std::map<std::string, int>& table, std::string symbol){
    if(table.find(symbol) != table.end()){
        return table[symbol];
    }
    return -1;
} 

// This function should set the value of the symbol in the symbol table. 
// Add if the symbol is not in the table.
void setSymbol(std::map<std::string, int>& table, std::string symbol, int value){
    table[symbol] = value;
}

void changeScope(){
    scopeList.push_back("$");
}

void revertScope(){
    while (scopeList.back() != "$")
        scopeList.pop_back();
    scopeList.pop_back();
}


int main(){
    setSymbol(scopeTable, "x", 10);
    setSymbol(mutableTable, "x", 1);
    setSymbol(scopeTable, "y", 20);
    setSymbol(mutableTable, "y", 0);
    setSymbol(scopeTable, "z", 30);
    setSymbol(mutableTable, "z", 0);
    setSymbol(scopeTable, "x", 40);
    std::cout << getSymbol(scopeTable, "x") << std::endl;
    std::cout << getSymbol(mutableTable, "y") << std::endl;
    std::cout << getSymbol(mutableTable, "z") << std::endl;
}