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

void yyparse();
