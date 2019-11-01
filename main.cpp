#include <iostream>
#include <fstream>
 
#include "antlr4-runtime.h"
#include "MixedDrinksLexer.h"
#include "MixedDrinksParser.h"
 
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
 
    cout << "Tokens:" << endl;
    tokens.fill();
    for (Token *token : tokens.getTokens())
    {
        std::cout << token->toString() << std::endl;
    }
 
    MixedDrinksParser parser(&tokens);
    tree::ParseTree *tree = parser.prog();
 
    cout << endl << "Parse tree (Lisp format):" << endl;
    std::cout << tree->toStringTree(&parser) << endl;
 
    return 0;
}
