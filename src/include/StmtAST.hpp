#pragma once
#include "header.hpp"

class ExprAST;
class CondAST;

extern std::vector<std::string> labels;

class StmtAST
{
protected:
    std::vector<std::string> code;
    std::string nextReg;
    std::string nextLabel;
    std::string prevLabel;

public:
    virtual ~StmtAST() = default;
    std::string getNextReg()
    {
        return nextReg;
    }
    void setNextReg(std::string reg)
    {
        nextReg = reg;
    }
    std::vector<std::string> getCode()
    {
        return code;
    }
    void setNextLabel(std::string label)
    {
        nextLabel = label;
    }
    std::string getNextLabel()
    {
        return nextLabel;
    }
    void setPrevLabel()
    {
        std::string label = labels.back();
        this->prevLabel = label;
        labels.pop_back();
    }
    std::string getPrevLabel()
    {
        return prevLabel;
    }
};

class SingleAssignStmtAST : public StmtAST
{
    std::string var;
    ExprAST *RHS;

public:
    SingleAssignStmtAST(const std::string &var, ExprAST *RHS);
    void assignment();
};

class IndexedAssignStmtAST : public StmtAST
{
    std::string var;
    ExprAST *index;
    ExprAST *RHS;

public:
    IndexedAssignStmtAST(const std::string &var, ExprAST *index, ExprAST *RHS);
};

class ArrayAssignStmtAST : public StmtAST
{
    std::string var;
    ExprAST *RHS;

public:
    ArrayAssignStmtAST(const std::string &var, ExprAST *RHS) : var(var), RHS(RHS) {}
};

class ProcCallAST : public StmtAST
{
    std::string name;

public:
    ProcCallAST(const std::string &name) : name(name) {}
};

class FuncCallStmtAST : public StmtAST
{
    ExprAST *funcAST;

public:
    FuncCallStmtAST(ExprAST *funcAST) : funcAST(funcAST) {}
};

class StmtListAST : public StmtAST
{
    std::vector<StmtAST *> stmts;

public:
    void addToList(StmtAST *stmt)
    {
        stmts.push_back(stmt);
    }
    void pullCodeFromLeafs();
};

class IfThenElseAST : public StmtAST
{
    CondAST *cond;
    StmtAST *thenStmt;
    StmtAST *elseStmt;

public:
    IfThenElseAST(CondAST *cond, StmtAST *thenStmt, StmtAST *elseStmt);
};

class IfThenAST : public StmtAST
{
    CondAST *cond;
    StmtAST *thenStmt;

public:
    IfThenAST(CondAST *cond, StmtAST *thenStmt);
};

class WhileStmtAST : public StmtAST
{
    CondAST *cond;
    StmtAST *stmt;

public:
    WhileStmtAST(CondAST *cond, StmtAST *stmt);
};

class ForStmtAST : public StmtAST
{
    std::string loopVar;
    ExprAST *termination;
    bool isDownTo;
    StmtAST *stmt;

public:
    ForStmtAST(const std::string &loopVar, ExprAST *termination, bool isDownTo, StmtAST *stmt)
        : loopVar(loopVar), termination(termination), isDownTo(isDownTo), stmt(stmt) {}
};

class IOStmtAST : public StmtAST
{
    // 0 - read, 1 - write
    int op;
    ExprAST *expr;

public:
    IOStmtAST(int op, ExprAST *expr);
    IOStmtAST(int op, const std::string &var);
};

class NoValControlAST : public StmtAST
{
    int type;

public:
    NoValControlAST(int type) : type(type) {}
};

class ReturnValueControlAST : public StmtAST
{
    ExprAST *ret;

public:
    ReturnValueControlAST(ExprAST *ret) : ret(ret) {}
};
