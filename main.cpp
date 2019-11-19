#include <iostream>
#include <fstream>
 
#include "antlr4-runtime.h"
#include "MixedDrinksLexer.h"
#include "MixedDrinksParser.h"
#include "Pass1Visitor.h"
#include "Pass2Visitor.h"
 
using namespace antlrcpp;
using namespace antlr4;
using namespace std;
 
int main(int argsc, char * argv[])
{
    ifstream ins;
    ins.open(argv[1]);
 
    ANTLRInputStream input(ins);
    MixedDrinksLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
 
 
	MixedDrinksLexer parser(&tokens);
	tree::ParseTree *tree = parser.program();
	
	Pass1Visitor *pass1 = new Pass1Visitor();
	pass1->visit(tree);
	
	ostream& j_file = pass1->get_assembly_file();

    Pass2Visitor *pass2 = new Pass2Visitor(j_file);
    pass2->visit(tree);
 
    return 0;
}
