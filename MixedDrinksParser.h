
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from MixedDrinks.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  MixedDrinksParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, MIXED_DRINKS = 7, 
    BEGIN = 8, END = 9, REPEAT = 10, UNTIL = 11, IF = 12, THEN = 13, ELSE = 14, 
    INT = 15, CHAR = 16, PRINT = 17, RETURN = 18, IDENTIFIER = 19, INTEGER = 20, 
    CHARACTER = 21, STRING = 22, MUL_OP = 23, DIV_OP = 24, ADD_OP = 25, 
    SUB_OP = 26, EQ_OP = 27, NE_OP = 28, LT_OP = 29, LE_OP = 30, GT_OP = 31, 
    GE_OP = 32, NEWLINE = 33, WS = 34
  };

  enum {
    RuleProg = 0, RuleMain = 1, RuleBlock = 2, RuleStatement_list = 3, RuleStmt = 4, 
    RuleFunction_list = 5, RuleFunctions = 6, RuleFunction_call = 7, RuleFunction_define = 8, 
    RuleReturn_statement = 9, RuleIf_stmt = 10, RuleRepeat_statement = 11, 
    RuleAssignment_stmt = 12, RuleDeclaration_stmt = 13, RuleDeclaration = 14, 
    RuleVariable_ID = 15, RulePrint_statement = 16, RuleOutput = 17, RuleIdentifiers = 18, 
    RuleExpr = 19, RuleNumber = 20, RuleDrinkNames = 21, RuleTypeID = 22, 
    RuleDrink = 23, RuleFunction_ID = 24, RuleMul_div_op = 25, RuleAdd_sub_op = 26, 
    RuleRel_op = 27
  };

  MixedDrinksParser(antlr4::TokenStream *input);
  ~MixedDrinksParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgContext;
  class MainContext;
  class BlockContext;
  class Statement_listContext;
  class StmtContext;
  class Function_listContext;
  class FunctionsContext;
  class Function_callContext;
  class Function_defineContext;
  class Return_statementContext;
  class If_stmtContext;
  class Repeat_statementContext;
  class Assignment_stmtContext;
  class Declaration_stmtContext;
  class DeclarationContext;
  class Variable_IDContext;
  class Print_statementContext;
  class OutputContext;
  class IdentifiersContext;
  class ExprContext;
  class NumberContext;
  class DrinkNamesContext;
  class TypeIDContext;
  class DrinkContext;
  class Function_IDContext;
  class Mul_div_opContext;
  class Add_sub_opContext;
  class Rel_opContext; 

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MainContext *main();
    BlockContext *block();
    antlr4::tree::TerminalNode *END();
    Function_listContext *function_list();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgContext* prog();

  class  MainContext : public antlr4::ParserRuleContext {
  public:
    MainContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeIDContext *> typeID();
    TypeIDContext* typeID(size_t i);
    antlr4::tree::TerminalNode *MIXED_DRINKS();
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MainContext* main();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Statement_listContext *statement_list();
    Function_listContext *function_list();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockContext* block();

  class  Statement_listContext : public antlr4::ParserRuleContext {
  public:
    Statement_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Statement_listContext* statement_list();

  class  StmtContext : public antlr4::ParserRuleContext {
  public:
    StmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Assignment_stmtContext *assignment_stmt();
    Declaration_stmtContext *declaration_stmt();
    If_stmtContext *if_stmt();
    Repeat_statementContext *repeat_statement();
    Print_statementContext *print_statement();
    Return_statementContext *return_statement();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtContext* stmt();

  class  Function_listContext : public antlr4::ParserRuleContext {
  public:
    Function_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FunctionsContext *> functions();
    FunctionsContext* functions(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_listContext* function_list();

  class  FunctionsContext : public antlr4::ParserRuleContext {
  public:
    FunctionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_callContext *function_call();
    Function_defineContext *function_define();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionsContext* functions();

  class  Function_callContext : public antlr4::ParserRuleContext {
  public:
    Function_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_IDContext *function_ID();
    IdentifiersContext *identifiers();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_callContext* function_call();

  class  Function_defineContext : public antlr4::ParserRuleContext {
  public:
    Function_defineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeIDContext *typeID();
    Function_IDContext *function_ID();
    Statement_listContext *statement_list();
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_defineContext* function_define();

  class  Return_statementContext : public antlr4::ParserRuleContext {
  public:
    Return_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    ExprContext *expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Return_statementContext* return_statement();

  class  If_stmtContext : public antlr4::ParserRuleContext {
  public:
    If_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    ExprContext *expr();
    antlr4::tree::TerminalNode *THEN();
    std::vector<Statement_listContext *> statement_list();
    Statement_listContext* statement_list(size_t i);
    antlr4::tree::TerminalNode *ELSE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_stmtContext* if_stmt();

  class  Repeat_statementContext : public antlr4::ParserRuleContext {
  public:
    Repeat_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPEAT();
    Statement_listContext *statement_list();
    antlr4::tree::TerminalNode *UNTIL();
    ExprContext *expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Repeat_statementContext* repeat_statement();

  class  Assignment_stmtContext : public antlr4::ParserRuleContext {
  public:
    Assignment_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DrinkContext *drink();
    antlr4::tree::TerminalNode *EQ_OP();
    ExprContext *expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assignment_stmtContext* assignment_stmt();

  class  Declaration_stmtContext : public antlr4::ParserRuleContext {
  public:
    Declaration_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationContext *declaration();
    antlr4::tree::TerminalNode *EQ_OP();
    ExprContext *expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Declaration_stmtContext* declaration_stmt();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeIDContext *typeID();
    Variable_IDContext *variable_ID();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationContext* declaration();

  class  Variable_IDContext : public antlr4::ParserRuleContext {
  public:
    TypeSpec * type = nullptr;
    Variable_IDContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_IDContext* variable_ID();

  class  Print_statementContext : public antlr4::ParserRuleContext {
  public:
    Print_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRINT();
    OutputContext *output();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Print_statementContext* print_statement();

  class  OutputContext : public antlr4::ParserRuleContext {
  public:
    OutputContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    DrinkNamesContext *drinkNames();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OutputContext* output();

  class  IdentifiersContext : public antlr4::ParserRuleContext {
  public:
    IdentifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifiersContext* identifiers();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    TypeSpec * type = nullptr;
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() = default;
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DrinkExpressionContext : public ExprContext {
  public:
    DrinkExpressionContext(ExprContext *ctx);

    DrinkContext *drink();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParensContext : public ExprContext {
  public:
    ParensContext(ExprContext *ctx);

    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AddSubExprContext : public ExprContext {
  public:
    AddSubExprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    Add_sub_opContext *add_sub_op();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumberExpressionContext : public ExprContext {
  public:
    NumberExpressionContext(ExprContext *ctx);

    NumberContext *number();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FunctionCallExpressionContext : public ExprContext {
  public:
    FunctionCallExpressionContext(ExprContext *ctx);

    Function_callContext *function_call();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RelExprContext : public ExprContext {
  public:
    RelExprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    Rel_opContext *rel_op();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MulDivExprContext : public ExprContext {
  public:
    MulDivExprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    Mul_div_opContext *mul_div_op();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    TypeSpec * type = nullptr;
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    NumberContext() = default;
    void copyFrom(NumberContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Integer_constantContext : public NumberContext {
  public:
    Integer_constantContext(NumberContext *ctx);

    antlr4::tree::TerminalNode *INTEGER();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Character_constantContext : public NumberContext {
  public:
    Character_constantContext(NumberContext *ctx);

    antlr4::tree::TerminalNode *CHARACTER();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  NumberContext* number();

  class  DrinkNamesContext : public antlr4::ParserRuleContext {
  public:
    TypeSpec * type = nullptr;
    DrinkNamesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DrinkNamesContext* drinkNames();

  class  TypeIDContext : public antlr4::ParserRuleContext {
  public:
    TypeIDContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *CHAR();
    antlr4::tree::TerminalNode *INT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeIDContext* typeID();

  class  DrinkContext : public antlr4::ParserRuleContext {
  public:
    DrinkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DrinkContext* drink();

  class  Function_IDContext : public antlr4::ParserRuleContext {
  public:
    Function_IDContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_IDContext* function_ID();

  class  Mul_div_opContext : public antlr4::ParserRuleContext {
  public:
    Mul_div_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MUL_OP();
    antlr4::tree::TerminalNode *DIV_OP();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Mul_div_opContext* mul_div_op();

  class  Add_sub_opContext : public antlr4::ParserRuleContext {
  public:
    Add_sub_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD_OP();
    antlr4::tree::TerminalNode *SUB_OP();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Add_sub_opContext* add_sub_op();

  class  Rel_opContext : public antlr4::ParserRuleContext {
  public:
    Rel_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQ_OP();
    antlr4::tree::TerminalNode *NE_OP();
    antlr4::tree::TerminalNode *LT_OP();
    antlr4::tree::TerminalNode *LE_OP();
    antlr4::tree::TerminalNode *GT_OP();
    antlr4::tree::TerminalNode *GE_OP();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rel_opContext* rel_op();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

