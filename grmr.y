%{
#include <stdio.h>
void yyerror(char *s);
extern FILE * yyin;
extern int yylineno;
extern int yylex();
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

%left '+' '-'
%left '*' '/' '%'
%nonassoc UMINUS UPLUS

%%
// Rules
Program : TopBlock '.' ;    // '>''='   

TopBlock : ConstDecl VarDecl ArrayDecl ProcDecl FuncDecl Statement ;

Block : ConstDecl VarDecl ArrayDecl Statement ;


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


Statement : 
            IDENTIFIER ASGN Expression 
            | IDENTIFIER ASGN '[' GeneralList ']'
            | IDENTIFIER '[' Expression ']' ASGN Expression
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
            | Expression IDK Expression
            | Expression GT Expression
            | Expression LT Expression
            | Expression LEQ Expression
            | Expression GEQ Expression
            | Expression ASGN Expression
            ;


ConstArray: NUMBER
            | ConstArray ',' NUMBER
            | ConstArray error NUMBER               {yyerror("Invalid list construct"); yyerrok;}
            ;


GeneralList:    NUMBER
                | IDENTIFIER
                | GeneralList ',' NUMBER
                | GeneralList ',' IDENTIFIER
                | GeneralList error NUMBER              {yyerror("Invalid list construct"); yyerrok;}
                | GeneralList error IDENTIFIER          {yyerror("Invalid list construct"); yyerrok;}
                |
                ;



Expression  :   Expression '+' Expression
                | Expression '-' Expression
                | Expression '*' Expression
                | Expression '/' Expression
                | Expression '%' Expression
                | '+' Expression    %prec UPLUS
                | '-' Expression    %prec UMINUS
                | IDENTIFIER
                | IDENTIFIER '[' Expression ']'
                | NUMBER
                | '(' Expression ')'
                | FuncCall
                ;

%%
// User Subroutines

void yyerror(char *s) {
    fprintf(stderr, "line %d: %s\n", yylineno, s);
}


int main(int argc, char ** argv){

    yyin = fopen(argv[1], "r");
    yyparse();
    fclose(yyin);

}