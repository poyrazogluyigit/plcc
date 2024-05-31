#pragma once

class CondAST {
    public:
        virtual ~CondAST() = default;
};

class BinaryCondAST : CondAST {
    int op;
    std::unique_ptr<ExprAST> LHS, RHS;

    public:
        BinaryCondAST(int op, std::unique_ptr<ExprAST> LHS, std::unique_ptr<ExprAST> RHS) 
        : op(op), LHS(std::move(LHS)), RHS(std::move(RHS)) {}
};

class UnaryCondAST : CondAST {
    int op;
    std::unique_ptr<ExprAST> RHS;

    public:
        UnaryCondAST(int op, std::unique_ptr<ExprAST> RHS) : op(op), RHS(std::move(RHS)) {} 

};