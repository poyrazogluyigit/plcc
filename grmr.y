%{
#include "defs.h"

extern std::map<std::string, int> symbolTable;
void yyerror(char* v);
extern FILE * yyin;
extern int yylineno;
extern int yylex();
int error = 0;
// int yydebug = 1;
%}

%union {
        char* dval;
}

%type <dval> Expression GeneralList Condition ConstAssignmentList 
%type <dval> StatementList


// tokens
%token <dval> NUMBER IDENTIFIER
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
                        IDENTIFIER EQ NUMBER                                    {std::cout << ($1 == NULL) << std::endl;} // {constAssign($1, $3);}                                   
                        | ARRAY IDENTIFIER EQ  '[' ConstArray ']'                               
                        | ConstAssignmentList ',' IDENTIFIER EQ NUMBER          {constAssign($3, $5);}                        
                        | ConstAssignmentList ',' ARRAY IDENTIFIER EQ '[' ConstArray ']'        
                        ;

VarDecl:
        VAR IdentifierList ';' 
        |
        | error ';'                             {yyerror("Invalid variable declaration"); yyerrok;}                         
;

ArrayDecl: 
            ARRAY '{' NUMBER '}' IdentifierList ';' ArrayDecl
            | error ';'                             {yyerror("Invalid array declaration"); yyerrok;} 
            |
;

IdentifierList: 
            IDENTIFIER                                      // {setSymbol(std::string($1), scope);}   declare()
            | IdentifierList ',' IDENTIFIER                 // {setSymbol(std::string($3), scope);}
            |
;

ProcDecl:
            ProcDecl  PROCEDURE IDENTIFIER ';' Block ';' 
            | error ';'                  {yyerror("Invalid procedure declaration"); yyerrok;} 
            |
;

FuncDecl:
            FUNCTION IDENTIFIER '(' IdentifierList ')' ';' Block ';' 
            | error ';'                  {yyerror("Invalid function declaration"); yyerrok;} 
            |    
;           


Statement : 
            IDENTIFIER ASGN Expression                  {assignment($1, $3);}
//            | IDENTIFIER ASGN  '[' GeneralList ']'
            | IDENTIFIER '[' Expression ']' ASGN Expression
            | CALL IDENTIFIER
            | FuncCall
            | BEGN StatementList END
            | ConditionalStatement              // not done
            | LoopStatement             // not done
            | ControlStatement          // not done
            | IOStatement               // done
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
            READ'(' Expression ')'                              {read($3);}
            | WRITE'(' Expression ')'                           {write($3);}
            | WRITELINE '(' Expression ')'                      {writeline($3);}
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
            ODD Expression                         {$$ = odd(string($2));}
            | Expression EQ Expression             {$$ = condition(string("eq"), string($1), string($3));}
            | Expression IDK Expression            {$$ = condition(string("ne"), string($1), string($3));}
            | Expression GT Expression             {$$ = condition(string("sgt"), string($1), string($3));}
            | Expression LT Expression             {$$ = condition(string("slt"), string($1), string($3));}
            | Expression LEQ Expression            {$$ = condition(string("sle"), string($1), string($3));}
            | Expression GEQ Expression            {$$ = condition(string("sge"), string($1), string($3));}
            ;


ConstArray: NUMBER
            | ConstArray ',' NUMBER
            | ConstArray error NUMBER               {yyerror("Invalid list construct"); yyerrok;}
            ;


GeneralList:    NUMBER
                | IDENTIFIER                            {$$ = loadvariable(string($1));}
                | GeneralList ',' NUMBER
                | GeneralList ',' IDENTIFIER
                | GeneralList error NUMBER              {yyerror("Invalid list construct"); yyerrok;}
                | GeneralList error IDENTIFIER          {yyerror("Invalid list construct"); yyerrok;}
                |
                ;



Expression  :   Expression '+' Expression                       {$$ = operation(string("add"), string($1), string($3));}
                | Expression '-' Expression                     {$$ = operation(string("sub"),string($1),string($3)) ;}
                | Expression '*' Expression                     {$$ = operation(string("mul"),string($1),string($3)) ;}
                | Expression '/' Expression                     {$$ = operation(string("sdiv"),string($1),string($3)) ;}
                | Expression '%' Expression                     {$$ = operation(string("srem"), string($1), string($3));}
                | '+' Expression    %prec UPLUS                 { $$ = $2; }
                | '-' Expression    %prec UMINUS                { $$ = operation(string("sub"),string("0"),string($2)); }
                | IDENTIFIER                                    {$$ = loadvariable(string($1));}
                | IDENTIFIER '[' Expression ']'                
                | NUMBER                                        { $$ = $1 ; }
                | '(' Expression ')'                            { $$ = $2 ; }
                | FuncCall
                ;

%%
