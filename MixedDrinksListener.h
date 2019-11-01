
// Generated from MixedDrinks.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "MixedDrinksParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by MixedDrinksParser.
 */
class  MixedDrinksListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProg(MixedDrinksParser::ProgContext *ctx) = 0;
  virtual void exitProg(MixedDrinksParser::ProgContext *ctx) = 0;

  virtual void enterIfStmt(MixedDrinksParser::IfStmtContext *ctx) = 0;
  virtual void exitIfStmt(MixedDrinksParser::IfStmtContext *ctx) = 0;

  virtual void enterAssignmentStmt(MixedDrinksParser::AssignmentStmtContext *ctx) = 0;
  virtual void exitAssignmentStmt(MixedDrinksParser::AssignmentStmtContext *ctx) = 0;

  virtual void enterRepeatStmt(MixedDrinksParser::RepeatStmtContext *ctx) = 0;
  virtual void exitRepeatStmt(MixedDrinksParser::RepeatStmtContext *ctx) = 0;

  virtual void enterIf_stmt(MixedDrinksParser::If_stmtContext *ctx) = 0;
  virtual void exitIf_stmt(MixedDrinksParser::If_stmtContext *ctx) = 0;

  virtual void enterChug_stmt(MixedDrinksParser::Chug_stmtContext *ctx) = 0;
  virtual void exitChug_stmt(MixedDrinksParser::Chug_stmtContext *ctx) = 0;

  virtual void enterStmt_list(MixedDrinksParser::Stmt_listContext *ctx) = 0;
  virtual void exitStmt_list(MixedDrinksParser::Stmt_listContext *ctx) = 0;

  virtual void enterAssignment_stmt(MixedDrinksParser::Assignment_stmtContext *ctx) = 0;
  virtual void exitAssignment_stmt(MixedDrinksParser::Assignment_stmtContext *ctx) = 0;

  virtual void enterIdentifier(MixedDrinksParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(MixedDrinksParser::IdentifierContext *ctx) = 0;

  virtual void enterParens(MixedDrinksParser::ParensContext *ctx) = 0;
  virtual void exitParens(MixedDrinksParser::ParensContext *ctx) = 0;

  virtual void enterAddSubExpr(MixedDrinksParser::AddSubExprContext *ctx) = 0;
  virtual void exitAddSubExpr(MixedDrinksParser::AddSubExprContext *ctx) = 0;

  virtual void enterInteger(MixedDrinksParser::IntegerContext *ctx) = 0;
  virtual void exitInteger(MixedDrinksParser::IntegerContext *ctx) = 0;

  virtual void enterRelExpr(MixedDrinksParser::RelExprContext *ctx) = 0;
  virtual void exitRelExpr(MixedDrinksParser::RelExprContext *ctx) = 0;

  virtual void enterMulDivExpr(MixedDrinksParser::MulDivExprContext *ctx) = 0;
  virtual void exitMulDivExpr(MixedDrinksParser::MulDivExprContext *ctx) = 0;

  virtual void enterDrink(MixedDrinksParser::DrinkContext *ctx) = 0;
  virtual void exitDrink(MixedDrinksParser::DrinkContext *ctx) = 0;

  virtual void enterShots(MixedDrinksParser::ShotsContext *ctx) = 0;
  virtual void exitShots(MixedDrinksParser::ShotsContext *ctx) = 0;

  virtual void enterMul_div_op(MixedDrinksParser::Mul_div_opContext *ctx) = 0;
  virtual void exitMul_div_op(MixedDrinksParser::Mul_div_opContext *ctx) = 0;

  virtual void enterAdd_sub_op(MixedDrinksParser::Add_sub_opContext *ctx) = 0;
  virtual void exitAdd_sub_op(MixedDrinksParser::Add_sub_opContext *ctx) = 0;

  virtual void enterRel_op(MixedDrinksParser::Rel_opContext *ctx) = 0;
  virtual void exitRel_op(MixedDrinksParser::Rel_opContext *ctx) = 0;


};

