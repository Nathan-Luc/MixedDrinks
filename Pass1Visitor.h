#ifndef PASS1VISITOR_H_
#define PASS1VISITOR_H_

#include <iostream>

#include "wci/intermediate/SymTabStack.h"
#include "wci/intermediate/SymTabEntry.h"
#include "wci/intermediate/TypeSpec.h"

#include "MixedDrinksBaseVisitor.h"
#include "antlr4-runtime.h"
#include "MixedDrinksVisitor.h"

using namespace wci;
using namespace wci::intermediate;

class Pass1Visitor : public MixedDrinksBaseVisitor
{
private:
    SymTabStack *symtab_stack;
    SymTabEntry *program_id;
    vector<SymTabEntry *> variable_id_list;
    ofstream j_file;

public:
    Pass1Visitor();
    virtual ~Pass1Visitor();

    ostream& get_assembly_file();
	antlrcpp::Any visitProg(MixedDrinksParser::ProgContext *ctx) override;
	antlrcpp::Any visitBlock(MixedDrinksParser::BlockContext *ctx) override;
	antlrcpp::Any visitDeclaration_stmt(MixedDrinksParser::Declaration_stmtContext *ctx) override;
	antlrcpp::Any visitDeclaration(MixedDrinksParser::DeclarationContext *ctx) override;
	antlrcpp::Any visitTypeID(MixedDrinksParser::TypeIDContext *ctx) override;
	antlrcpp::Any visitAddSubExpr(MixedDrinksParser::AddSubExprContext *ctx) override;
	antlrcpp::Any visitMulDivExpr(MixedDrinksParser::MulDivExprContext *ctx) override;
	antlrcpp::Any visitVariable_ID(MixedDrinksParser::Variable_IDContext *ctx) override;
	antlrcpp::Any visitParens(MixedDrinksParser::ParensContext *ctx) override;
	antlrcpp::Any visitDrinkExpression(MixedDrinksParser::DrinkExpressionContext *ctx) override;
	antlrcpp::Any visitNumberExpression(MixedDrinksParser::NumberExpressionContext *ctx) override;
	antlrcpp::Any visitCharacter_constant(MixedDrinksParser::Character_constantContext *ctx) override;
	antlrcpp::Any visitRelExpr(MixedDrinksParser::RelExprContext *ctx) override;
	antlrcpp::Any visitInteger_constant(MixedDrinksParser::Integer_constantContext *ctx) override;
	
	antlrcpp::Any visitFunctionCallExpression(MixedDrinksParser::FunctionCallExpressionContext *context) override;
	antlrcpp::Any visitFunction_ID(MixedDrinksParser::Function_IDContext *context) override;
	antlrcpp::Any visitFunction_define(MixedDrinksParser::Function_defineContext *ctx) override;
	
};

#endif /* PASS1VISITOR_H_ */
