#pragma once
#include "header.hpp"

class StmtAST;

class DeclAST
{
protected:
    std::vector<std::string> code;

public:
    virtual ~DeclAST() = default;
};

class ConstVarAST : public DeclAST
{
    std::string variable;
    int value;

public:
    ConstVarAST(std::string &variable, std::string &value) : variable(variable), value(std::stoi(value)) {}
    std::string getVar()
    {
        return variable;
    }
    int getValue()
    {
        return value;
    }
};

class ConstArrayValuesAST : public DeclAST
{

public:
    std::vector<std::string> values;
    void addToList(std::string value)
    {
        values.push_back(value);
    }
};

class ConstArrayAST : public DeclAST
{
public:
    std::string var;
    ConstArrayValuesAST *values;
    ConstArrayAST(std::string &var, ConstArrayValuesAST *values) : var(var), values(values) {}
};

class ConstDeclAST : public DeclAST
{
    std::vector<ConstVarAST *> vars;
    std::vector<ConstArrayAST *> arrays;

public:
    ConstDeclAST(std::vector<ConstVarAST *> vars, std::vector<ConstArrayAST *> arrays)
        : vars(vars), arrays(arrays) {}
    void generate();
    void addVar(ConstVarAST *var)
    {
        vars.push_back(var);
    }
    void addArray(ConstArrayAST *array)
    {
        arrays.push_back(array);
    }
    std::vector<std::string> getCode()
    {
        return code;
    }
};

class IdentListAST : public DeclAST
{
    std::vector<std::string> identifiers;
    std::vector<int> sizes;

public:
    void addToList(const std::string &identifier, const std::string &size)
    {
        identifiers.push_back(identifier);
        sizes.push_back(atoi(size.c_str()));
    }
    std::vector<std::string> getIdentifiers()
    {
        return identifiers;
    }
    std::vector<int> getSizes()
    {
        return sizes;
    }
};

class VarDeclAST : public DeclAST
{
    IdentListAST *identifiers;

public:
    VarDeclAST(IdentListAST *identifiers) : identifiers(identifiers) {}
    void generate();
    std::vector<std::string> getCode()
    {
        return code;
    }
};

class ArrayDeclAST : public DeclAST
{
    IdentListAST *arrays;

public:
    ArrayDeclAST(IdentListAST *arrays) : arrays(arrays) {}
    std::vector<std::string> getCode()
    {
        return code;
    }
};

class BlockAST;

class ProcDeclMonoAST : public DeclAST
{
    std::string name;
    BlockAST *body;

public:
    ProcDeclMonoAST(std::string &name, BlockAST *body) : name(name), body(body) {}
};

class ProcDeclAST : public DeclAST
{
    std::vector<ProcDeclMonoAST *> procs;

public:
    void addProc(ProcDeclMonoAST *proc)
    {
        procs.push_back(proc);
    }
    std::vector<std::string> getCode()
    {
        return code;
    }
};

class FuncDeclMonoAST : public DeclAST
{
    std::string name;
    IdentListAST *identifiers;
    BlockAST *body;

public:
    FuncDeclMonoAST(std::string &name, IdentListAST *identifiers, BlockAST *body)
        : name(name), identifiers(identifiers), body(body) {}
};

class FuncDeclAST : public DeclAST
{
    std::vector<FuncDeclMonoAST *> funcs;

public:
    void addFunc(FuncDeclMonoAST *func)
    {
        funcs.push_back(func);
    }
    std::vector<std::string> getCode()
    {
        return code;
    }
};

class BlockAST : public DeclAST
{
public:
    ConstDeclAST *ConstDecl;
    VarDeclAST *VarDecl;
    ArrayDeclAST *ArrayDecl;
    ProcDeclAST *ProcDecl;
    FuncDeclAST *FuncDecl;
    StmtAST *Statement;

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
    //    std::vector<std::string> getCode();
};

class ProgramAST : public DeclAST
{
    BlockAST *block;

public:
    ProgramAST(BlockAST *block) : block(block) {}
    void generateCode();
    void writeToFile();
};
