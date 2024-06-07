#include "DeclAST.hpp"

extern std::ofstream output_file;

extern int tempVar;

void ProgramAST::generateCode()
{
    this->code.push_back("; ModuleID = 'calculator'\n");
    this->code.push_back("declare i32 @printf(i8*, ...)\n");
    this->code.push_back("declare i32 @scanf(i8*, ...)\n");
    this->code.push_back("declare i8 *@calloc(i64, i64)\n");
    this->code.push_back("@read.str = constant [3 x i8] c\"%d\\00\"\n");
    this->code.push_back("@writeline.str = constant [4 x i8] c\"%d\\0A\\00\"\n");
    this->code.push_back("@write.str = constant [3 x i8] c\"%d\\00\"\n");
    // append code from block->constDecl
    for (auto &line : this->block->ConstDecl->getCode())
        this->code.push_back(std::move(line));
    // append code from block->funcDecl and block->procDecl
    // for (auto &line : this->block->FuncDecl->getCode())
    //     this->code.push_back(std::move(line));
    // for (auto &line : this->block->ProcDecl->getCode())
    //     this->code.push_back(std::move(line));
    this->code.push_back("\ndefine i32 @main() {\n");
    for (auto &line : this->block->VarDecl->getCode())
        this->code.push_back(std::move(line));
    for (auto &line : this->block->ArrayDecl->getCode())
        this->code.push_back(std::move(line));
    for (auto &line : this->block->Statement->getCode())
        this->code.push_back(std::move(line));
    this->code.push_back("ret i32 0\n}\n");
}

void ProgramAST::writeToFile()
{
    for (const auto &e : this->code)
        output_file << e;
}

// std::vector<std::string> BlockAST::getCode(){
//     std::vector<std::string> code;
//     std::vector<std::string> constDeclCode = this->ConstDecl->getCode();
//     std::vector<std::string> varDeclCode = this->VarDecl->getCode();
//     std::vector<std::string> arrayDeclCode = this->ArrayDecl->getCode();
//     std::vector<std::string> procDeclCode = this->ProcDecl->getCode();
//     std::vector<std::string> funcDeclCode = this->FuncDecl->getCode();
//     std::vector<std::string> stmtCode = this->Statement->getCode();
//     code.insert(code.end(), constDeclCode.begin(), constDeclCode.end());
//     code.insert(code.end(), varDeclCode.begin(), varDeclCode.end());
//     code.insert(code.end(), arrayDeclCode.begin(), arrayDeclCode.end());
//     code.insert(code.end(), procDeclCode.begin(), procDeclCode.end());
//     code.insert(code.end(), funcDeclCode.begin(), funcDeclCode.end());
//     code.insert(code.end(), stmtCode.begin(), stmtCode.end());
//     return code;
// }

void VarDeclAST::generate()
{
    std::vector<std::string> varDecls;
    std::stringstream line;
    std::stringstream line2;
    std::vector<int> sizes = this->identifiers->getSizes();
    int count = 0;
    for (auto &var : this->identifiers->getIdentifiers())
    {
        if (sizes[count] == 0)
        {
            line << "%" << var << " = alloca i32\n";
            this->code.push_back(line.str());
            line.str(std::string());
        }
        else
        {
            line << "%" << var << "_raw = call i8 * @calloc(i64 " << sizes[count] << ", i64 4 )\n";
            this->code.push_back(line.str());
            line.str(std::string());
            line2 << "%" << var << " = bitcast i8* %" << var << "_raw to i32*\n";
            this->code.push_back(line2.str());
            line2.str(std::string());
        }

        count++;
    }
}

void ConstDeclAST::generate()
{
    std::stringstream line;
    for (auto &var : this->vars)
    {
        line << "@" << var->getVar() << " = global i32 " << var->getValue() << "\n";
        this->code.push_back(line.str());
        line.str(std::string());
    }

    for (auto &array : arrays)
    {
        line << "@" << array->var << " = global [" << array->values->values.size() << " x i32] [";
        int i = 1;
        for (auto &value : array->values->values)
        {
            if (i == array->values->values.size())
                line << "i32 " << value;
            else
                line << "i32 " << value << ", ";
            i++;
        }
        line << "]\n";
        this->code.push_back(line.str());
    }
}