#pragma once
#include <iostream>
#include <string>
#include <stack>
#include <typeinfo>
#include <llvm/IR/Module.h>
#include <llvm/IR/Function.h>
#include <llvm/IR/Type.h>
#include <llvm/IR/DerivedTypes.h>
#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/LegacyPassManager.h>
#include "llvm/Pass.h"
#include <llvm/IR/Instructions.h>
#include <llvm/IR/CallingConv.h>
#include <llvm/IR/IRPrintingPasses.h>
#include <llvm/IR/IRBuilder.h>
#include <llvm/Bitstream/BitstreamReader.h>
#include <llvm/Bitstream/BitstreamWriter.h>
#include <llvm/Support/TargetSelect.h>
#include <llvm/ExecutionEngine/ExecutionEngine.h>
#include <llvm/ExecutionEngine/MCJIT.h>
#include <llvm/ExecutionEngine/GenericValue.h>
#include <llvm/Support/raw_ostream.h>
using namespace llvm;
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
extern std::map<std::string, Value*> NamedValues;

Value *LogErrorV(const char *Str);
void yyparse();

