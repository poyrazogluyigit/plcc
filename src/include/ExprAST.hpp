#pragma once
#include "header.hpp"

extern std::map<std::string, std::string> consts;

// ExprAST - Base AST class for all expression nodes
class ExprAST {
    protected:
        std::vector<std::string> code;
        std::string nextReg;
    public:
        virtual ~ExprAST() = default;
        std::vector<std::string> getCode(){
            return code;
        }
        std::string getNextReg(){
            return nextReg;
        }
        void setNextReg(std::string reg){
            nextReg = reg;
        }
};

class FuncCallAST : public ExprAST {
    std::string name;
    ExprAST* args;

    public:
        FuncCallAST(const std::string &name, ExprAST* args) : name(name), args(args) {}
};


// BinaryExprAST - Binary Expression AST Node class
class BinaryExprAST : public ExprAST {
    std::string op;
    ExprAST* LHS;
    ExprAST* RHS;

    public:
        // Constructor assigns the operator and the left and right hand side expressions
        BinaryExprAST(std::string op, ExprAST* LHS, ExprAST* RHS);
};

// NumberExprAST - Unary Operation Expression AST Node class
class UnaryExprAST : public ExprAST {
    char op;
    ExprAST* RHS;

    public:
        UnaryExprAST(char op, ExprAST* RHS) : op(op), RHS(RHS) {} 

};

// VariableExprAST - Variable Expression AST Node class
class VariableExprAST : public ExprAST {
    std::string name;

    public:
        VariableExprAST(const std::string &name);
        bool isConst(){
            return consts.find(this->name) != consts.end();
        }
};

class ArrayVarExprAST : public ExprAST {
    std::string var;
    // change this to ExprAST if you want expression indexing
    ExprAST* index;

    public:
        ArrayVarExprAST(const std::string &var, ExprAST* index) : var(var), index(index) {}
};

// NumberExprAST - Number Expression AST Node class
class NumberExprAST : public ExprAST {
    std::string val;

    public:
        NumberExprAST(std::string &val) : val(val) {this->setNextReg(val);}
        std::string codeGen();
};

class ListExprAST : public ExprAST {
    std::vector<ExprAST*> exprs;

    public:
        ListExprAST(std::vector<ExprAST*> exprs) : exprs(std::move(exprs)) {}
        void addToList(ExprAST* expr) {
            exprs.push_back(expr);
        }
};