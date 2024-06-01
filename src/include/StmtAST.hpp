#pragma once
#include "header.hpp"

class StmtAST
{
public:
    virtual ~StmtAST() = default;
    virtual Value *codegen() = 0;
};

class SingleAssignStmtAST : public StmtAST
{
    std::string var;
    ExprAST *RHS;

public:
    Value *codegen() override;
    SingleAssignStmtAST(const std::string &var, ExprAST *RHS) : var(var), RHS(RHS) {}
};

class IndexedAssignStmtAST : public StmtAST
{
    std::string var;
    int index;
    ExprAST *RHS;

public:
    Value *codegen() override;
    IndexedAssignStmtAST(const std::string &var, std::string &index, ExprAST *RHS)
        : var(var), index(std::stoi(index)), RHS(RHS) {}
};

class ArrayAssignStmtAST : public StmtAST
{
    std::string var;
    ExprAST *RHS;

public:
    Value *codegen() override;
    ArrayAssignStmtAST(const std::string &var, ExprAST *RHS) : var(var), RHS(RHS) {}
};

class ProcCallAST : public StmtAST
{
    std::string name;

public:
    Value *codegen() override;
    ProcCallAST(const std::string &name) : name(name) {}
};

class FuncCallStmtAST : public StmtAST
{
    ExprAST *funcAST;

public:
    Value *codegen() override;
    FuncCallStmtAST(ExprAST *funcAST) : funcAST(funcAST) {}
};

class StmtListAST : public StmtAST
{
    std::vector<StmtAST *> stmts;

public:
    Value *codegen() override;
    StmtListAST(std::vector<StmtAST *> stmts) : stmts(std::move(stmts)) {}
    void addToList(StmtAST *stmt)
    {
        stmts.push_back(stmt);
    }
};

class IfThenElseAST : public StmtAST
{
    CondAST *cond;
    StmtAST *thenStmt;
    StmtAST *elseStmt;

public:
    Value *codegen() override;
    IfThenElseAST(CondAST *cond, StmtAST *thenStmt, StmtAST *elseStmt)
        : cond(cond), thenStmt(thenStmt), elseStmt(elseStmt) {}
};

class IfThenAST : public StmtAST
{
    CondAST *cond;
    StmtAST *thenStmt;

public:
    Value *codegen() override;
    IfThenAST(CondAST *cond, StmtAST *thenStmt)
        : cond(cond), thenStmt(thenStmt) {}
};

class WhileStmtAST : public StmtAST
{
    CondAST *cond;
    StmtAST *stmt;

public:
    Value *codegen() override;
    WhileStmtAST(CondAST *cond, StmtAST *stmt)
        : cond(cond), stmt(stmt) {}
};

class ForStmtAST : public StmtAST
{
    std::string loopVar;
    ExprAST *termination;
    bool isDownTo;
    StmtAST *stmt;

public:
    Value *codegen() override;
    ForStmtAST(const std::string &loopVar, ExprAST *termination, bool isDownTo, StmtAST *stmt)
        : loopVar(loopVar), termination(termination), isDownTo(isDownTo), stmt(stmt) {}
};

class IOStmtAST : public StmtAST
{
    // 0 - read, 1 - write
    int op;
    ExprAST *expr;

public:
    Value *codegen() override;
    IOStmtAST(int op, ExprAST *expr) : op(op), expr(expr) {}
};

class NoValControlAST : public StmtAST
{
    int type;

public:
    Value *codegen() override;
    NoValControlAST(int type) : type(type) {}
};

class ReturnValueControlAST : public StmtAST
{
    ExprAST *ret;

public:
    Value *codegen() override;
    ReturnValueControlAST(ExprAST *ret) : ret(ret) {}
};
