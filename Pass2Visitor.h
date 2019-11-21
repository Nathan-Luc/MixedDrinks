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
	antlrcpp::Any visitAssignment_stmt(MixedDrinksParser::Assignment_stmtContext *ctx) override;
	antlrcpp::Any visitRepeatStmt(MixedDrinksParser::RepeatStmtContext *ctx) override;
	antlrcpp::Any visitDeclaration_stmt(MixedDrinksParser::Declaration_stmtContext *ctx) override;
	antlrcpp::Any visitStmt_list(MixedDrinksParser::Stmt_listContext *ctx) override;
	antlrcpp::Any visitIdentifier(MixedDrinksParser::IdentifierContext *ctx) override;
	antlrcpp::Any visitParens(MixedDrinksParser::ParensContext *ctx) override;
	antlrcpp::Any visitAddSubExpr(MixedDrinksParser::AddSubExprContext *ctx) override;
	antlrcpp::Any visitInteger(MixedDrinksParser::IntegerContext *ctx) override;
	antlrcpp::Any visitRelExpr(MixedDrinksParser::RelExprContext *ctx) override;
	antlrcpp::Any visitMulDivExpr(MixedDrinksParser::MulDivExprContext *ctx) override;
	antlrcpp::Any visitTypeID(MixedDrinksParser::TypeIDContext *ctx) override;
	antlrcpp::Any visitMul_div_op(MixedDrinksParser::Mul_div_opContext *ctx) override;
	antlrcpp::Any visitAdd_sub_op(MixedDrinksParser::Add_sub_opContext *ctx) override;
	antlrcpp::Any visitRel_op(MixedDrinksParser::Rel_opContext *ctx) override;
	
	antlrcpp::Any visitIf_stmt(MixedDrinksParser::If_stmtContext *ctx) override;
	antlrcpp::Any visitChug_stmt(MixedDrinksParser::Chug_stmtContext *ctx) override;
	antlrcpp::Any visitDrink(MixedDrinksParser::DrinkContext *ctx) override;
	antlrcpp::Any visitShots(MixedDrinksParser::ShotsContext *ctx) override;
};
#endif /* PASS2VISITOR_H_ */
