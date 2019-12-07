#ifndef PASS2VISITOR_H_
#define PASS2VISITOR_H_

#include <iostream>
#include <string>

#include "wci/intermediate/SymTabStack.h"
#include "wci/intermediate/SymTabEntry.h"
#include "wci/intermediate/TypeSpec.h"

#include "MixedDrinksBaseVisitor.h"
#include "antlr4-runtime.h"
#include "MixedDrinksVisitor.h"

using namespace wci;
using namespace wci::intermediate;

class Pass2Visitor : public MixedDrinksBaseVisitor
{
private:
	string program_name;
	ostream& j_file;

public:
	Pass2Visitor(ostream& j_file);
    virtual ~Pass2Visitor();

    antlrcpp::Any visitProg(MixedDrinksParser::ProgContext *ctx) override;
    antlrcpp::Any visitBlock(MixedDrinksParser::BlockContext *ctx) override;
    antlrcpp::Any visitStmt(MixedDrinksParser::StmtContext *ctx) override;
    antlrcpp::Any visitDeclaration_stmt(MixedDrinksParser::Declaration_stmtContext *ctx) override;
    antlrcpp::Any visitAssignment_stmt(MixedDrinksParser::Assignment_stmtContext *ctx) override;
    antlrcpp::Any visitAddSubExpr(MixedDrinksParser::AddSubExprContext *ctx) override;
    antlrcpp::Any visitMulDivExpr(MixedDrinksParser::MulDivExprContext *ctx) override;
    antlrcpp::Any visitDrinkExpression(MixedDrinksParser::DrinkExpressionContext *ctx) override;
    antlrcpp::Any visitInteger_constant(MixedDrinksParser::Integer_constantContext *ctx) override;
    antlrcpp::Any visitCharacter_constant(MixedDrinksParser::Character_constantContext *ctx) override;

    antlrcpp::Any visitPrint_statement(MixedDrinksParser::Print_statementContext *ctx) override;
    antlrcpp::Any visitDrinkNames(MixedDrinksParser::DrinkNamesContext *ctx) override;
    antlrcpp::Any visitRepeat_statement(MixedDrinksParser::Repeat_statementContext *ctx) override;
    antlrcpp::Any visitIf_stmt(MixedDrinksParser::If_stmtContext *ctx) override;
    antlrcpp::Any visitRelExpr(MixedDrinksParser::RelExprContext *ctx) override;
	
	antlrcpp::Any visitFunction_define(MixedDrinksParser::Function_defineContext *context) override;
	antlrcpp::Any visitFunction_call(MixedDrinksParser::Function_callContext *context) override;
	antlrcpp::Any visitReturn_statement(MixedDrinksParser::Return_statementContext *context) override;
};
#endif /* PASS2VISITOR_H_ */
