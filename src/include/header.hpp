#pragma once
#include <iostream>
#include <string>
// include order matters, dependencies:
// stmt -> expr, cond
// cond -> expr
#include "ExprAST.hpp"
#include "CondAST.hpp"
#include "StmtAST.hpp"
#include "DeclAST.hpp"
extern std::unique_ptr<LLVMContext> TheContext;
extern std::unique_ptr<IRBuilder<>> Builder(TheContext);
extern std::unique_ptr<Module> TheModule;
extern std::map<std::string, Value *> NamedValues;

Value *LogErrorV(const char *Str);
void yyparse();
