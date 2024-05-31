#pragma once
#include "header.hpp"

class DeclAST {
    public:
        virtual ~DeclAST() = default;
};

class ConstDeclAST : DeclAST{
    std::vector<std::unique_ptr<ConstVarAST>> vars;
    std::vector<std::unique_ptr<ConstArrayAST>> arrays;
    
    public:
        ConstDeclAST(std::vector<std::unique_ptr<ConstVarAST>> vars, std::vector<std::unique_ptr<ConstArrayAST>> arrays)
        : vars(std::move(vars)), arrays(std::move(arrays)) {} 
};

class ConstVarAST : DeclAST {
    std::string variable;
    int value;

    public:
        ConstVarAST(std::string &variable, int value) : variable(variable) {}
};

class ConstArrayAST : DeclAST {
    std::string var;
    std::vector<std::string> values;

    public:
        ConstArrayAST(std::string &var, std::vector<std::string>> values) : var(var), values(std::move(values)) {} 
};


class VarDeclAST : DeclAST{
    std::vector<std::string> variables;

    public:
        VarDeclAST(std::vector<std::string> variables) : variables(std::move(variables)) {}
        void addToList(std::string variables){
            variables.push_back(variables);
        }
};

class ArrayDeclAST : DeclAST{
    std::vector<std::string> arrays;

    public:
        ArrayDeclAST(std::vector<std::string> arrays) : arrays(std::move(arrays)) {}
        void addToList(std::string arrays){
            arrays.push_back(arrays);
        }
};

class ProcDeclAST : DeclAST{
    std::unique_ptr<BlockAST> body;
    
    public:
        ProcDeclAST(std::unique_ptr<BlockAST> body) : body(std::move(body)) {}
};

class FuncDeclAST : DeclAST{
    std::vector<std::string> identifiers;
    std::unique_ptr<BlockAST> body;

    public:
        FuncDeclAST(std::vector<std::string> identifiers, std::unique_ptr<BlockAST> body) 
        : identifiers(std::move(identifiers)), body(std::move(body)) {}
        void addToList(std::string identifiers){
            identifiers.push_back(identifiers);
        }

};

class BlockAST : DeclAST {
    std::unique_ptr<ConstDeclAST> ConstDecl;
    std::unique_ptr<VarDeclAST> VarDecl;
    std::unique_ptr<ProcDeclAST> ProcDecl;
    std::unique_ptr<FuncDeclAST> FuncDecl;
    std::unique_ptr<StmtAST> Statement;

    public:
        BlockAST(std::unique_ptr<ConstDeclAST> constDecl, 
        std::unique_ptr<VarDeclAST> varDecl, 
        std::unique_ptr<ProcDeclAST> procDecl, 
        std::unique_ptr<FuncDeclAST> funcDecl, 
        std::unique_ptr<StmtAST> statement)
        : ConstDecl(std::move(constDecl)), VarDecl(std::move(varDecl)), 
        ProcDecl(std::move(procDecl)), FuncDecl(std::move(funcDecl)), Statement(std::move(statement)) {}
};



class ProgramAST : DeclAST{
    std::unique_ptr<BlockAST> block;

    public:
        ProgramAST(std::unique_ptr<BlockAST> block) : block(std::move(block)) {}        
};



