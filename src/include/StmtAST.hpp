#pragma once
#include "header.hpp"

class StmtAST {
    public:
        virtual ~StmtAST() = default;
};

class SingleAssignStmtAST : public StmtAST {
    std::string var;
    ExprAST* RHS;

    public:
        SingleAssignStmtAST(const std::string &var, ExprAST* RHS) : var(var), RHS(RHS) {}
};

class IndexedAssignStmtAST : public StmtAST {
    std::string var;
    ExprAST* index;
    ExprAST* RHS;

    public:
        IndexedAssignStmtAST(const std::string &var, ExprAST* index, ExprAST* RHS) 
        : var(var), index(index), RHS(RHS) {}
};

class ArrayAssignStmtAST : public StmtAST {
    std::string var;
    ExprAST* RHS;

    public:
        ArrayAssignStmtAST(const std::string &var, ExprAST* RHS) : var(var), RHS(RHS) {}
};

class ProcCallAST : public StmtAST {
    std::string name;

    public:
        ProcCallAST(const std::string &name) : name(name) {}
};

class FuncCallStmtAST : public StmtAST {
    ExprAST* funcAST;

    public:
        FuncCallStmtAST(ExprAST* funcAST) : funcAST(funcAST) {}
};

class StmtListAST : public StmtAST {
    std::vector<StmtAST*> stmts;

    public:
        void addToList(StmtAST* stmt) {
            stmts.push_back(stmt);
        }
};

class IfThenElseAST : public StmtAST {
    CondAST* cond;
    StmtAST* thenStmt;
    StmtAST* elseStmt;

    public:
        IfThenElseAST(CondAST* cond, StmtAST* thenStmt, StmtAST* elseStmt) 
        : cond(cond), thenStmt(thenStmt), elseStmt(elseStmt) {}
};

class IfThenAST : public StmtAST {
    CondAST* cond;
    StmtAST* thenStmt;

    public:
        IfThenAST(CondAST* cond, StmtAST* thenStmt) 
        : cond(cond), thenStmt(thenStmt) {}
};

class WhileStmtAST : public StmtAST {
    CondAST* cond;
    StmtAST* stmt;

    public:
        WhileStmtAST(CondAST* cond, StmtAST* stmt) 
        : cond(cond), stmt(stmt) {}
};

class ForStmtAST : public StmtAST {
    std::string loopVar;
    ExprAST* termination;
    bool isDownTo;
    StmtAST* stmt;

    public:
        ForStmtAST(const std::string &loopVar, ExprAST* termination, bool isDownTo, StmtAST* stmt) 
        : loopVar(loopVar), termination(termination), isDownTo(isDownTo), stmt(stmt) {}

};

class IOStmtAST : public StmtAST {
    // 0 - read, 1 - write
    int op;
    ExprAST* expr;

    public:
        IOStmtAST(int op, ExprAST* expr) : op(op), expr(expr) {}
};

class NoValControlAST : public StmtAST {
    int type;
    
    public:
        NoValControlAST(int type) : type(type) {} 
};

class ReturnValueControlAST : public StmtAST {
    ExprAST* ret;

    public:
        ReturnValueControlAST(ExprAST* ret) : ret(ret) {}
};
