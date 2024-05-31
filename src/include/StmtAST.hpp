#pragma once
#include "header.hpp"

class StmtAST {
    public:
        virtual ~StmtAST() = default;
};

class SingleAssignStmtAST : StmtAST {
    std::string var;
    std::unique_ptr<ExprAST> RHS;

    public:
        SingleAssignStmtAST(const std::string &var, std::unique_ptr<ExprAST> RHS) : var(var), RHS(std::move(RHS)) {}
};

class IndexedAssignStmtAST : StmtAST {
    std::string var;
    int index;
    std::unique_ptr<ExprAST> RHS;

    public:
        IndexedAssignStmtAST(const std::string &var, int index, std::unique_ptr<ExprAST> RHS) 
        : var(var), index(index), RHS(std::move(RHS)) {}
};

class ArrayAssignStmtAST : StmtAST {
    std::string var;
    std::unique_ptr<ExprAST> RHS;

    public:
        ArrayAssignStmtAST(const std::string &var, std::unique_ptr<ExprAST> RHS) : var(var), RHS(std::move(RHS)) {}
};

class ProcCallAST : StmtAST {
    std::string name;

    public:
        ProcCallAST(const std::string &name, std::vector<std::unique_ptr<ExprAST>> args) : name(name) {}
};

class StmtListAST : StmtAST {
    std::vector<std::unique_ptr<StmtAST>> stmts;

    public:
        StmtListAST(std::vector<std::unique_ptr<StmtAST>> stmts) : stmts(std::move(stmts)) {}
        void addToList(std::unique_ptr<StmtAST> stmt) {
            stmts.push_back(std::move(stmt));
        }
};

class IfThenElseAST : StmtAST {
    std::unique_ptr<CondAST> cond;
    std::unique_ptr<StmtAST> thenStmt;
    std::unique_ptr<StmtAST> elseStmt;

    public:
        IfThenElseAST(std::unique_ptr<CondAST> cond, std::unique_ptr<StmtAST> thenStmt, std::unique_ptr<StmtAST> elseStmt) 
        : cond(std::move(cond)), thenStmt(std::move(thenStmt)), elseStmt(std::move(elseStmt)) {}
};

class IfThenAST : StmtAST {
    std::unique_ptr<CondAST> cond;
    std::unique_ptr<StmtAST> thenStmt;

    public:
        IfThenAST(std::unique_ptr<CondAST> cond, std::unique_ptr<StmtAST> thenStmt) 
        : cond(std::move(cond)), thenStmt(std::move(thenStmt)) {}
};

class WhileStmtAST : StmtAST {
    std::unique_ptr<CondAST> cond;
    std::unique_ptr<StmtAST> stmt;

    public:
        WhileStmtAST(std::unique_ptr<CondAST> cond, std::unique_ptr<StmtAST> stmt) 
        : cond(std::move(cond)), stmt(std::move(stmt)) {}
};

class ForStmtAST : StmtAST {
    std::string var;
    std::unique_ptr<ExprAST> start;
    std::unique_ptr<ExprAST> end;
    std::unique_ptr<StmtAST> stmt;

    public:
        ForStmtAST(const std::string &var, std::unique_ptr<ExprAST> start, std::unique_ptr<ExprAST> end, std::unique_ptr<StmtAST> stmt) 
        : var(var), start(std::move(start)), end(std::move(end)), stmt(std::move(stmt)) {}
};

class IOStmtAST : StmtAST {
    // 0 - read, 1 - write
    int op;
    std::unique_ptr<ExprAST> expr;

    public:
        IOStmtAST(int op, std::unique_ptr<ExprAST> expr) : op(op), expr(std::move(expr)) {}
};
