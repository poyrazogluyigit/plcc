#include "StmtAST.hpp"

extern int tempVar;

SingleAssignStmtAST::SingleAssignStmtAST(const std::string &var, ExprAST* RHS) 
: var(var), RHS(RHS) {
    for (auto &line : RHS->getCode())
        this->code.push_back(std::move(line));
    this->code.push_back("store i32 " + RHS->getNextReg() + ", i32* %" + this->var + "\n");
    this->setNextReg("%" + std::to_string(tempVar));
    this->setNextLabel(std::to_string(++tempVar));
}

IndexedAssignStmtAST::IndexedAssignStmtAST(const std::string &var, ExprAST* index, ExprAST* RHS)
: var(var), index(index), RHS(RHS) {
    for (auto &line : index->getCode())
        this->code.push_back(std::move(line));
    for (auto &line : RHS->getCode())
        this->code.push_back(std::move(line));
    this->code.push_back("store i32 " + RHS->getNextReg() + ", i32* getelementptr inbounds (i32, i32* %" + var + ", i32 " + index->getNextReg() + ")\n");
    this->setNextReg("%" + std::to_string(tempVar));
    this->setNextLabel(std::to_string(++tempVar));
}

void StmtListAST::pullCodeFromLeafs(){
    for (auto &stmt : this->stmts) {
        if (stmt->getCode().size() > 0){
            for (auto &line : stmt->getCode())
                this->code.push_back(std::move(line));
            this->setNextLabel(stmt->getNextLabel());
        }
    }
}

IOStmtAST::IOStmtAST(int op, ExprAST* expr) 
: op(op), expr(expr) {
    for (auto &line : expr->getCode())
        this->code.push_back(line);
    if (op == 1)
        this->code.push_back("call i32 (i8*, ...) @printf(i8* getelementptr ([3 x i8], [3 x i8]* @write.str, i32 0, i32 0), i32 " + expr->getNextReg() + ")\n");
    else if (op == 2)
        this->code.push_back("call i32 (i8*, ...) @printf(i8* getelementptr ([4 x i8], [4 x i8]* @writeline.str, i32 0, i32 0), i32 " + expr->getNextReg() + ")\n");
    tempVar++;
    this->setNextLabel(std::to_string(++tempVar));
}

IOStmtAST::IOStmtAST(int op, const std::string &var)
: op(op) {
    this->code.push_back("call i32 (i8*, ...) @scanf(i8* getelementptr ([3 x i8], [3 x i8]* @read.str, i32 0, i32 0), i32* %" + var + ")\n");
    tempVar++;
    this->setNextLabel(std::to_string(++tempVar));
}

IfThenAST::IfThenAST(CondAST* cond, StmtAST* thenStmt)
: cond(cond), thenStmt(thenStmt) {
    for (auto &line : cond->getCode())
        this->code.push_back(line);
    this->code.push_back("br i1 " + cond->getNextReg() + ", label %" + cond->getTrueLabel() + ", label %" + thenStmt->getNextLabel() + "\n");
    this->code.push_back(cond->getTrueLabel() +"\n");
    for (auto &line : thenStmt->getCode())
        this->code.push_back(line);
    this->code.push_back("br label %" + thenStmt->getNextLabel() + "\n" + thenStmt->getNextLabel() + ":\n");
    this->setNextLabel(std::to_string(++tempVar));
}

IfThenElseAST::IfThenElseAST(CondAST* cond, StmtAST* thenStmt, StmtAST* elseStmt)
: cond(cond), thenStmt(thenStmt), elseStmt(elseStmt) {
    for (auto &line : cond->getCode())
        this->code.push_back(line);
    cond->setFalseLabel(thenStmt->getNextLabel());
    this->code.push_back("br i1 " + cond->getNextReg() + ", label %" + cond->getTrueLabel() + ", label %" + cond->getFalseLabel() + "\n");
    this->code.push_back(cond->getTrueLabel() + ":\n");
    for (auto &line : thenStmt->getCode())
        this->code.push_back(line);
    this->code.push_back("br label %" + elseStmt->getNextLabel() + "\n" + thenStmt->getNextLabel() + ":\n");
//    this->code.push_back("br label %" + elseStmt->getNextLabel() + "\n" + elseStmt->getNextLabel() + ":\n");
    for (auto &line : elseStmt->getCode())
        this->code.push_back(line);
    this->code.push_back("br label %" + elseStmt->getNextLabel() + "\n" + elseStmt->getNextLabel() + ":\n");
    this->setNextLabel(std::to_string(++tempVar));
}

WhileStmtAST::WhileStmtAST(CondAST* cond, StmtAST* stmt) 
: cond(cond), stmt(stmt) {
    this->code.push_back("br label %" + cond->getTrueLabel() + "\n");
    this->setPrevLabel();
    this->code.push_back(this->getPrevLabel() + ":\n");
    for (auto &line : cond->getCode())
        this->code.push_back(line);
    this->code.push_back("br i1 " + cond->getNextReg() + ", label %" + cond->getTrueLabel() + ", label %" + stmt->getNextLabel() + "\n");
    this->code.push_back(cond->getTrueLabel() + ":\n");
    for (auto &line : stmt->getCode())
        this->code.push_back(line);
    this->code.push_back("br label %" + this->getPrevLabel() + "\n" + stmt->getNextLabel() + ":\n");
    this->setNextLabel(std::to_string(++tempVar));
}

