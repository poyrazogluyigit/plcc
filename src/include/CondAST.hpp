#pragma once
#include "header.hpp"
static std::unique_ptr<LLVMContext> TheContext;
static std::unique_ptr<IRBuilder<>> Builder(TheContext);
static std::unique_ptr<Module> TheModule;
static std::map<std::string, Value *> NamedValues;

Value *LogErrorV(const char *Str)
{
    LogError(Str);
    return nullptr;
}

class CondAST
{
public:
    virtual ~CondAST() = default;
    virtual Value *codegen() = 0;
};

class BinaryCondAST : public CondAST
{
    int op;
    ExprAST *LHS;
    ExprAST *RHS;

public:
    Value *codegen() override;
    BinaryCondAST(int op, ExprAST *LHS, ExprAST *RHS)
        : op(op), LHS(LHS), RHS(RHS) {}
};

class OddCondAST : public CondAST
{
    ExprAST *RHS;

public:
    Value *codegen() override;
    OddCondAST(ExprAST *RHS) : RHS(RHS) {}
};