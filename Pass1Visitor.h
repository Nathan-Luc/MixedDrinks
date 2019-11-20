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

    antlrcpp::Any visitProgram(munchiesParser::ProgramContext *ctx) override;
    antlrcpp::Any visitBlock(munchiesParser::BlockContext *ctx) override;
    antlrcpp::Any visitDeclaration(munchiesParser::DeclarationContext *ctx) override;
    antlrcpp::Any visitDeclare_stmt(munchiesParser::Declare_stmtContext *ctx) override;
    antlrcpp::Any visitTypeID(munchiesParser::TypeIDContext *ctx) override;
    antlrcpp::Any visitAddSubExpr(munchiesParser::AddSubExprContext *ctx) override;
    antlrcpp::Any visitMulDivExpr(munchiesParser::MulDivExprContext *ctx) override;
    antlrcpp::Any visitVarID(munchiesParser::VarIDContext *ctx) override;
    antlrcpp::Any visitParenExpr(munchiesParser::ParenExprContext *ctx) override;
    antlrcpp::Any visitVariableExpr(munchiesParser::VariableExprContext *ctx) override;
    antlrcpp::Any visitSignedNumber(munchiesParser::SignedNumberContext *ctx) override;
    antlrcpp::Any visitUnsignedNumberExpr(munchiesParser::UnsignedNumberExprContext *ctx) override;
    antlrcpp::Any visitCharConst(munchiesParser::CharConstContext *ctx) override;
    antlrcpp::Any visitRelOpExpr(munchiesParser::RelOpExprContext *ctx) override;
    antlrcpp::Any visitIntegerConst(munchiesParser::IntegerConstContext *ctx) override;
    
    // Added override functions to support function calls in Munchies
    antlrcpp::Any visitFn_defn(munchiesParser::Fn_defnContext *ctx) override;
    antlrcpp::Any visitFuncID(munchiesParser::FuncIDContext *ctx) override;
    antlrcpp::Any visitFuncCallExpr(munchiesParser::FuncCallExprContext *ctx) override;
};

#endif /* PASS1VISITOR_H_ */
