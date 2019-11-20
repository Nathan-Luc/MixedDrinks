
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

    virtual antlrcpp::Any visitIfStmt(MixedDrinksParser::IfStmtContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentStmt(MixedDrinksParser::AssignmentStmtContext *context) = 0;

    virtual antlrcpp::Any visitRepeatStmt(MixedDrinksParser::RepeatStmtContext *context) = 0;

    virtual antlrcpp::Any visitDeclareStmt(MixedDrinksParser::DeclareStmtContext *context) = 0;

    virtual antlrcpp::Any visitIf_stmt(MixedDrinksParser::If_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAssignment_stmt(MixedDrinksParser::Assignment_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration_stmt(MixedDrinksParser::Declaration_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration(MixedDrinksParser::DeclarationContext *context) = 0;

    virtual antlrcpp::Any visitChug_stmt(MixedDrinksParser::Chug_stmtContext *context) = 0;

    virtual antlrcpp::Any visitStmt_list(MixedDrinksParser::Stmt_listContext *context) = 0;

    virtual antlrcpp::Any visitIdentifier(MixedDrinksParser::IdentifierContext *context) = 0;

    virtual antlrcpp::Any visitParens(MixedDrinksParser::ParensContext *context) = 0;

    virtual antlrcpp::Any visitAddSubExpr(MixedDrinksParser::AddSubExprContext *context) = 0;

    virtual antlrcpp::Any visitInteger(MixedDrinksParser::IntegerContext *context) = 0;

    virtual antlrcpp::Any visitRelExpr(MixedDrinksParser::RelExprContext *context) = 0;

    virtual antlrcpp::Any visitMulDivExpr(MixedDrinksParser::MulDivExprContext *context) = 0;

    virtual antlrcpp::Any visitTypeID(MixedDrinksParser::TypeIDContext *context) = 0;

    virtual antlrcpp::Any visitDrink(MixedDrinksParser::DrinkContext *context) = 0;

    virtual antlrcpp::Any visitShots(MixedDrinksParser::ShotsContext *context) = 0;

    virtual antlrcpp::Any visitMul_div_op(MixedDrinksParser::Mul_div_opContext *context) = 0;

    virtual antlrcpp::Any visitAdd_sub_op(MixedDrinksParser::Add_sub_opContext *context) = 0;

    virtual antlrcpp::Any visitRel_op(MixedDrinksParser::Rel_opContext *context) = 0;


};

