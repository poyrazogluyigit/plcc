#pragma once
#include "header.hpp"
// ExprAST - Base AST class for all expression nodes
class ExprAST
{
public:
    virtual ~ExprAST() = default;
    virtual Value *codegen() = 0;
};

class FuncCallAST : public ExprAST
{
    std::string name;
    ExprAST *args;

public:
    Value *CallExprAST::codegen()
    {
        // Look up the name in the global module table.
        Function *CalleeF = TheModule->getFunction(name);
        if (!CalleeF)
            return LogErrorV("Unknown function referenced");

        // If argument mismatch error.
        if (CalleeF->arg_size() != args.size())
            return LogErrorV("Incorrect # arguments passed");

        std::vector<Value *> ArgsV;
        for (unsigned i = 0, e = args.size(); i != e; ++i)
        {
            ArgsV.push_back(args[i]->codegen());
            if (!ArgsV.back())
                return nullptr;
        }

        return Builder->CreateCall(CalleeF, ArgsV, "calltmp");
    }
    FuncCallAST(const std::string &name, ExprAST *args) : name(name), args(args) {}
};

// BinaryExprAST - Binary Expression AST Node class
class BinaryExprAST : public ExprAST
{
    char op;
    ExprAST *LHS;
    ExprAST *RHS;

public:
    Value *BinaryExprAST::codegen()
    {
        Value *L = LHS->codegen();
        Value *R = RHS->codegen();
        if (!L || !R)
            return nullptr;

        switch (op)
        {
        case '+':
            return Builder->CreateFAdd(L, R, "addtmp");
        case '-':
            return Builder->CreateFSub(L, R, "subtmp");
        case '*':
            return Builder->CreateFMul(L, R, "multmp");
        case '/':
            return Builder->CreateFDiv(L, R, "divtmp");
        case '%':
            Value *Div = Builder->CreateFDiv(L, R, "divtmp");
            Value *TruncDiv = Builder->CreateFPToSI(Div, Type::getInt32Ty(TheContext), "truncdiv");
            Value *IntDiv = Builder->CreateSIToFP(TruncDiv, Type::getDoubleTy(TheContext), "intdiv");
            Value *Mul = Builder->CreateFMul(IntDiv, R, "multmp");
            return Builder->CreateFSub(L, Mul, "modtmp");
        default:
            return LogErrorV("invalid binary operator");
        }
    }
    // Constructor assigns the operator and the left and right hand side expressions
    BinaryExprAST(char op, ExprAST *LHS, ExprAST *RHS)
        : op(op), LHS(LHS), RHS(RHS) {}
};

// NumberExprAST - Unary Operation Expression AST Node class
class UnaryExprAST : public ExprAST
{
    char op;
    ExprAST *RHS;

public:
    Value *codegen()
    {
        Value *R = RHS->codegen();
        if (!L)
            return nullptr;

        switch (op)
        {
        case '+':
            return Builder->CreateFMul(R, 1.0, "multmp");
        case '-':
            return Builder->CreateFMul(R, -1.0, "multmp");
        default:
            return LogErrorV("invalid unary operator");
        }
    };
    UnaryExprAST(char op, ExprAST *RHS) : op(op), RHS(RHS) {}
};

// VariableExprAST - Variable Expression AST Node class
class VariableExprAST : public ExprAST
{
    std::string name;

public:
    Value *VariableExprAST::codegen()
    {
        // Look this variable up in the function.
        Value *V = NamedValues[name];
        if (!V)
            LogErrorV("Unknown variable name");
        return V;
    }
    VariableExprAST(const std::string &name) : name(name) {}
};

class ArrayVarExprAST : public ExprAST
{
    std::string var;
    // change this to ExprAST if you want expression indexing
    ExprAST* index;

public:
    Value *VariableExprAST::codegen()
    {
        // Look this variable up in the function.
        Value *V = NamedValues[name];
        if (!V)
            LogErrorV("Unknown variable name");
        if (V.size() <= index)
            LogErrorV("Index out of bounds");

        return V[(int)index];
    }
    ArrayVarExprAST(const std::string &var, ExprAST* index) : var(var), index(index) {}
};

// NumberExprAST - Number Expression AST Node class
class NumberExprAST : public ExprAST
{
    std::string val;

public:
    Value *codegen()
    {
        return ConstantFP::get(*TheContext, APFloat(Val));
    };
    NumberExprAST(std::string &val) : val(val) {}
};

class ListExprAST : public ExprAST
{
    std::vector<ExprAST *> exprs;

public:
    Value *codegen() {};
    ListExprAST(std::vector<ExprAST *> exprs) : exprs(std::move(exprs)) {}
    void addToList(ExprAST *expr)
    {
        exprs.push_back(expr);
    }
};