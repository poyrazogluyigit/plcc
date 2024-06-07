#include "ExprAST.hpp"

extern int tempVar;

VariableExprAST::VariableExprAST(const std::string &name)
    : name(name)
{
    this->isVariable = true;
    // load variable into temp
    std::stringstream line;
    line << "%" << tempVar << " = load i32, i32* ";
    if (this->isConst())
        line << "@" << this->name << "\n";
    else
        line << "%" << this->name << "\n";
    this->code.push_back(line.str());
    this->setNextReg("%" + std::to_string(tempVar++));
}

BinaryExprAST::BinaryExprAST(std::string op, ExprAST *LHS, ExprAST *RHS)
    : op(op), LHS(LHS), RHS(RHS)
{
    // get target registers
    std::string left = this->LHS->getNextReg();
    std::string right = this->RHS->getNextReg();
    // concat codes
    for (auto &line : this->LHS->getCode())
        this->code.push_back(line);
    for (auto &line : this->RHS->getCode())
        this->code.push_back(line);
    // generate code for operation
    std::stringstream line;
    line << "%" << tempVar << " = " << this->op << " i32 " << left << ", " << right << "\n";
    this->code.push_back(line.str());
    this->setNextReg("%" + std::to_string(tempVar++));
}
