
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from MixedDrinks.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "MixedDrinksVisitor.h"


/**
 * This class provides an empty implementation of MixedDrinksVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  MixedDrinksBaseVisitor : public MixedDrinksVisitor {
public:

  virtual antlrcpp::Any visitProg(MixedDrinksParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMain(MixedDrinksParser::MainContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock(MixedDrinksParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmt(MixedDrinksParser::StmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_stmt(MixedDrinksParser::If_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRepeat_statement(MixedDrinksParser::Repeat_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignment_stmt(MixedDrinksParser::Assignment_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclaration_stmt(MixedDrinksParser::Declaration_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclaration(MixedDrinksParser::DeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable_ID(MixedDrinksParser::Variable_IDContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement_list(MixedDrinksParser::Statement_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrint_statement(MixedDrinksParser::Print_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOutput(MixedDrinksParser::OutputContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifiers(MixedDrinksParser::IdentifiersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrinkExpression(MixedDrinksParser::DrinkExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParens(MixedDrinksParser::ParensContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAddSubExpr(MixedDrinksParser::AddSubExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumberExpression(MixedDrinksParser::NumberExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelExpr(MixedDrinksParser::RelExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMulDivExpr(MixedDrinksParser::MulDivExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInteger_constant(MixedDrinksParser::Integer_constantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCharacter_constant(MixedDrinksParser::Character_constantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrinkNames(MixedDrinksParser::DrinkNamesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeID(MixedDrinksParser::TypeIDContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrink(MixedDrinksParser::DrinkContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMul_div_op(MixedDrinksParser::Mul_div_opContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdd_sub_op(MixedDrinksParser::Add_sub_opContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRel_op(MixedDrinksParser::Rel_opContext *ctx) override {
    return visitChildren(ctx);
  }


};

