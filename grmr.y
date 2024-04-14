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

%left '+' '-'
%left '*' '/' '%'
%nonassoc UMINUS UPLUS

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
            ;


ConditionalStatement:   IF Condition THEN Statement %prec IFX
                        | IF Condition THEN Statement ELSE Statement  
                        | error Condition THEN Statement %prec IFX              {yyerror("Invalid conditional construct"); yyerrok;}
                        | IF Condition error Statement %prec IFX                {yyerror("Invalid conditional construct"); yyerrok;}
                        | error Condition THEN Statement ELSE Statement         {yyerror("Invalid conditional construct"); yyerrok;}
                        | IF Condition error Statement ELSE Statement           {yyerror("Invalid conditional construct"); yyerrok;}
                        | IF Condition THEN Statement error Statement           {yyerror("Invalid conditional construct"); yyerrok;}
                        ;

LoopStatement:   WHILE Condition DO Statement                                               
            //  | error Condition DO Statement                                              {yyerror("Invalid loop construct"); yyerrok;}
                | WHILE Condition error Statement                                           {yyerror("Invalid loop construct"); yyerrok;}
                | FOR IDENTIFIER UPTO Expression DO Statement                               
                | FOR IDENTIFIER DOWNTO Expression DO Statement
          //    | error Expression DO Statement                                             {yyerror("Invalid loop construct"); yyerrok;}                         
                | FOR IDENTIFIER UPTO Expression error Statement                            {yyerror("Invalid loop construct"); yyerrok;}
                | FOR IDENTIFIER DOWNTO Expression error Statement                          {yyerror("Invalid loop construct"); yyerrok;}                              
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
        | error IDENTIFIER '(' GeneralList ')'                          {yyerror("Invalid function call"); yyerrok;}
        | CALL error '(' GeneralList ')'                                {yyerror("Invalid function call"); yyerrok;}
        | CALL IDENTIFIER error GeneralList ')'                         {yyerror("Invalid function call"); yyerrok;}
        | CALL IDENTIFIER '(' GeneralList error                         {yyerror("Invalid function call"); yyerrok;}
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
            | ConstArray error NUMBER               {yyerror("Invalid list"); yyerrok;}
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
                | error Expression                      {yyerror("Invalid operator"); yyerrok;}
                | IDENTIFIER
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