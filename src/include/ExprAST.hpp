#pragma once
#include "header.hpp"

// ExprAST - Base AST class for all expression nodes
class ExprAST {
    public:
        virtual ~ExprAST() = default;
};

class FuncCallAST : ExprAST {
    std::string name;
    std::vector<std::unique_ptr<ExprAST>> args;

    public:
        FuncCallAST(const std::string &name, std::vector<std::unique_ptr<ExprAST>> args) : name(name) args(std::move(args)) {}
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

class ListExprAST : ExprAST {
    std::vector<std::unique_ptr<ExprAST>> exprs;

    public:
        ListExprAST(std::vector<std::unique_ptr<ExprAST>> exprs) : exprs(std::move(exprs)) {}
        void addToList(std::unique_ptr<ExprAST> expr) {
            exprs.push_back(std::move(expr));
        }
};