#include "ExprAST.hpp"
// ExprAST - Base AST class for all expression nodes
class ExprAST {
    public:
        virtual ~ExprAST() = default;
};

// BinaryExprAST - Binary Expression AST Node class
class BinaryExprAST : ExprAST {
    char op;
    std::unique_ptr<ExprAST> LHS, RHS;

    public:
        // Constructor assigns the operator and the left and right hand side expressions
        BinaryExprAST(char op, std::unique_ptr<ExprAST> LHS, std::unique_ptr<ExprAST> RHS) 
        : op(op), LHS(std::move(LHS)), RHS(std::move(RHS)) {}
};

// NumberExprAST - Unary Operation Expression AST Node class
class UnaryExprAST : ExprAST {
    char op;
    std::unique_ptr<ExprAST> RHS;

    public:
        UnaryExprAST(char op, std::unique_ptr<ExprAST> RHS) : op(op), RHS(std::move(RHS)) {} 

};

// VariableExprAST - Variable Expression AST Node class
class VariableExprAST : ExprAST {
    std::string name;

    public:
        VariableExprAST(const std::string &name) : name(name) {}
};

// NumberExprAST - Number Expression AST Node class
class NumberExprAST : ExprAST {
    int val;

    public:
        NumberExprAST(int val) : val(val) {}
};