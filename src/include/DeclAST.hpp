#pragma once
#include "header.hpp"

class DeclAST
{
public:
    virtual ~DeclAST() = default;
    virtual Value *codegen() = 0;
};

class ConstVarAST : public DeclAST
{
    std::string variable;
    int value;

public:
    Value *codegen() override;
    ConstVarAST(std::string &variable, std::string &value) : variable(variable), value(std::stoi(value)) {}
};

class ConstArrayValuesAST : public DeclAST
{
    std::vector<std::string> values;

public:
    Value *codegen() override;
    ConstArrayValuesAST(std::vector<std::string> values) : values(std::move(values)) {}
    void addToList(std::string value)
    {
        values.push_back(value);
    }
};

class ConstArrayAST : public DeclAST
{
    std::string var;
    ConstArrayValuesAST *values;

public:
    Value *codegen() override;
    ConstArrayAST(std::string &var, ConstArrayValuesAST *values) : var(var), values(values) {}
};

class ConstDeclAST : public DeclAST
{
    std::vector<ConstVarAST *> vars;
    std::vector<ConstArrayAST *> arrays;

public:
    Value *codegen() override;
    ConstDeclAST(std::vector<ConstVarAST *> vars, std::vector<ConstArrayAST *> arrays)
        : vars(vars), arrays(arrays) {}
    void addVar(ConstVarAST *var)
    {
        vars.push_back(var);
    }
    void addArray(ConstArrayAST *array)
    {
        arrays.push_back(array);
    }
};

class IdentListAST : public DeclAST
{
    std::vector<std::string> identifiers;

public:
    Value *codegen() override;
    IdentListAST(std::vector<std::string> identifiers) : identifiers(std::move(identifiers)) {}
    void addToList(std::string identifier)
    {
        identifiers.push_back(identifier);
    }
    std::vector<std::string> getIdentifiers()
    {
        return identifiers;
    }
};

class VarDeclAST : public DeclAST
{
    IdentListAST *identifiers;

public:
    Value *codegen() override;
    VarDeclAST(IdentListAST *identifiers) : identifiers(identifiers) {}
};

class ArrayDeclAST : public DeclAST
{
    IdentListAST *arrays;

public:
    Value *codegen() override;
    ArrayDeclAST(IdentListAST *arrays) : arrays(arrays) {}
};

class BlockAST;

class ProcDeclAST : public DeclAST
{
    std::string name;
    BlockAST *body;

public:
    Value *codegen() override;
    ProcDeclAST(std::string &name, BlockAST *body) : name(name), body(body) {}
};

class FuncDeclAST : public DeclAST
{
    std::string name;
    IdentListAST *identifiers;
    BlockAST *body;

public:
    Value *codegen() override;
    FuncDeclAST(std::string &name, IdentListAST *identifiers, BlockAST *body)
        : name(name), identifiers(identifiers), body(body) {}
};

class BlockAST : public DeclAST
{
    ConstDeclAST *ConstDecl;
    VarDeclAST *VarDecl;
    ArrayDeclAST *ArrayDecl;
    ProcDeclAST *ProcDecl;
    FuncDeclAST *FuncDecl;
    StmtAST *Statement;

public:
    Value *codegen() override;
    BlockAST(ConstDeclAST *constDecl,
             VarDeclAST *varDecl,
             ArrayDeclAST *ArrayDecl,
             ProcDeclAST *procDecl,
             FuncDeclAST *funcDecl,
             StmtAST *statement)
        : ConstDecl(constDecl),
          ArrayDecl(ArrayDecl),
          VarDecl(varDecl),
          ProcDecl(procDecl),
          FuncDecl(funcDecl),
          Statement(statement) {}
};

class ProgramAST : public DeclAST
{
    BlockAST *block;

public:
    Value *codegen() override;
    ProgramAST(BlockAST *block) : block(block) {}
};
