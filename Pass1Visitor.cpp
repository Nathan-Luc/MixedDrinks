#include <iostream>
#include <string>
#include <vector>

//useful in test
#include <stdlib.h>
#include <time.h>
#include <math.h>

#include "Pass1Visitor.h"
#include "wci/intermediate/SymTabFactory.h"
#include "wci/intermediate/symtabimpl/Predefined.h"
#include "wci/util/CrossReferencer.h"

using namespace std;
using namespace wci;
using namespace wci::intermediate;
using namespace wci::intermediate::symtabimpl;
using namespace wci::util;

static string func_id = "";

Pass1Visitor::Pass1Visitor()
    : program_id(nullptr), j_file(nullptr)
{

	// Create and initialize the symbol table stack.
    symtab_stack = SymTabFactory::create_symtab_stack();
    Predefined::initialize(symtab_stack);
}

Pass1Visitor::~Pass1Visitor() {}

ostream& Pass1Visitor::get_assembly_file() { return j_file; }

antlrcpp::Any Pass1Visitor::visitProg(MixedDrinksParser::ProgContext *ctx)
{
    string program_name = "MixedDrinks";
    cout << "--> In " << program_name << endl;

    program_id = symtab_stack->enter_local(program_name);
    program_id->set_definition((Definition)DF_PROGRAM);
    program_id->set_attribute((SymTabKey) ROUTINE_SYMTAB, symtab_stack->push());
    symtab_stack->set_program_id(program_id);

    // Create the assembly output file.
    j_file.open(program_name + ".j");
    if (j_file.fail())
    {
            cout << "***** Error opening assembly file ******" << endl;
            exit(-99);
    }
    // Emit the program header.
    j_file << ".class public " << program_name << endl;
    j_file << ".super java/lang/Object" << endl;

    cout << "--> In visitProgram()" << endl;

    // Emit the RunTimer and PascalTextIn fields.
    j_file << endl;
    j_file << ".field private static _runTimer LRunTimer;" << endl;
    j_file << ".field private static _standardIn LPascalTextIn;" << endl;

    auto value = visitChildren(ctx);

    // Emit the class constructor.
    j_file << endl;
    j_file << ".method public <init>()V" << endl;
    j_file << endl;
    j_file << "\taload_0" << endl;
    j_file << "\tinvokenonvirtual    java/lang/Object/<init>()V" << endl;
    j_file << "\treturn" << endl;
    j_file << endl;
    j_file << ".limit locals 1" << endl;
    j_file << ".limit stack 1" << endl;
    j_file << ".end method" << endl;

    cout << "--> Printing Cross-Reference Table. <--" << endl;

    // Print the cross-reference table.
    CrossReferencer cross_referencer;
    cross_referencer.print(symtab_stack);
    return value;
}

antlrcpp::Any Pass1Visitor::visitBlock(MixedDrinksParser::BlockContext *ctx)
 {
     cout << "--> in Block()" << endl;
     auto value = visitChildren(ctx);
     return value;
 }

antlrcpp::Any Pass1Visitor::visitTypeID(MixedDrinksParser::TypeIDContext *ctx)
{
    cout << "--> in TypeID() " + ctx->getText() << endl;
    return visitChildren(ctx);
}

antlrcpp::Any Pass1Visitor::visitVariable_ID(MixedDrinksParser::Variable_IDContext *ctx)
{
    cout << "--> in VarID() " + ctx->getText() << endl;
    return visitChildren(ctx);
}

antlrcpp::Any Pass1Visitor::visitDeclaration(MixedDrinksParser::DeclarationContext *ctx)
{
    cout << "--> in Declaration() " + ctx->getText() << endl;

    j_file << "\n; " << ctx->getText() << "\n" << endl;
    TypeSpec *type;
    string type_indicator;
    string type_name = ctx->typeID()->getText();
    if (type_name=="SHOTS")
    {
        type = Predefined::integer_type;
        type_indicator = "I";
    }
    else if (type_name=="SPRITS")
    {
        type = Predefined::char_type;
        type_indicator = "C";
    }
    else
    {
        type = nullptr;
        type_indicator = "?";
    }

    string variable_name = func_id + ctx->variable_ID()->getText();
    SymTabEntry *variable_id = symtab_stack->enter_local(variable_name);
    variable_id->set_definition((Definition) DF_VARIABLE);
    variable_id->set_typespec(type);
    j_file << ".field private static "<< variable_name << " " << type_indicator << endl;
    return visitChildren(ctx);
}

antlrcpp::Any Pass1Visitor::visitDeclaration_stmt(MixedDrinksParser::Declaration_stmtContext *ctx)
{
	return visitChildren(ctx);
}

antlrcpp::Any Pass1Visitor::visitAddSubExpr(MixedDrinksParser::AddSubExprContext *ctx)
{
    cout << "--> in AddSubExpr() " + ctx->getText() << endl;
    auto value = visitChildren(ctx);

    TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;

    bool integer_mode =    (type1 == Predefined::integer_type)
                        && (type2 == Predefined::integer_type);
    TypeSpec *type = integer_mode ? Predefined::integer_type
                   :                nullptr;
    ctx->type = type;
    return value;
}


antlrcpp::Any Pass1Visitor::visitMulDivExpr(MixedDrinksParser::MulDivExprContext *ctx)
{
    auto value = visitChildren(ctx);

    TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;

    bool integer_mode =    (type1 == Predefined::integer_type)
                        && (type2 == Predefined::integer_type);

    TypeSpec *type = integer_mode ? Predefined::integer_type : nullptr;
    ctx->type = type;
    return value;
}
antlrcpp::Any Pass1Visitor::visitParens(MixedDrinksParser::ParensContext *ctx)
{
    cout << "--> in Paren() " + ctx->getText() << endl;

    auto value = visitChildren(ctx);
    ctx->type = ctx->expr()->type;
    return value;
}
 antlrcpp::Any Pass1Visitor::visitDrinkExpression(MixedDrinksParser::DrinkExpressionContext *ctx)
{
    cout << "--> in VarExpr(): " + ctx->getText() << endl;

    string variable_name = func_id + ctx->drink()->getText();
    SymTabEntry *variable_id = symtab_stack->lookup(variable_name);
    ctx->type = variable_id->get_typespec();
    return visitChildren(ctx);
}
antlrcpp::Any Pass1Visitor::visitRelExpr(MixedDrinksParser::RelExprContext *ctx)
{    
    cout << "--> in RelOp(): " + ctx->getText() << endl;
    auto value = visitChildren(ctx);

    TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;

    bool integer_mode =    (type1 == Predefined::integer_type)
                        && (type2 == Predefined::integer_type);

    TypeSpec *type = integer_mode ? Predefined::integer_type
                   :                nullptr;
    ctx->type = type;
    return value;
}

antlrcpp::Any Pass1Visitor::visitCharacter_constant(MixedDrinksParser::Character_constantContext *ctx)
{
    cout << "--> in CharConst(): " + ctx->getText() << endl;
    ctx->type = Predefined::char_type;
    return visitChildren(ctx);
}

antlrcpp::Any Pass1Visitor::visitInteger_constant(MixedDrinksParser::Integer_constantContext *ctx)
{
    cout << "--> in IntConst(): " + ctx->getText() << endl;
    ctx->type = Predefined::integer_type;
    return visitChildren(ctx);
}

antlrcpp::Any Pass1Visitor::visitNumberExpression(MixedDrinksParser::NumberExpressionContext *ctx)
{
    cout << "--> in UnsignedNumberExpr(): " + ctx->getText() << endl;
    auto value = visit(ctx->number());
    ctx->type = ctx->number()->type;
    return value;
}
