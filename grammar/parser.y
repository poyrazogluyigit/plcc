%{
#include "header.hpp"
extern ProgramAST *program;
extern FILE *yyin;
void yyerror(std::string s);
extern int yylineno;
extern int yylex();
// int yydebug = 1;
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
Program : Block '.' {program = new ProgramAST($1)};    // '>''='   

Block : ConstDecl VarDecl ArrayDecl ProcDecl FuncDecl Statement { $$ = new BlockAST($1, $2, $3, $4, $5, $6); }
        | error '.' {yyerror("Invalid block construct"); yyerrok;}
        ;

ConstDecl : CONST ConstAssignmentList ';'       { $$ = $2; }
            |                                   { std::vector<ConstVarAST*> vars; std::vector<ConstArrayAST*> arrays; $$ = new ConstDeclAST(vars, arrays);}
            | error ';'                          {yyerror("Invalid const declaration"); yyerrok;}
            ;  

ConstAssignmentList : 
                        IDENTIFIER EQ NUMBER  {
                            std::vector<ConstVarAST*> vars; 
                            std::vector<ConstArrayAST*> arrays;
                            vars.push_back(new ConstVarAST(*$1, *$3));
                            $$ = new ConstDeclAST(vars, arrays);
                            }
                        | ARRAY IDENTIFIER EQ  '[' ConstArray ']' {
                            std::vector<ConstVarAST*> vars; 
                            std::vector<ConstArrayAST*> arrays;
                            arrays.push_back(new ConstArrayAST(*$2, $5));
                            $$ = new ConstDeclAST(vars, arrays);
                        }
                        | ConstAssignmentList ',' IDENTIFIER EQ NUMBER {
                            $1->addVar(new ConstVarAST(*$3, *$5));
                        }
                        | ConstAssignmentList ',' ARRAY IDENTIFIER EQ '[' ConstArray ']' {
                            $1->addArray(new ConstArrayAST(*$4, $7));
                        }
                        ;

VarDecl:
        VAR IdentifierList ';'                  { $$ = new VarDeclAST($2); }
        |                                       { $$ = new VarDeclAST(nullptr); }
        | error ';'                             {yyerror("Invalid variable declaration"); yyerrok;}                         
;

ArrayDecl: 
            ARRAY IdentifierList ';'                { $$ = new ArrayDeclAST($2); }
            | error ';'                             {yyerror("Invalid array declaration"); yyerrok;} 
            |                                       { $$ = new ArrayDeclAST(nullptr); }
;

IdentifierList: 
            IDENTIFIER                              { std::vector<std::string> ids; $$ = new IdentListAST(ids); ids.push_back(*$1); } 
            | IdentifierList ',' IDENTIFIER         { $1->addToList(*$3); }
            |                                       { std::vector<std::string> ids; $$ = new IdentListAST(ids); }
;

ProcDecl:
            ProcDecl PROCEDURE IDENTIFIER ';' Block ';'                                     { $$ = new ProcDeclAST(*$3, $5);}
            | error ';'                             {yyerror("Invalid procedure declaration"); yyerrok;} 
            |                                                                               { std::string x; $$ = new ProcDeclAST(x, nullptr); }
;

FuncDecl:
            FUNCTION IDENTIFIER '(' IdentifierList ')' ';' Block ';'                        { $$ = new FuncDeclAST(*$2, $4, $7);}
            | error ';'                             {yyerror("Invalid function declaration"); yyerrok;} 
            |                                                                               { std::string x; $$ = new FuncDeclAST(x, nullptr, nullptr); }    
;    

ConstArray: NUMBER                                  { std::vector<std::string> nums; $$ = new ConstArrayValuesAST(nums); nums.push_back(*$1); }
            | ConstArray ',' NUMBER                 { $1->addToList(*$3); }
            | ConstArray error NUMBER               {yyerror("Invalid list construct"); yyerrok;}
            ;


Statement : 
            IDENTIFIER ASGN Expression                                  { $$ = new SingleAssignStmtAST(*$1, $3); }
            | IDENTIFIER ASGN '[' GeneralList ']'                       { $$ = new ArrayAssignStmtAST(*$1, $4); }                       
            | IDENTIFIER '[' NUMBER ']' ASGN Expression                 { $$ = new IndexedAssignStmtAST(*$1, *$3, $6); }
            | CALL IDENTIFIER                                           { $$ = new ProcCallAST(*$2); }
            | FuncCall                                                  { $$ = new FuncCallStmtAST($1);}
            | BEGN StatementList END                                    { $$ = $2; }
            | ConditionalStatement
            | LoopStatement
            | ControlStatement
            | IOStatement
            |                                                           { std::vector<StmtAST*> stmts; $$ = new StmtListAST(stmts);}
            | error END             {yyerror("Invalid statement"); yyerrok;}
            | error ';'             {yyerror("Invalid statement"); yyerrok;}
            | error                 {yyerror("Invalid statement");}

            ;

// statement FOLLOW = [IDENTIFIER CALL BEGIN IF WHILE FOR BREAK RETURN WRITELINE READ READLINE %empty '.' ';' END ELSE]


ConditionalStatement:   IF Condition THEN Statement %prec IFX                       { $$ = new IfThenAST($2, $4); }
                        | IF Condition THEN Statement ELSE Statement                { $$ = new IfThenElseAST($2, $4, $6); }
                        ;

LoopStatement:   WHILE Condition DO Statement                                                   { $$ = new WhileStmtAST($2, $4); }                                              
                | FOR IDENTIFIER UPTO Expression DO Statement                                   { $$ = new ForStmtAST(*$2, $4, 0, $6); }                               
                | FOR IDENTIFIER DOWNTO Expression DO Statement                                 { $$ = new ForStmtAST(*$2, $4, 1, $6); }
                | WHILE error {yyerror("Invalid while construct"); yyclearin;} Statement        { $$ = new WhileStmtAST(0, $4);}    
                | FOR error {yyerror("Invalid for construct"); yyclearin;} Statement            { $$ = new ForStmtAST("", 0, 0, $4);}                                        
                ;  
            
IOStatement: 
            READ '(' Expression ')'                                                         { $$ = new IOStmtAST(0, $3); }
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
            Statement                                                                   { std::vector<StmtAST*> stmts; $$ = new StmtListAST(stmts); } 
            | StatementList ';' Statement                                               { $1->addToList($3); }
            | StatementList error {yyerror("Missing semicolon"); yyerrok;} Statement
            ;

Condition :
            ODD Expression                              { $$ = new OddCondAST($2); } 
            | Expression EQ Expression                  { $$ = new BinaryCondAST(0, $1, $3); }
            | Expression NE Expression                  { $$ = new BinaryCondAST(1, $1, $3); }
            | Expression GT Expression                  { $$ = new BinaryCondAST(2, $1, $3); }
            | Expression LT Expression                  { $$ = new BinaryCondAST(3, $1, $3); }
            | Expression LEQ Expression                 { $$ = new BinaryCondAST(4, $1, $3); }
            | Expression GEQ Expression                 { $$ = new BinaryCondAST(5, $1, $3); }
            ;


GeneralList:    NUMBER                                  { std::vector<ExprAST*> exprs; exprs.push_back(new NumberExprAST(*$1)); $$ = new ListExprAST(exprs);}                        
                | IDENTIFIER                            { std::vector<ExprAST*> exprs; exprs.push_back(new VariableExprAST(*$1)); $$ = new ListExprAST(exprs);}
                | GeneralList ',' NUMBER                { $1->addToList(new NumberExprAST(*$3)); }
                | GeneralList ',' IDENTIFIER            { $1->addToList(new VariableExprAST(*$3)); }
                | GeneralList error NUMBER              {yyerror("Invalid list construct"); yyerrok;}
                | GeneralList error IDENTIFIER          {yyerror("Invalid list construct"); yyerrok;}
                |                                       { std::vector<ExprAST*> exprs; $$ = new ListExprAST(exprs); }
                ;



Expression  :   Expression PLUS Expression                  { $$ = new BinaryExprAST('+', $1, $3); }
                | Expression MINUS Expression               { $$ = new BinaryExprAST('-', $1, $3); }
                | Expression MUL Expression                 { $$ = new BinaryExprAST('*', $1, $3); }
                | Expression DIV Expression                 { $$ = new BinaryExprAST('/', $1, $3); }
                | Expression MOD Expression                 { $$ = new BinaryExprAST('%', $1, $3); }
                | PLUS Expression    %prec UPLUS            { $$ = new UnaryExprAST('+', $2); }
                | MINUS Expression    %prec UMINUS          { $$ = new UnaryExprAST('-', $2); }
                | IDENTIFIER                                { $$ = new VariableExprAST(*$1); }
                | IDENTIFIER '[' NUMBER ']'                 { $$ = new ArrayVarExprAST(*$1, *$3); }
                | NUMBER                                    { $$ = new NumberExprAST(*$1)}
                | '(' Expression ')'                        { $$ = $2; }
                | FuncCall                                  
                ;

%%
// User Subroutines

void yyerror(std::string s) {
    std::cerr << "line " << yylineno << ": " << s << std::endl;
}