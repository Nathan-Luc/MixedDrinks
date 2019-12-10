grammar MixedDrinks;

@header {
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;
}

prog:   function_list? main block END ; 

main 	: typeID MIXED_DRINKS '(' ((typeID IDENTIFIER) ','?)* ')';

block	: statement_list
		| function_list 
		;

statement_list       : (stmt | functions)+ ;

stmt: 		(assignment_stmt '~')
	|	(declaration_stmt '~')
	|	(if_stmt '~')			
	|	(repeat_statement '~') 		
	|	(print_statement '~')
	|	(return_statement '~')
	;

/* FUNCTIONS */
function_list	:	(functions)* ;
functions : function_call | function_define ;
function_call : function_ID '(' identifiers? ')' '~'? ;
function_define : typeID function_ID '(' ((declaration) ','?)* ')' '{' statement_list '}';
return_statement : RETURN expr ;

/* CONDITIONAL STATEMENT */
if_stmt		: IF '(' expr ')' THEN '{' (statement_list '}'(ELSE '{' statement_list '}' )?) ;

/* LOOP STATEMENT */
repeat_statement     : REPEAT '{' statement_list '}' UNTIL '('expr ')';


/* Assignment  */
assignment_stmt 	: drink '=' expr ;

declaration_stmt	: declaration '=' expr;
declaration			: typeID variable_ID;

variable_ID locals [ TypeSpec *type = nullptr ] : IDENTIFIER ;

print_statement : PRINT '(' output ')' ;
output : expr | drinkNames ;

identifiers : expr (',' expr)* ;

expr locals [ TypeSpec *type = nullptr ]
	 :	function_call			# functionCallExpression
	 |	expr mul_div_op expr	# mulDivExpr
	 |	expr add_sub_op expr	# addSubExpr
	 | 	expr rel_op expr     	# relExpr
	 |	drink					# drinkExpression
	 |	number					# numberExpression
	 | 	'(' expr ')'         	# parens
	 ;

/* CHANGE THIS BELOW!!! */
number locals [ TypeSpec *type = nullptr ]
	: INTEGER 	#integer_constant
	| CHARACTER	#character_constant
	;

/* CHANGE THIS BELOW!!! */
drinkNames locals [ TypeSpec *type = nullptr ] : STRING ;

typeID : IDENTIFIER
	   | CHAR
	   | INT
	   ; 

drink : IDENTIFIER ;
function_ID : IDENTIFIER ;

mul_div_op : MUL_OP | DIV_OP ;
add_sub_op : ADD_OP | SUB_OP ;
rel_op     : EQ_OP | NE_OP | LT_OP | LE_OP | GT_OP | GE_OP ;

MIXED_DRINKS	: 'MIXED_DRINKS' ;
BEGIN		: 'START' ;
END			: 'STOP' ;
REPEAT  	: 'CHUG' ;
UNTIL   	: 'UNTIL' ;
IF			: 'DRUNK' ;
THEN    	: 'DO' ;
ELSE    	: 'SOBER';
INT			: 'SHOTS' ;
CHAR		: 'SPRITS';
PRINT		: 'SPILL' ;
RETURN		: 'RETURN' ;

IDENTIFIER : [a-zA-Z][a-zA-Z0-9]* ;
INTEGER    : [0-9]+ ;
CHARACTER  : '\''[a-zA-Z0-9]'\'' ;
STRING	   : '"' (IDENTIFIER | ' ')*? '"' ;

MUL_OP :   '*' ;
DIV_OP :   '/' ;
ADD_OP :   '+' ;
SUB_OP :   '-' ;

EQ_OP : '=' ;
NE_OP : '<>' ;
LT_OP : '<' ;
LE_OP : '<=' ;
GT_OP : '>' ;
GE_OP : '>=' ;

NEWLINE : '\r'? '\n' -> skip  ;
WS      : [ \t]+ -> skip ; 
