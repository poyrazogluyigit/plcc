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

    // concat codes
    for (auto &line : this->LHS->getCode())
        this->code.push_back(line);
    std::string left = this->LHS->getNextReg();
    for (auto &line : this->RHS->getCode())
        this->code.push_back(line);
    std::string right = this->RHS->getNextReg();
    // generate code for operation
    std::stringstream line;
    line << "%" << tempVar << " = " << this->op << " i32 " << left << ", " << right << "\n";
    this->code.push_back(line.str());
    this->setNextReg("%" + std::to_string(tempVar++));
}
