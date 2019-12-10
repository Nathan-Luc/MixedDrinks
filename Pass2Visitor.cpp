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

	j_file << endl;
	j_file << ".method public static main([Ljava/lang/String;)V" << endl;
	j_file << endl;
	j_file << "\tnew RunTimer" << endl;
	j_file << "\tdup" << endl;
	j_file << "\tinvokenonvirtual RunTimer/<init>()V" << endl;
	j_file << "\tputstatic        " << program_name << "/_runTimer LRunTimer;" << endl;
	j_file << "\tnew PascalTextIn" << endl;
	j_file << "\tdup" << endl;
	j_file << "\tinvokenonvirtual PascalTextIn/<init>()V" << endl;
	j_file << "\tputstatic        " + program_name << "/_standardIn LPascalTextIn;" << endl;
    auto value = visitChildren(ctx);
    return value;
}
antlrcpp::Any Pass2Visitor::visitBlock(MixedDrinksParser::BlockContext *ctx)
{
   auto value = visitChildren(ctx);

   j_file << endl;
   j_file << "\tgetstatic     " << program_name << "/_runTimer LRunTimer;" << endl;
   j_file << "\tinvokevirtual RunTimer.printElapsedTime()V" << endl;
   j_file << endl;
   j_file << "\treturn" << endl;
   j_file << endl;
   j_file << ".limit locals 16" << endl;
   j_file << ".limit stack 16" << endl;
   j_file << ".end method" << endl;

   return value;
}

antlrcpp::Any Pass2Visitor::visitStmt(MixedDrinksParser::StmtContext *ctx)
{
   j_file << endl << "; " + ctx->getText() << endl << endl;
   return visitChildren(ctx);
}
antlrcpp::Any Pass2Visitor::visitDeclaration_stmt(MixedDrinksParser::Declaration_stmtContext *ctx)
{
	cout << "--> in Decl(): " << ctx->getText() << endl;
	auto value = visit(ctx->expr());
	string var_name = fxn_name + ctx->declaration()->variable_ID()->getText();
	string type_indicator =
				  (ctx->expr()->type == Predefined::integer_type) ? "I"
				: (ctx->expr()->type == Predefined::char_type)    ? "C"
				:                                                   "?";

	// Emit a field put instruction.
	j_file << "\tputstatic\t" << program_name << "/" << var_name << " " << type_indicator << endl;

	return value;
}
antlrcpp::Any Pass2Visitor::visitAssignment_stmt(MixedDrinksParser::Assignment_stmtContext *ctx)
{
	cout << "--> in Assign()" << endl;
	auto value = visit(ctx->expr());
	string var_name = fxn_name +ctx->drink()->IDENTIFIER()->toString();

	string type_indicator =
	   (ctx->expr()->type == Predefined::integer_type) ? "I"
	 : (ctx->expr()->type == Predefined::real_type)    ? "F"
	 :                                                   "?";

	// Emit a field put instruction.
	j_file << "\tputstatic\t" << program_name << "/" << var_name << " " << type_indicator << endl;

	return value;
}
antlrcpp::Any Pass2Visitor::visitDrinkNames(MixedDrinksParser::DrinkNamesContext *ctx)
{
	cout << "--> visitStr" << ctx->getText() << endl;
	string value = ctx->STRING()->getText();
	value=value.substr(1,value.length()-1);
	j_file << "\tldc\t" << value << endl;
	return visitChildren(ctx);
}
antlrcpp::Any Pass2Visitor::visitPrint_statement(MixedDrinksParser::Print_statementContext *ctx)
{
	cout << "--> in Print()" << endl;

	if (ctx->output()->expr()!=NULL)
	{
		auto value = visit(ctx->output()->expr());
		string var_name = fxn_name +ctx->output()->expr()->children[0]->getText();
		string type_indicator = (ctx->output()->expr()->type == Predefined::integer_type) ? "I" : "?";
		j_file << "\t\tputstatic\t" << program_name << "/" << var_name << " " << type_indicator << endl;
		j_file << "\t\tgetstatic\tjava/lang/System/out Ljava/io/PrintStream;" << endl;
		j_file << "\t\tldc \"" << var_name << " = %d\\n\"" << endl;

		j_file << "\t\ticonst_1\t" << endl;
		j_file << "\t\tanewarray\tjava/lang/Object" << endl;
		j_file << "\t\tdup" << endl;

		j_file << "\t\ticonst_0" << endl;
		j_file << "\t\tgetstatic\t" << program_name << "/" << var_name << " " << type_indicator << endl;
		j_file << "\t\tinvokestatic\tjava/lang/Integer.valueOf(I)Ljava/lang/Integer;" << endl;
		j_file << "\t\taastore" << endl;


		j_file << "\t\tinvokestatic  java/lang/String.format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;" << endl;
		j_file << "\t\tinvokevirtual java/io/PrintStream.print(Ljava/lang/String;)V" << endl;
	}
	else
	{
		   j_file << "\t; Assignment" << endl;
		   j_file << "\t\tgetstatic\tjava/lang/System/out Ljava/io/PrintStream;" << endl;
		   j_file << "\t\tldc " << ctx->output()->drinkNames()->getText() << "\n" << endl;
		   j_file << "\t\tinvokevirtual java/io/PrintStream.print(Ljava/lang/String;)V" << endl;
	}
	   return NULL;
}
antlrcpp::Any Pass2Visitor::visitAddSubExpr(MixedDrinksParser::AddSubExprContext *ctx)
{
	cout<<"--> in Add/Subtract(): "<< ctx->getText()<<endl;
	auto value = visitChildren(ctx);

	TypeSpec *type1 = ctx->expr(0)->type;
	TypeSpec *type2 = ctx->expr(1)->type;

	bool integer_mode =    (type1 == Predefined::integer_type)
					   && (type2 == Predefined::integer_type);

	bool integer_mode_boolean = false;
	if (integer_mode){
		integer_mode_boolean = false;
	}
	else{
		integer_mode_boolean = true;
	}

	string op = ctx->add_sub_op()->getText();
	string j_code;

	//for tracking
	if (op == "+")
	{
	   j_code = integer_mode ? "iadd":"????";
	}
	else
	{
	   j_code = integer_mode ? "isub":"????";
	}


	// Emit an add or subtract instruction.
	j_file << "\t" << j_code << endl;
	return value;
}

antlrcpp::Any Pass2Visitor::visitMulDivExpr(MixedDrinksParser::MulDivExprContext *ctx)
{
   auto value = visitChildren(ctx);

   TypeSpec *type1 = ctx->expr(0)->type;
   TypeSpec *type2 = ctx->expr(1)->type;

   bool integer_mode =    (type1 == Predefined::integer_type)
                       && (type2 == Predefined::integer_type);

   string op = ctx->mul_div_op()->getText();
   string opcode;

   if (op == "*")
   {
       opcode = integer_mode ? "imul": "????";
   }
   else
   {
       opcode = integer_mode ? "idpv" : "????";
   }

   // Emit a multiply or divide instruction.
   j_file << "\t" << opcode << endl;
   return value;
}

antlrcpp::Any Pass2Visitor::visitDrinkExpression(MixedDrinksParser::DrinkExpressionContext *ctx)
{
	cout<<"--> in VarExpr(): "<< ctx->getText() << endl;
	string var_name = fxn_name + ctx->drink()->getText();
	TypeSpec *type = ctx->type;

	string type_indicator = (type == Predefined::integer_type) ? "I"
						  : (type == Predefined::char_type)    ? "C"
					      :									     "?";


	// Emit a field get instruction.
	j_file << "\tgetstatic\t" << program_name << "/" << var_name << " " << type_indicator << endl;
	return visitChildren(ctx);
}

antlrcpp::Any Pass2Visitor::visitInteger_constant(MixedDrinksParser::Integer_constantContext *ctx)
{
    // Emit a load constant instruction.
    j_file << "\tldc\t" << ctx->getText() << endl;
    return visitChildren(ctx);
}
antlrcpp::Any Pass2Visitor::visitCharacter_constant(MixedDrinksParser::Character_constantContext *ctx)
{
	string str=ctx->getText();
	char ch=str[1];
	int ch_int=(int)ch;
    j_file << "\tldc\t" << ch_int << endl;
    return visitChildren(ctx);
}
antlrcpp::Any Pass2Visitor::visitRepeat_statement(MixedDrinksParser::Repeat_statementContext *ctx)
{
	cout << "--> in Repeat() " << ctx->getText() <<endl;

	int loop_start=labelNum++;
	j_file << "Label_" << loop_start << ":" << endl;
	visit(ctx->statement_list());
	label=loop_start;
	visit(ctx->expr()); //if the condition is still true go to loop start, else fall through
	return NULL;

}
antlrcpp::Any Pass2Visitor::visitIf_stmt(MixedDrinksParser::If_stmtContext *ctx)
{
	cout << "--> in If(): " << ctx->getText() << endl;
	int original_label = labelNum++;
	int true_label=labelNum++;
	int last_label=labelNum++;
	int statement_size = ctx->statement_list().size();
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
		visitChildren(ctx->statement_list(statement_size -1));
		j_file << "\tgoto " << "Label_" << last_label << endl;
	}

	j_file << "Label_" << true_label << ":" << endl;
	visitChildren(ctx->statement_list(statement_size-2));
	j_file << "Label_" << last_label << ":" << endl;
	return NULL;
}

antlrcpp::Any Pass2Visitor::visitRelExpr(MixedDrinksParser::RelExprContext *ctx)
{
	cout << "--> in RelOpExpr() " << ctx->getText() << endl;
    auto value = visitChildren(ctx);

    TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;
    string op = ctx->rel_op()->getText();

    string jas_op;

    //Character are loaded as integers
    bool integer_mode =    ((type1 == Predefined::integer_type)
                        && (type2 == Predefined::integer_type)) ||
                           ((type1 == Predefined::char_type)
                        && (type2 == Predefined::char_type));
    if (op == ">")
	{
	   jas_op = integer_mode ? "if_icmpgt":"????";
	}
	else if (op == ">=")
	{
	   jas_op = integer_mode ? "if_icmpge":"????";
	}
	else if (op == "<")
	{
		jas_op = integer_mode ? "if_icmplt":"????";
	}
	else if (op == "<=")
	{
		jas_op = integer_mode ? "if_icmple":"????";
	}
    else if (op == "!=")
    {
        jas_op = integer_mode ? "if_icmpne":"????";
    }
    else
	{
		jas_op = integer_mode ? "if_icmpeq" : "????";
	}

    j_file << "\t" << jas_op << " Label_" << label << endl;
    return NULL;
}

antlrcpp::Any Pass2Visitor::visitFunction_define(MixedDrinksParser::Function_defineContext *context)
{
	 cout << "--> in FuncDef(): " << context->function_ID()->getText() << endl;
	 fxn_name = context->function_ID()->getText() + "_";
	 vector<vector<string>> fxn_inputs;

	 j_file << "\tgoto " << fxn_name << "end" << endl;
	 j_file << context->function_ID()->getText() << ":" << endl;
	 j_file << "\tastore_1" << endl;

	 if(context->declaration(0) != NULL)
	 {
		 for(unsigned int i = 0; i < context->declaration().size(); i++)
		 {
			 string type_name     = context->declaration(i)->children[0]->getText();
			 string var_name = context->declaration(i)->children[1]->getText();
			 fxn_inputs.push_back({fxn_name + var_name, type_name});
		 }
	 }
	 fxn_variables_vec.emplace(context->function_ID()->IDENTIFIER()->getText(), fxn_inputs);

	 auto value = visitChildren(context->statement_list());
	 j_file << "\tret 1" << endl;
	 j_file << fxn_name << "end:" << endl;
	 fxn_name = "";
	 return value;
 }
antlrcpp::Any Pass2Visitor::visitFunction_call(MixedDrinksParser::Function_callContext *context)
{
	cout<<"--> in FuncCall()" << endl;
	if(context->identifiers() != NULL)
	{
		int input_count = context->identifiers()->expr().size();
		vector<vector<string>> fxn_inputs = fxn_variables_vec.find(context->function_ID()->getText())->second;
		int input_num = fxn_inputs.size();

		int total = 0;
		if (input_num > input_count)
		{
			total = input_count;
		}
		else
		{
			total = input_num;
		}
		for(int i = 0; i < total; i++)
		{
			string var_name  = fxn_inputs[i][0];
			string type_name = fxn_inputs[i][1];

			visit(context->identifiers()->expr(i));

			string type_indicator =
				  (type_name == "SHOTS")   ? "I"
				: (type_name == "SPRITS")  ? "C"
				:                            "?";
			// Emit a field put instruction.
			j_file << "\tputstatic\t" << program_name << "/" << fxn_name <<  var_name << " " << type_indicator << endl;
		}
	}
	j_file << "\tjsr " << context->function_ID()->getText() << endl;
	return NULL;
}
antlrcpp::Any Pass2Visitor::visitReturn_statement(MixedDrinksParser::Return_statementContext *context)
{
	cout<<"--> in return()"<<endl;
	visit(context->expr());
	return NULL;
}