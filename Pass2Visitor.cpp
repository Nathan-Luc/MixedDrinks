#include <iostream>
#include <string>

#include "Pass2Visitor.h"
#include "wci/intermediate/SymTabStack.h"
#include "wci/intermediate/SymTabEntry.h"
#include "wci/intermediate/TypeSpec.h"
#include "wci/intermediate/symtabimpl/Predefined.h"

using namespace wci;
using namespace wci::intermediate;
using namespace wci::intermediate::symtabimpl;

// THESE GLOBAL NEEDS TO BE CHANGED BECAUSE IT WAS COPIED!!!!!!!!!!!!#$#@!$!@#$!#@$@!
int labelNum = 0;
int label=0;
static string fxn_name = "";
static unordered_map<string, vector<vector<string>>> fxn_variables_vec;

Pass2Visitor::Pass2Visitor(ostream& j_file)
    : program_name(""), j_file(j_file)
{
}

Pass2Visitor::~Pass2Visitor() {}

antlrcpp::Any Pass2Visitor::visitProg(MixedDrinksParser::ProgContext *ctx)
{
	program_name = "MixedDrinks";
	// Emit the main program header.

	// Emit the main program header.
    j_file << endl;
    j_file << ".method public static main([Ljava/lang/String;)V" << endl;
    j_file << endl;
    j_file << "\tnew RunTimer" << endl;
    j_file << "\tdup" << endl;
    j_file << "\tinvokenonvirtual RunTimer/<init>()V" << endl;
    j_file << "\tputstatic        " << program_name
           << "/_runTimer LRunTimer;" << endl;
    j_file << "\tnew PascalTextIn" << endl;
    j_file << "\tdup" << endl;
    j_file << "\tinvokenonvirtual PascalTextIn/<init>()V" << endl;
    j_file << "\tputstatic        " + program_name
           << "/_standardIn LPascalTextIn;" << endl;

    auto value = visitChildren(ctx);

    // Emit the main program epilogue.
    j_file << endl;
    j_file << "\tgetstatic     " << program_name
               << "/_runTimer LRunTimer;" << endl;
    j_file << "\tinvokevirtual RunTimer.printElapsedTime()V" << endl;
    j_file << endl;
    j_file << "\treturn" << endl;
    j_file << endl;
    j_file << ".limit locals 16" << endl;
    j_file << ".limit stack 16" << endl;
    j_file << ".end method" << endl;

    return value;
}

antlrcpp::Any Pass2Visitor::visitStmt_list(MixedDrinksParser::Stmt_listContext *ctx)
{
	j_file << endl << "; " + ctx->getText() << endl << endl;
	
    return visitChildren(ctx);
}

antlrcpp::Any Pass2Visitor::visitAssignment_stmt(MixedDrinksParser::Assignment_stmtContext *ctx)
{
	auto value = visit(ctx->expr());

    string type_indicator =
                  (ctx->expr()->type == Predefined::integer_type) ? "I"
                : (ctx->expr()->type == Predefined::real_type)    ? "F"
                :                                                   "?";

    // Emit a field put instruction.
    j_file << "\tputstatic\t" << program_name
           << "/" << ctx->drink()->IDENTIFIER()->toString()
           << " " << type_indicator << endl;

    return value;
}

// antlrcpp::Any Pass2Visitor::visitRepeatStmt(MixedDrinksParser::RepeatStmtContext *ctx) override;

antlrcpp::Any Pass2Visitor::visitDeclaration_stmt(MixedDrinksParser::Declaration_stmtContext *ctx)
{
	cout << "--> in Decl(): " << ctx->getText() << endl;
	auto value = visit(ctx->expr());
	string var_name = fxn_name + ctx->declaration()->drink()->getText();
	string type_indicator =
				  (ctx->expr()->type == Predefined::integer_type) ? "I"
				: (ctx->expr()->type == Predefined::char_type)    ? "C"
				:                                                   "?";

	// Emit a field put instruction.
	j_file << "\tputstatic\t" << program_name << "/" << var_name << " " << type_indicator << endl;

	return value;
}

antlrcpp::Any Pass2Visitor::visitIdentifier(MixedDrinksParser::IdentifierContext *ctx)
{
	string variable_name = ctx->drink()->IDENTIFIER()->toString();
    TypeSpec *type = ctx->type;

    string type_indicator = (type == Predefined::integer_type) ? "I"
                          : (type == Predefined::real_type)    ? "F"
                          :                                      "?";

    // Emit a field get instruction.
    j_file << "\tgetstatic\t" << program_name
           << "/" << variable_name << " " << type_indicator << endl;

    return visitChildren(ctx);
}

// antlrcpp::Any visitParens(MixedDrinksParser::ParensContext *ctx) override;

antlrcpp::Any Pass2Visitor::visitAddSubExpr(MixedDrinksParser::AddSubExprContext *ctx)
{
	auto value = visitChildren(ctx);

    TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;

    bool integer_mode =    (type1 == Predefined::integer_type)
                        && (type2 == Predefined::integer_type);
    bool real_mode    =    (type1 == Predefined::real_type)
                        && (type2 == Predefined::real_type);

    string op = ctx->add_sub_op()->getText();
    string opcode;

    if (op == "+")
    {
        opcode = integer_mode ? "iadd"
               : real_mode    ? "fadd"
               :                "????";
    }
    else
    {
        opcode = integer_mode ? "isub"
               : real_mode    ? "fsub"
               :                "????";
    }

    // Emit an add or subtract instruction.
    j_file << "\t" << opcode << endl;

    return value;
}

// antlrcpp::Any Pass2Visitor::visitInteger(MixedDrinksParser::IntegerContext *ctx) override;
// antlrcpp::Any Pass2Visitor::visitRelExpr(MixedDrinksParser::RelExprContext *ctx) override;

antlrcpp::Any Pass2Visitor::visitMulDivExpr(MixedDrinksParser::MulDivExprContext *ctx)
{
	auto value = visitChildren(ctx);

    TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;

    bool integer_mode =    (type1 == Predefined::integer_type)
                        && (type2 == Predefined::integer_type);
    bool real_mode    =    (type1 == Predefined::real_type)
                        && (type2 == Predefined::real_type);

    string op = ctx->mul_div_op()->getText();
    string opcode;

    if (op == "*")
    {
        opcode = integer_mode ? "imul"
               : real_mode    ? "fmul"
               :                "????";
    }
    else
    {
        opcode = integer_mode ? "idpv"
               : real_mode    ? "fdiv"
               :                "????";
    }

    // Emit a multiply or divide instruction.
    j_file << "\t" << opcode << endl;

    return value;
}

// antlrcpp::Any visitTypeID(MixedDrinksParser::TypeIDContext *ctx) override;
// antlrcpp::Any visitMul_div_op(MixedDrinksParser::Mul_div_opContext *ctx) override;
// antlrcpp::Any visitAdd_sub_op(MixedDrinksParser::Add_sub_opContext *ctx) override;
// antlrcpp::Any visitRel_op(MixedDrinksParser::Rel_opContext *ctx) override;

antlrcpp::Any Pass2Visitor::visitIf_stmt(MixedDrinksParser::If_stmtContext *ctx)
{
	cout << "--> in If(): " << ctx->getText() << endl;
	int original_label = labelNum++;
	int true_label=labelNum++;
	int last_label=labelNum++;
	int statement_size = ctx->stmt().size();
	bool has_else = false;
	if (statement_size > 1)
	{
		has_else=true;
	}
	j_file << "Label_" << original_label << ":" << endl;
	label=true_label;
	visit(ctx->expr()); //If the expression is true jump to true statements

	if(has_else)
	{
		visitChildren(ctx->stmt(statement_size -1));
		j_file << "\tgoto " << "Label_" << last_label << endl;
	}

	j_file << "Label_" << true_label << ":" << endl;
	visitChildren(ctx->stmt(statement_size-2));
	j_file << "Label_" << last_label << ":" << endl;
	return NULL;
}

// antlrcpp::Any Pass2Visitor::visitChug_stmt(MixedDrinksParser::Chug_stmtContext *ctx) override;
// antlrcpp::Any Pass2Visitor::visitDrink(MixedDrinksParser::DrinkContext *ctx) override;
// antlrcpp::Any Pass2Visitor::visitShots(MixedDrinksParser::ShotsContext *ctx) override;
