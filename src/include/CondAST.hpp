#pragma once
#include "header.hpp"

class ExprAST;

class CondAST {
    protected:
        std::vector<std::string> code;
        std::string nextReg;
        std::string trueLabel;
        std::string FalseLabel;
    public:
        virtual ~CondAST() = default;
        std::vector<std::string> getCode(){
            return code;
        }
        std::string getNextReg(){
            return nextReg;
        }
        void setNextReg(std::string reg){
            nextReg = reg;
        }
        std::string getTrueLabel(){
            return trueLabel;
        }
        std::string getFalseLabel(){
            return FalseLabel;
        }
        void setTrueLabel(std::string label){
            trueLabel = label;
        }
        void setFalseLabel(std::string label){
            FalseLabel = label;
        }
};

class BinaryCondAST : public CondAST {
    std::string op;
    ExprAST* LHS;
    ExprAST* RHS;

    public:
        BinaryCondAST(std::string op, ExprAST* LHS, ExprAST* RHS);
};

class OddCondAST : public CondAST {
    ExprAST* RHS;

    public:
        OddCondAST(ExprAST* RHS);

};