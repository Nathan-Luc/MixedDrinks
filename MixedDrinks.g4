grammar MixedDrinks;

@header {
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;
}

prog:   stmt+ ; 

stmt: 		if_stmt			#ifStmt
	|	assignment_stmt 	#assignmentStmt
	| 	chug_stmt    		#repeatStmt
	|	declaration_stmt	#declareStmt
	;

if_stmt         	: DRUNK '(' expr ')' THEN stmt (SOBER stmt )? ;
assignment_stmt 	: drink '=' expr ;
declaration_stmt	: declaration '=' expr;
declaration	:typeID drink;
chug_stmt     		: CHUG expr UNTIL expr;

stmt_list       : stmt ( ';' stmt )*;


expr locals [ TypeSpec *type = nullptr ]
	:		expr mul_div_op expr	# mulDivExpr
	|	expr add_sub_op expr	# addSubExpr
	| 	expr rel_op expr     	# relExpr
	|	drink				# identifier
	|	shots				# integer
	| 	'(' expr ')'         	# parens
	;

typeID :IDENTIFIER
	   | BEER
	   | SPRITS
	   ; 

drink : IDENTIFIER ;  
shots : INTEGER ;

mul_div_op : MUL_OP | DIV_OP ;
add_sub_op : ADD_OP | SUB_OP ;
rel_op     : EQ_OP | NE_OP | LT_OP | LE_OP | GT_OP | GE_OP ;

CHUG    : 'CHUG' ;
UNTIL   : 'UNTIL' ;
DRUNK   : 'DRUNK' ;
THEN    : 'THEN' ;
SOBER    : 'SOBER';
BEER	:  'BEER' ;
SPRITS	: 'SPRITS';

IDENTIFIER : [a-zA-Z][a-zA-Z0-9]* ;
INTEGER    : [0-9]+ ;



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
