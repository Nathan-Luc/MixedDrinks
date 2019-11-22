
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from MixedDrinks.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "MixedDrinksParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by MixedDrinksParser.
 */
class  MixedDrinksVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by MixedDrinksParser.
   */
    virtual antlrcpp::Any visitProg(MixedDrinksParser::ProgContext *context) = 0;

    virtual antlrcpp::Any visitMain(MixedDrinksParser::MainContext *context) = 0;

    virtual antlrcpp::Any visitBlock(MixedDrinksParser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitStmt(MixedDrinksParser::StmtContext *context) = 0;

    virtual antlrcpp::Any visitIf_stmt(MixedDrinksParser::If_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAssignment_stmt(MixedDrinksParser::Assignment_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration_stmt(MixedDrinksParser::Declaration_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration(MixedDrinksParser::DeclarationContext *context) = 0;

    virtual antlrcpp::Any visitVariable_ID(MixedDrinksParser::Variable_IDContext *context) = 0;

    virtual antlrcpp::Any visitRepeat_statement(MixedDrinksParser::Repeat_statementContext *context) = 0;

    virtual antlrcpp::Any visitStatement_list(MixedDrinksParser::Statement_listContext *context) = 0;

    virtual antlrcpp::Any visitPrint_statement(MixedDrinksParser::Print_statementContext *context) = 0;

    virtual antlrcpp::Any visitOutput(MixedDrinksParser::OutputContext *context) = 0;

    virtual antlrcpp::Any visitIdentifiers(MixedDrinksParser::IdentifiersContext *context) = 0;

    virtual antlrcpp::Any visitDrinkExpression(MixedDrinksParser::DrinkExpressionContext *context) = 0;

    virtual antlrcpp::Any visitParens(MixedDrinksParser::ParensContext *context) = 0;

    virtual antlrcpp::Any visitAddSubExpr(MixedDrinksParser::AddSubExprContext *context) = 0;

    virtual antlrcpp::Any visitNumberExpression(MixedDrinksParser::NumberExpressionContext *context) = 0;

    virtual antlrcpp::Any visitRelExpr(MixedDrinksParser::RelExprContext *context) = 0;

    virtual antlrcpp::Any visitMulDivExpr(MixedDrinksParser::MulDivExprContext *context) = 0;

    virtual antlrcpp::Any visitInteger_constant(MixedDrinksParser::Integer_constantContext *context) = 0;

    virtual antlrcpp::Any visitCharacter_constant(MixedDrinksParser::Character_constantContext *context) = 0;

    virtual antlrcpp::Any visitDrinkNames(MixedDrinksParser::DrinkNamesContext *context) = 0;

    virtual antlrcpp::Any visitTypeID(MixedDrinksParser::TypeIDContext *context) = 0;

    virtual antlrcpp::Any visitDrink(MixedDrinksParser::DrinkContext *context) = 0;

    virtual antlrcpp::Any visitMul_div_op(MixedDrinksParser::Mul_div_opContext *context) = 0;

    virtual antlrcpp::Any visitAdd_sub_op(MixedDrinksParser::Add_sub_opContext *context) = 0;

    virtual antlrcpp::Any visitRel_op(MixedDrinksParser::Rel_opContext *context) = 0;


};

