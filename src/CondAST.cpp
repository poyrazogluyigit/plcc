#include "CondAST.hpp"

extern int tempVar;

BinaryCondAST::BinaryCondAST(std::string op, ExprAST *LHS, ExprAST *RHS)
    : op(op), LHS(LHS), RHS(RHS)
{
    // get target registers
    std::string right;
    std::string left;
    // concat codes
    if (RHS->isVariable == true && LHS->isVariable == false)
    {
        for (auto &line : this->RHS->getCode())
            this->code.push_back(line);
        right = this->RHS->getNextReg();
        for (auto &line : this->LHS->getCode())
            this->code.push_back(line);
        left = this->LHS->getNextReg();
    }
    else
    {
        for (auto &line : this->LHS->getCode())
            this->code.push_back(line);
        left = this->LHS->getNextReg();
        for (auto &line : this->RHS->getCode())
            this->code.push_back(line);
        right = this->RHS->getNextReg();
    }

    // generate code for operation
    std::stringstream line;
    line << "%" << tempVar << " = icmp " << this->op << " i32 " << left << ", " << right << "\n";
    this->code.push_back(line.str());
    this->setNextReg("%" + std::to_string(tempVar));
    this->setTrueLabel(std::to_string(++tempVar));
}

OddCondAST::OddCondAST(ExprAST *RHS) : RHS(RHS)
{
    // get target registers
    std::string right = this->RHS->getNextReg();
    // concat codes
    for (auto &line : this->RHS->getCode())
        this->code.push_back(line);
    // generate code for operation
    std::stringstream line;
    line << "%" << ++tempVar << " = srem i32 " << right << ", 2\n";
    this->code.push_back(line.str());
    line.str("");
    line << "%" << ++tempVar << " = icmp eq i32 %" << tempVar - 1 << ", 0\n";
    this->code.push_back(line.str());
    this->setNextReg("%" + std::to_string(tempVar));
    this->setTrueLabel("a" + std::to_string(++tempVar));
}