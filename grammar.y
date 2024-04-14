%{
#include <stdio.h>
void yyerror(char *s);
extern FILE * yyin;
extern int yylineno;
// int yydebug = 1;
%}

// tokens
%token NUMBER IDENTIFIER
%token CONST 
%token VAR
%token ARRAY
%token PROCEDURE
%token FUNCTION
%token CALL 
%token BEGN END
%token IF THEN ELSE
%token WHILE
%token DO
%token FOR
%token UPTO DOWNTO
%token BREAK
%token RETURN
%token READ WRITE WRITELINE
%token ODD EQ IDK GT LT GEQ LEQ ASGN

%nonassoc IFX
%nonassoc ELSE

%%
// Rules
Program : Block '.' ;    // '>''='   

Block : ConstDecl VarDecl ArrayDecl ProcDecl FuncDef Statement ;

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

FuncDef:
            FUNCTION IDENTIFIER '(' IdentifierList ')' ';' Block ';' 
            | error ';'                             {yyerror("Invalid function declaration"); yyerrok;} 
            |    
;           


Statement : 
            IDENTIFIER ASGN Expression  
            | IDENTIFIER ASGN ArrayExpression
            | IDENTIFIER '[' NUMBER ']' ASGN Expression
            | CALL IDENTIFIER
            | BEGN StatementList END
            | IF Condition THEN Statement %prec IFX
            | IF Condition THEN Statement ELSE Statement
            | WHILE Condition DO Statement
            | FOR IDENTIFIER Quantifier Expression DO Statement
            | ControlStatement
            | IOStatement
            | FuncCall
            |
            | error                                     {yyerror("Invalid statement");}
            ;


Quantifier:
            UPTO | DOWNTO ;

FuncCall: 
            IDENTIFIER '(' GeneralList ')' ;
            
IOStatement: 
            READ'(' IDENTIFIER ')'
            | WRITE'(' IDENTIFIER ')'
            | WRITELINE '(' IDENTIFIER ')'
            | READ '(' error ')' {yyerror("Invalid read() call"); yyerrok;}
            | WRITE '(' error ')' {yyerror("Invalid write() call"); yyerrok;}
            | WRITELINE '(' error ')' {yyerror("Invalid writeline() call"); yyerrok;}
            ;

ControlStatement:
            BREAK |  RETURN | RETURN Expression ;

StatementList:
            Statement 
            | StatementList ';' Statement 
            ;

Condition :
            ODD Expression | Expression Relation Expression ;

Relation:
            EQ | IDK | GT | LT | LEQ | GEQ | ASGN ;

ArrayExpression: 
            '[' GeneralList ']';

ConstArray:
            NUMBER ',' NumberRemaining ;

NumberRemaining:
            NUMBER ',' NumberRemaining |  ;

GeneralList:
            NUMBER ',' Remaining
            | IDENTIFIER ',' Remaining ;

Remaining:
            NUMBER ',' Remaining
            | IDENTIFIER ',' Remaining 
            | ;

Expression :    Term
                | AddSubOperator Term
                | Term AddSubOperator Term
                ;

AddSubOperator :    '+' 
                    | '-'
                    ;

Term :  Factor
        | Term MulDivModOperator Factor
        ;

MulDivModOperator :     '*' 
                        | '/'
                        | '%'
                        ;

Factor :    IDENTIFIER
            | IDENTIFIER '[' NUMBER ']'
            | NUMBER
            | '(' Expression ')'
            | FuncCall
            ;
%%
// User Subroutines

void yyerror(char *s) {
    fprintf(stderr, "line %d: %s\n", yylineno, s);
}


int main(char * argc, char ** argv){

    yyin = fopen(argv[1], "r");
    yyparse();
    fclose(yyin);

}