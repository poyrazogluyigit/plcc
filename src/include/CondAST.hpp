#pragma once
#include "header.hpp"

class CondAST {
    public:
        virtual ~CondAST() = default;
};

class BinaryCondAST : public CondAST {
    int op;
    ExprAST* LHS;
    ExprAST* RHS;

    public:
        BinaryCondAST(int op, ExprAST* LHS, ExprAST* RHS) 
        : op(op), LHS(LHS), RHS(RHS) {}
};

class OddCondAST : public CondAST {
    ExprAST* RHS;

    public:
        OddCondAST(ExprAST* RHS) : RHS(RHS) {} 

};