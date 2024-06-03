#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include <iterator>
#include <map>
// include order matters, dependencies:
// stmt -> expr, cond
// cond -> expr
#include "ExprAST.hpp"
#include "CondAST.hpp"
#include "StmtAST.hpp"
#include "DeclAST.hpp"
int yyparse();

