%{
#include <iostream>
#include "ExprAST.hpp"
#include "CondAST.hpp"
#include "StmtAST.hpp"

extern FILE *yyin;
void yyerror(char *s);
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
}

// tokens
%token <string> NUMBER IDENTIFIER
%token <token> CONST VAR ARRAY PROCEDURE FUNCTION CALL BEGN END
%token <token> IF THEN ELSE WHILE DO FOR UPTO DOWNTO BREAK RETURN
%token <token> READ WRITE WRITELINE
%token <token> ODD EQ NE GT LT GEQ LEQ ASGN
%token <token> PLUS MINUS MUL DIV MOD

%type <cond> Condition
%type <expr> Expression GeneralList FuncCall
%type <stmt> Statement StatementList ConditionalStatement LoopStatement ControlStatement IOStatement



%nonassoc IFX
%nonassoc ELSE

%left PLUS MINUS
%left MUL DIV MOD
%nonassoc UMINUS UPLUS

%start Program

%%
// Rules
Program : Block '.' ;    // '>''='   

Block : ConstDecl VarDecl ArrayDecl ProcDecl FuncDecl Statement ;

ConstDecl : CONST ConstAssignmentList ';' 
            |
            | error ';'                          {yyerror("Invalid const declaration"); yyerrok;}
            ;  

ConstAssignmentList : 
                        IDENTIFIER EQ NUMBER
                        | ARRAY IDENTIFIER EQ  '[' ConstArray ']'
                        | ConstAssignmentList ',' IDENTIFIER EQ NUMBER
                        | ConstAssignmentList ',' ARRAY IDENTIFIER EQ '[' ConstArray ']'
                        ;

VarDecl:
        VAR IdentifierList ';' 
        |
        | error ';'                             {yyerror("Invalid variable declaration"); yyerrok;}                         
;

ArrayDecl: 
            ARRAY IdentifierList ';' 
            | error ';'                             {yyerror("Invalid array declaration"); yyerrok;} 
            |
;

IdentifierList: 
            IDENTIFIER 
            | IdentifierList ',' IDENTIFIER
            |
;

ProcDecl:
            ProcDecl PROCEDURE IDENTIFIER ';' Block ';' 
            | error ';'                             {yyerror("Invalid procedure declaration"); yyerrok;} 
            |
;

FuncDecl:
            FUNCTION IDENTIFIER '(' IdentifierList ')' ';' Block ';' 
            | error ';'                             {yyerror("Invalid function declaration"); yyerrok;} 
            |    
;    

ConstArray: NUMBER
            | ConstArray ',' NUMBER
            | ConstArray error NUMBER               {yyerror("Invalid list construct"); yyerrok;}
            ;


Statement : 
            IDENTIFIER ASGN Expression 
            | IDENTIFIER ASGN '[' GeneralList ']'
            | IDENTIFIER '[' NUMBER ']' ASGN Expression
            | CALL IDENTIFIER
            | FuncCall
            | BEGN StatementList END
            | ConditionalStatement
            | LoopStatement
            | ControlStatement
            | IOStatement
            |            
            | error END             {yyerror("Invalid statement"); yyerrok;}
            | error ';'             {yyerror("Invalid statement"); yyerrok;}
            | error                 {yyerror("Invalid statement");}

            ;

// statement FOLLOW = [IDENTIFIER CALL BEGIN IF WHILE FOR BREAK RETURN WRITELINE READ READLINE %empty '.' ';' END ELSE]


ConditionalStatement:   IF Condition THEN Statement %prec IFX
                        | IF Condition THEN Statement ELSE Statement
                        ;

LoopStatement:   WHILE Condition DO Statement                                               
                | FOR IDENTIFIER UPTO Expression DO Statement                               
                | FOR IDENTIFIER DOWNTO Expression DO Statement 
                | WHILE error {yyerror("Invalid while construct"); yyclearin;} Statement 
                | FOR error {yyerror("Invalid for construct"); yyclearin;} Statement                                                        
                ;
            
IOStatement: 
            READ'(' IDENTIFIER ')'
            | WRITE'(' IDENTIFIER ')'
            | WRITELINE '(' IDENTIFIER ')'
            | READ '(' error ')' {yyerror("Invalid read() call"); yyerrok;}
            | WRITE '(' error ')' {yyerror("Invalid write() call"); yyerrok;}
            | WRITELINE '(' error ')' {yyerror("Invalid writeline() call"); yyerrok;}
            ;


FuncCall:   
        CALL IDENTIFIER '(' GeneralList ')' 
        ;



ControlStatement:
            BREAK | RETURN | RETURN Expression ;

StatementList:
            Statement 
            | StatementList ';' Statement 
            | StatementList error {yyerror("Missing semicolon"); yyerrok;} Statement
            ;

Condition :
            ODD Expression 
            | Expression EQ Expression
            | Expression NE Expression
            | Expression GT Expression
            | Expression LT Expression
            | Expression LEQ Expression
            | Expression GEQ Expression
            | Expression ASGN Expression
            ;


GeneralList:    NUMBER
                | IDENTIFIER
                | GeneralList ',' NUMBER
                | GeneralList ',' IDENTIFIER
                | GeneralList error NUMBER              {yyerror("Invalid list construct"); yyerrok;}
                | GeneralList error IDENTIFIER          {yyerror("Invalid list construct"); yyerrok;}
                |
                ;



Expression  :   Expression PLUS Expression
                | Expression MINUS Expression
                | Expression MUL Expression
                | Expression DIV Expression
                | Expression MOD Expression
                | PLUS Expression    %prec UPLUS
                | MINUS Expression    %prec UMINUS
                | IDENTIFIER
                | IDENTIFIER '[' NUMBER ']'
                | NUMBER
                | '(' Expression ')'
                | FuncCall
                ;

%%
// User Subroutines

void yyerror(string s) {
    std::cerr << "line " << yylineno << ": " << s << std::endl;
}


int main(int argc, char ** argv){

    yyin = fopen(argv[1], "r");
    yyparse();
    fclose(yyin);

}