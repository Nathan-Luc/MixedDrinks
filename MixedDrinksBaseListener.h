
// Generated from MixedDrinks.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "MixedDrinksListener.h"


/**
 * This class provides an empty implementation of MixedDrinksListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  MixedDrinksBaseListener : public MixedDrinksListener {
public:

  virtual void enterProg(MixedDrinksParser::ProgContext * /*ctx*/) override { }
  virtual void exitProg(MixedDrinksParser::ProgContext * /*ctx*/) override { }

  virtual void enterIfStmt(MixedDrinksParser::IfStmtContext * /*ctx*/) override { }
  virtual void exitIfStmt(MixedDrinksParser::IfStmtContext * /*ctx*/) override { }

  virtual void enterAssignmentStmt(MixedDrinksParser::AssignmentStmtContext * /*ctx*/) override { }
  virtual void exitAssignmentStmt(MixedDrinksParser::AssignmentStmtContext * /*ctx*/) override { }

  virtual void enterRepeatStmt(MixedDrinksParser::RepeatStmtContext * /*ctx*/) override { }
  virtual void exitRepeatStmt(MixedDrinksParser::RepeatStmtContext * /*ctx*/) override { }

  virtual void enterDeclareStmt(MixedDrinksParser::DeclareStmtContext * /*ctx*/) override { }
  virtual void exitDeclareStmt(MixedDrinksParser::DeclareStmtContext * /*ctx*/) override { }

  virtual void enterIf_stmt(MixedDrinksParser::If_stmtContext * /*ctx*/) override { }
  virtual void exitIf_stmt(MixedDrinksParser::If_stmtContext * /*ctx*/) override { }

  virtual void enterAssignment_stmt(MixedDrinksParser::Assignment_stmtContext * /*ctx*/) override { }
  virtual void exitAssignment_stmt(MixedDrinksParser::Assignment_stmtContext * /*ctx*/) override { }

  virtual void enterDeclaration_stmt(MixedDrinksParser::Declaration_stmtContext * /*ctx*/) override { }
  virtual void exitDeclaration_stmt(MixedDrinksParser::Declaration_stmtContext * /*ctx*/) override { }

  virtual void enterDeclaration(MixedDrinksParser::DeclarationContext * /*ctx*/) override { }
  virtual void exitDeclaration(MixedDrinksParser::DeclarationContext * /*ctx*/) override { }

  virtual void enterChug_stmt(MixedDrinksParser::Chug_stmtContext * /*ctx*/) override { }
  virtual void exitChug_stmt(MixedDrinksParser::Chug_stmtContext * /*ctx*/) override { }

  virtual void enterStmt_list(MixedDrinksParser::Stmt_listContext * /*ctx*/) override { }
  virtual void exitStmt_list(MixedDrinksParser::Stmt_listContext * /*ctx*/) override { }

  virtual void enterIdentifier(MixedDrinksParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(MixedDrinksParser::IdentifierContext * /*ctx*/) override { }

  virtual void enterParens(MixedDrinksParser::ParensContext * /*ctx*/) override { }
  virtual void exitParens(MixedDrinksParser::ParensContext * /*ctx*/) override { }

  virtual void enterAddSubExpr(MixedDrinksParser::AddSubExprContext * /*ctx*/) override { }
  virtual void exitAddSubExpr(MixedDrinksParser::AddSubExprContext * /*ctx*/) override { }

  virtual void enterInteger(MixedDrinksParser::IntegerContext * /*ctx*/) override { }
  virtual void exitInteger(MixedDrinksParser::IntegerContext * /*ctx*/) override { }

  virtual void enterRelExpr(MixedDrinksParser::RelExprContext * /*ctx*/) override { }
  virtual void exitRelExpr(MixedDrinksParser::RelExprContext * /*ctx*/) override { }

  virtual void enterMulDivExpr(MixedDrinksParser::MulDivExprContext * /*ctx*/) override { }
  virtual void exitMulDivExpr(MixedDrinksParser::MulDivExprContext * /*ctx*/) override { }

  virtual void enterTypeID(MixedDrinksParser::TypeIDContext * /*ctx*/) override { }
  virtual void exitTypeID(MixedDrinksParser::TypeIDContext * /*ctx*/) override { }

  virtual void enterDrink(MixedDrinksParser::DrinkContext * /*ctx*/) override { }
  virtual void exitDrink(MixedDrinksParser::DrinkContext * /*ctx*/) override { }

  virtual void enterShots(MixedDrinksParser::ShotsContext * /*ctx*/) override { }
  virtual void exitShots(MixedDrinksParser::ShotsContext * /*ctx*/) override { }

  virtual void enterMul_div_op(MixedDrinksParser::Mul_div_opContext * /*ctx*/) override { }
  virtual void exitMul_div_op(MixedDrinksParser::Mul_div_opContext * /*ctx*/) override { }

  virtual void enterAdd_sub_op(MixedDrinksParser::Add_sub_opContext * /*ctx*/) override { }
  virtual void exitAdd_sub_op(MixedDrinksParser::Add_sub_opContext * /*ctx*/) override { }

  virtual void enterRel_op(MixedDrinksParser::Rel_opContext * /*ctx*/) override { }
  virtual void exitRel_op(MixedDrinksParser::Rel_opContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

