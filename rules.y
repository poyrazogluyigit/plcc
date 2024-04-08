// Definitions

// tokens
%token NUMBER IDENTIFIER
%token CONST 
%token VAR
%token ARRAY
%token PROCEDURE
%token FUNCTION
%token CALL 
%token BEGIN END
%token IF THEN ELSE
%token WHILE
%token DO
%token FOR
%token UPTO DOWNTO
%token BREAK
%token RETURN
%token READ WRITE WRITELINE
%token ODD EQ IDK GT LT GEQ LEQ ASGN
%%
// Rules
Program : Block '.' {};    // '>''='   

Block : ConstDecl VarDecl ArrayDecl ProcDecl FuncDef Statement {};

ConstDecl : CONST ConstAssignmentList ';' 
            | 
            ;  

ConstAssignmentList : 
            IDENTIFIER EQ NUMBER
            | ARRAY IDENTIFIER EQ  '[' ConstArray ']'
            | ConstAssignmentList ',' IDENTIFIER EQ NUMBER
            | ConstAssignmentList ',' ARRAY IDENTIFIER EQ '[' ConstArray ']'
            ;

VarDecl:
            VAR IdentifierList ';' |       ;

ArrayDecl: 
            ARRAY IdentifierList ';' |       ;

IdentifierList: 
            IDENTIFIER 
            | IdentifierList ',' IDENTIFIER ;

ProcDecl:
            ProcDecl PROCEDURE IDENTIFIER ';' Block ';' |       ;

FuncDef:
            FUNCTION IDENTIFIER '(' IdentifierList ')' ';' Block ';' |    ;           


Statement : 
            IDENTIFIER ASGN Expression
            | IDENTIFIER ASGN ArrayExpression
            | IDENTIFIER '[' NUMBER ']' ASGN Expression
            | CALL IDENTIFIER
            | BEGIN StatementList END
            | IF Condition THEN Statement ElseStatement
            | WHILE Condition DO Statement
            | FOR IDENTIFIER Quantifier Expression DO Statement
            | ControlStatement
            | IOStatement
            | FuncCall
            |
            ;
            
ElseStatement:
            ELSE Statement |      ;

Quantifier:
            UPTO | DOWNTO ;

FuncCall: 
            IDENTIFIER '(' GeneralList ')' ;
            
IOStatement: 
            READ'(' IDENTIFIER ')'
            | WRITE'(' IDENTIFIER ')'
            | WRITELINE '(' IDENTIFIER ')' ;

ControlStatement:
            BREAK |  RETURN | RETURN Expression ;

StatementList:
            Statement | StatementList ';' Statement ;

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