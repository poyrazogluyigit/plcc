%{
#include "header.hpp"
ProgramAST *program;
extern FILE *yyin;
void yyerror(std::string s);
void newLabel();
extern int yylineno;
extern int yylex();
std::ofstream output_file;
std::vector<std::string> labels;
std::map<std::string, std::string> consts;
// int yydebug = 1;
int tempVar = 1;
int varno = 1;
%}

%union{
    int token;
    std::string *string;
    ExprAST *expr;
    CondAST *cond;
    StmtAST *stmt;
    DeclAST *decl;
    ConstArrayValuesAST *constArray;
    IdentListAST *identList;
    ConstDeclAST *constDecl;
    BlockAST *block;
    VarDeclAST *varDecl;
    ArrayDeclAST *arrayDecl;
    ProcDeclAST *procDecl;
    FuncDeclAST *funcDecl;
    ListExprAST *generalList;
    StmtListAST *stmtList;
}

// tokens
%token <string> NUMBER IDENTIFIER
%token <token> CONST VAR ARRAY PROCEDURE FUNCTION CALL BEGN END
%token <token> IF THEN ELSE WHILE DO FOR UPTO DOWNTO BREAK RETURN
%token <token> READ WRITE WRITELINE
%token <token> ODD EQ NE GT LT GEQ LEQ ASGN
%token <token> PLUS MINUS MUL DIV MOD

%type <cond> Condition
%type <expr> Expression FuncCall
%type <generalList> GeneralList
%type <stmt> Statement ConditionalStatement LoopStatement ControlStatement IOStatement
%type <stmtList> StatementList
%type <varDecl> VarDecl
%type <arrayDecl> ArrayDecl
%type <procDecl> ProcDecl
%type <funcDecl> FuncDecl
%type <block> Block
%type <constArray> ConstArray
%type <identList> IdentifierList
%type <constDecl> ConstDecl ConstAssignmentList

%nonassoc IFX
%nonassoc ELSE

%left PLUS MINUS
%left MUL DIV MOD
%nonassoc UMINUS UPLUS

%start Program

%%
// Rules
Program : Block '.' {program = new ProgramAST($1); program->generateCode(); };    // '>''='   

Block : ConstDecl VarDecl ArrayDecl ProcDecl FuncDecl Statement { $$ = new BlockAST($1, $2, $3, $4, $5, $6); }
        | error '.' {yyerror("Invalid block construct"); yyerrok;}
        ;

ConstDecl : CONST ConstAssignmentList ';'       { $$ = $2; $$->generate(); }
            |                                   { std::vector<ConstVarAST*> vars; std::vector<ConstArrayAST*> arrays; $$ = new ConstDeclAST(vars, arrays);}
            | error ';'                          {yyerror("Invalid const declaration"); yyerrok;}
            ;  

ConstAssignmentList : 
                        IDENTIFIER EQ NUMBER  {
                            consts[*$1] = *$1;
                            std::vector<ConstVarAST*> vars; 
                            std::vector<ConstArrayAST*> arrays;
                            vars.push_back(new ConstVarAST(*$1, *$3));
                            $$ = new ConstDeclAST(vars, arrays);
                            }
                        | ARRAY IDENTIFIER EQ  '[' ConstArray ']' {
                            consts[*$2] = std::to_string($5->values.size());
                            std::vector<ConstVarAST*> vars; 
                            std::vector<ConstArrayAST*> arrays;
                            arrays.push_back(new ConstArrayAST(*$2, $5));
                            $$ = new ConstDeclAST(vars, arrays);
                        }
                        | ConstAssignmentList ',' IDENTIFIER EQ NUMBER {
                            consts[*$3] = *$3;
                            $1->addVar(new ConstVarAST(*$3, *$5));
                        }
                        | ConstAssignmentList ',' ARRAY IDENTIFIER EQ '[' ConstArray ']' {
                            consts[*$4] = std::to_string($7->values.size());
                            $1->addArray(new ConstArrayAST(*$4, $7));
                        }
                        ;

VarDecl:
        VAR IdentifierList ';'                  { $$ = new VarDeclAST($2); $$->generate(); }
        |                                       { $$ = new VarDeclAST(nullptr); }
        | error ';'                             {yyerror("Invalid variable declaration"); yyerrok;}                         
;

ArrayDecl: 
            ARRAY IdentifierList ';'                { $$ = new ArrayDeclAST($2); }
            | error ';'                             {yyerror("Invalid array declaration"); yyerrok;} 
            |                                       { $$ = new ArrayDeclAST(nullptr); }
;

IdentifierList: 
            IDENTIFIER                                      { $$ = new IdentListAST(); $$->addToList(*$1,"0"); }   
            | IDENTIFIER NUMBER                           { $$ = new IdentListAST(); $$->addToList(*$1,*$2);} 
            | IdentifierList ',' IDENTIFIER NUMBER      { $1->addToList(*$3,*$4); }
            | IdentifierList ',' IDENTIFIER             { $1->addToList(*$3,"0"); }
//            |                                       { std::vector<std::string> ids; $$ = new IdentListAST(ids); }
;

ProcDecl:
            ProcDecl PROCEDURE IDENTIFIER ';' Block ';'                                     { $$->addProc(new ProcDeclMonoAST(*$3, $5));}
            | error ';'                             {yyerror("Invalid procedure declaration"); yyerrok;} 
            |                                                                               { $$ = new ProcDeclAST(); }
;

FuncDecl:
            FUNCTION IDENTIFIER '(' IdentifierList ')' ';' Block ';'                        { $$->addFunc(new FuncDeclMonoAST(*$2, $4, $7));}
            | error ';'                             {yyerror("Invalid function declaration"); yyerrok;} 
            |                                                                               { $$ = new FuncDeclAST(); }    
;    

ConstArray: NUMBER                                  { $$ = new ConstArrayValuesAST(); $$->addToList(*$1); }
            | ConstArray ',' NUMBER                 { $1->addToList(*$3); }
            | ConstArray error NUMBER               {yyerror("Invalid list construct"); yyerrok;}
            ;


Statement : 
            IDENTIFIER ASGN Expression                                  { $$ = new SingleAssignStmtAST(*$1, $3); }
           | IDENTIFIER ASGN '[' GeneralList ']'                       { $$ = new ArrayAssignStmtAST(*$1, $4); }                       
            | IDENTIFIER '[' Expression ']' ASGN Expression             { $$ = new IndexedAssignStmtAST(*$1, $3, $6); }
            | CALL IDENTIFIER                                           { $$ = new ProcCallAST(*$2); }
            | FuncCall                                                  { $$ = new FuncCallStmtAST($1);}
            | BEGN StatementList END                                    { $2->pullCodeFromLeafs(); $$ = $2; }
            | ConditionalStatement
            | LoopStatement
            | ControlStatement
            | IOStatement                                               { $$ = $1; }
            |                                                           { $$ = new StmtListAST();}
            | error END             {yyerror("Invalid statement"); yyerrok;}
            | error ';'             {yyerror("Invalid statement"); yyerrok;}
            | error                 {yyerror("Invalid statement");}
            ;

// statement FOLLOW = [IDENTIFIER CALL BEGIN IF WHILE FOR BREAK RETURN WRITELINE READ READLINE %empty '.' ';' END ELSE]


ConditionalStatement:   IF Condition THEN Statement %prec IFX                       { $$ = new IfThenAST($2, $4); }
                        | IF Condition THEN Statement ELSE Statement                { $$ = new IfThenElseAST($2, $4, $6); }
                        ;

LoopStatement:   WHILE {newLabel();} Condition DO Statement                                                   { $$ = new WhileStmtAST($3, $5); }                                              
                | FOR IDENTIFIER UPTO Expression DO Statement                                   { $$ = new ForStmtAST(*$2, $4, 0, $6); }                               
                | FOR IDENTIFIER DOWNTO Expression DO Statement                                 { $$ = new ForStmtAST(*$2, $4, 1, $6); }
                | WHILE error {yyerror("Invalid while construct"); yyclearin;} Statement        { $$ = new WhileStmtAST(0, $4);}    
                | FOR error {yyerror("Invalid for construct"); yyclearin;} Statement            { $$ = new ForStmtAST("", 0, 0, $4);}                                        
                ;  
            
IOStatement: 
            READ '(' IDENTIFIER ')'                                                         { $$ = new IOStmtAST(0, *$3); }
            | WRITE'(' Expression ')'                                                       { $$ = new IOStmtAST(1, $3); }
            | WRITELINE '(' Expression ')'                                                  { $$ = new IOStmtAST(2, $3); }
            | READ '(' error ')' {yyerror("Invalid read() call"); yyerrok;}
            | WRITE '(' error ')' {yyerror("Invalid write() call"); yyerrok;}
            | WRITELINE '(' error ')' {yyerror("Invalid writeline() call"); yyerrok;}
            ;


FuncCall:   
        CALL IDENTIFIER '(' GeneralList ')'                     { $$ = new FuncCallAST(*$2, $4);}
        ;



ControlStatement:
            BREAK                               { $$ = new NoValControlAST(0); } 
            | RETURN                            { $$ = new NoValControlAST(1); }
            | RETURN Expression                 { $$ = new ReturnValueControlAST($2); }
            ;               

StatementList:
            Statement                                                                   { $$ = new StmtListAST(); $$->addToList($1);} 
            | StatementList ';' Statement                                               { $1->addToList($3); }
            | StatementList error {yyerror("Missing semicolon"); yyerrok;} Statement
            ;

Condition :
            ODD Expression                              { $$ = new OddCondAST($2); } 
            | Expression EQ Expression                  { $$ = new BinaryCondAST("eq", $1, $3); }
            | Expression NE Expression                  { $$ = new BinaryCondAST("ne", $1, $3); }
            | Expression GT Expression                  { $$ = new BinaryCondAST("sgt", $1, $3); }
            | Expression LT Expression                  { $$ = new BinaryCondAST("slt", $1, $3); }
            | Expression LEQ Expression                 { $$ = new BinaryCondAST("sge", $1, $3); }
            | Expression GEQ Expression                 { $$ = new BinaryCondAST("sle", $1, $3); }
            ;


GeneralList:    NUMBER                                  { std::vector<ExprAST*> exprs; exprs.push_back(new NumberExprAST(*$1)); $$ = new ListExprAST(exprs);}                        
                | IDENTIFIER                            { std::vector<ExprAST*> exprs; exprs.push_back(new VariableExprAST(*$1)); $$ = new ListExprAST(exprs);}
                | GeneralList ',' NUMBER                { $1->addToList(new NumberExprAST(*$3)); }
                | GeneralList ',' IDENTIFIER            { $1->addToList(new VariableExprAST(*$3)); }
                | GeneralList error NUMBER              {yyerror("Invalid list construct"); yyerrok;}
                | GeneralList error IDENTIFIER          {yyerror("Invalid list construct"); yyerrok;}
                |                                       { std::vector<ExprAST*> exprs; $$ = new ListExprAST(exprs); }
                ;



Expression  :   Expression PLUS Expression                  { $$ = new BinaryExprAST("add", $1, $3); }
                | Expression MINUS Expression               { $$ = new BinaryExprAST("sub", $1, $3); }
                | Expression MUL Expression                 { $$ = new BinaryExprAST("mul", $1, $3); }
                | Expression DIV Expression                 { $$ = new BinaryExprAST("sdiv", $1, $3); }
                | Expression MOD Expression                 { $$ = new BinaryExprAST("srem", $1, $3); }
                | PLUS Expression    %prec UPLUS            { $$ = $2; }
                | MINUS Expression    %prec UMINUS          { $$ = new UnaryExprAST('-', $2); }
                | IDENTIFIER                                { $$ = new VariableExprAST(*$1); }
                | IDENTIFIER '[' Expression ']'             { $$ = new ArrayVarExprAST(*$1, $3); }
                | NUMBER                                    { $$ = new NumberExprAST(*$1); }
                | '(' Expression ')'                        { $$ = $2; }
                | FuncCall                                  
                ;
                
%%
// User Subroutines

void yyerror(std::string s) {
    std::cerr << "line " << yylineno << ": " << s << std::endl;
}

void newLabel(){
    labels.push_back(std::to_string(tempVar+1));
}


int main(int argc, char ** argv){

    yyin = fopen(argv[1], "r");
    std::string tmp = std::string(argv[2]) + ".ll";
    output_file = std::ofstream(tmp.c_str());
    yyparse();
    program->writeToFile();
    fclose(yyin);
    if (argc == 4) {
        std::string optimizationLevel = argv[3];
        std::string inputFile = tmp;
        std::string outputFilePrefix = argv[2];
        std::string outputFile = outputFilePrefix + "_optimized.ll";
        std::string opt = "opt";
        std::string o = "-o";
        std::string s = "-S";
        char* aaa[] = { &opt[0], &optimizationLevel[0], &inputFile[0], &o[0], &outputFile[0], &s[0], nullptr };
        std::cout << "Executing command: opt " << optimizationLevel << " " << inputFile << " -o " << outputFile << " -S" << std::endl;
        execvp("opt", aaa);
        // If execvp returns, it must have failed
        std::cerr << "Error executing command" << std::endl;
        return 1;
    }
    return 0;
}