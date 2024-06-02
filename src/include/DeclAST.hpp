#pragma once
#include "header.hpp"

class DeclAST
{
public:
    virtual ~DeclAST() = default;
};

class ConstVarAST : public DeclAST
{
    std::string variable;
    int value;

public:
    ConstVarAST(std::string &variable, std::string &value) : variable(variable), value(std::stoi(value)) {}
};

class ConstArrayValuesAST : public DeclAST {
    std::vector<std::string> values;

    public:
        void addToList(std::string value) {
            values.push_back(value);
        }
};

class ConstArrayAST : public DeclAST
{
    std::string var;
    ConstArrayValuesAST* values;

    public:
        ConstArrayAST(std::string &var, ConstArrayValuesAST* values) : var(var), values(values) {}
};

class ConstDeclAST : public DeclAST
{
    std::vector<ConstVarAST*> vars;
    std::vector<ConstArrayAST*> arrays;

public:
    ConstDeclAST(std::vector<ConstVarAST*> vars, std::vector<ConstArrayAST*> arrays)
        : vars(vars), arrays(arrays) {}
    void addVar(ConstVarAST* var) {
        vars.push_back(var);
    }
    void addArray(ConstArrayAST* array) {
        arrays.push_back(array);
    }
};

class IdentListAST : public DeclAST {
    std::vector<std::string> identifiers;

    public:
        void addToList(const std::string &identifier) {
            identifiers.push_back(std::move(identifier));
        }
        std::vector<std::string> getIdentifiers() {
            return identifiers;
        }
};

class VarDeclAST : public DeclAST
{
    IdentListAST* identifiers;

    public:
        VarDeclAST(IdentListAST* identifiers) : identifiers(identifiers) {}
};

class ArrayDeclAST : public DeclAST {
    IdentListAST* arrays;

    public:
        ArrayDeclAST(IdentListAST* arrays) : arrays(arrays) {}
};

class BlockAST;

class ProcDeclMonoAST : public DeclAST
{
    std::string name;
    BlockAST* body;

    public:
        ProcDeclMonoAST(std::string &name, BlockAST* body) : name(name), body(body) {}
};

class ProcDeclAST : public DeclAST
{
    std::vector<ProcDeclMonoAST*> procs;

    public:
        void addProc(ProcDeclMonoAST* proc) {
            procs.push_back(proc);
        }
};

class FuncDeclMonoAST : public DeclAST
{
    std::string name;
    IdentListAST* identifiers;
    BlockAST* body;

    public:
        FuncDeclMonoAST(std::string &name, IdentListAST* identifiers, BlockAST* body) 
        : name(name), identifiers(identifiers), body(body) {}
};

class FuncDeclAST : public DeclAST
{
    std::vector<FuncDeclMonoAST*> funcs;

    public:
        void addFunc(FuncDeclMonoAST* func) {
            funcs.push_back(func);
        }
};

class BlockAST : public DeclAST
{
    ConstDeclAST* ConstDecl;
    VarDeclAST* VarDecl;
    ArrayDeclAST* ArrayDecl;
    ProcDeclAST* ProcDecl;
    FuncDeclAST* FuncDecl;
    StmtAST* Statement;

public:
    BlockAST(ConstDeclAST* constDecl,
             VarDeclAST* varDecl,
             ArrayDeclAST* ArrayDecl, 
             ProcDeclAST* procDecl,
             FuncDeclAST* funcDecl,
             StmtAST* statement)
        : ConstDecl(constDecl),
        ArrayDecl(ArrayDecl),
        VarDecl(varDecl),
        ProcDecl(procDecl), 
        FuncDecl(funcDecl), 
        Statement(statement) {}
};

class ProgramAST : public DeclAST
{
    BlockAST* block;

public:
    ProgramAST(BlockAST* block) : block(block) {}
};
