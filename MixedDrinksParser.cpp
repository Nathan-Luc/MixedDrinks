
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from MixedDrinks.g4 by ANTLR 4.7.2


#include "MixedDrinksVisitor.h"

#include "MixedDrinksParser.h"


using namespace antlrcpp;
using namespace antlr4;

MixedDrinksParser::MixedDrinksParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

MixedDrinksParser::~MixedDrinksParser() {
  delete _interpreter;
}

std::string MixedDrinksParser::getGrammarFileName() const {
  return "MixedDrinks.g4";
}

const std::vector<std::string>& MixedDrinksParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& MixedDrinksParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgContext ------------------------------------------------------------------

MixedDrinksParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MixedDrinksParser::MainContext* MixedDrinksParser::ProgContext::main() {
  return getRuleContext<MixedDrinksParser::MainContext>(0);
}

MixedDrinksParser::BlockContext* MixedDrinksParser::ProgContext::block() {
  return getRuleContext<MixedDrinksParser::BlockContext>(0);
}

tree::TerminalNode* MixedDrinksParser::ProgContext::END() {
  return getToken(MixedDrinksParser::END, 0);
}


size_t MixedDrinksParser::ProgContext::getRuleIndex() const {
  return MixedDrinksParser::RuleProg;
}

antlrcpp::Any MixedDrinksParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MixedDrinksVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

MixedDrinksParser::ProgContext* MixedDrinksParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, MixedDrinksParser::RuleProg);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(44);
    main();
    setState(45);
    block();
    setState(46);
    match(MixedDrinksParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MainContext ------------------------------------------------------------------

MixedDrinksParser::MainContext::MainContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MixedDrinksParser::TypeIDContext *> MixedDrinksParser::MainContext::typeID() {
  return getRuleContexts<MixedDrinksParser::TypeIDContext>();
}

MixedDrinksParser::TypeIDContext* MixedDrinksParser::MainContext::typeID(size_t i) {
  return getRuleContext<MixedDrinksParser::TypeIDContext>(i);
}

tree::TerminalNode* MixedDrinksParser::MainContext::MIXED_DRINKS() {
  return getToken(MixedDrinksParser::MIXED_DRINKS, 0);
}

std::vector<tree::TerminalNode *> MixedDrinksParser::MainContext::IDENTIFIER() {
  return getTokens(MixedDrinksParser::IDENTIFIER);
}

tree::TerminalNode* MixedDrinksParser::MainContext::IDENTIFIER(size_t i) {
  return getToken(MixedDrinksParser::IDENTIFIER, i);
}


size_t MixedDrinksParser::MainContext::getRuleIndex() const {
  return MixedDrinksParser::RuleMain;
}

antlrcpp::Any MixedDrinksParser::MainContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MixedDrinksVisitor*>(visitor))
    return parserVisitor->visitMain(this);
  else
    return visitor->visitChildren(this);
}

MixedDrinksParser::MainContext* MixedDrinksParser::main() {
  MainContext *_localctx = _tracker.createInstance<MainContext>(_ctx, getState());
  enterRule(_localctx, 2, MixedDrinksParser::RuleMain);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(48);
    typeID();
    setState(49);
    match(MixedDrinksParser::MIXED_DRINKS);
    setState(50);
    match(MixedDrinksParser::T__0);
    setState(59);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MixedDrinksParser::INT)
      | (1ULL << MixedDrinksParser::CHAR)
      | (1ULL << MixedDrinksParser::IDENTIFIER))) != 0)) {
      setState(51);
      typeID();
      setState(52);
      match(MixedDrinksParser::IDENTIFIER);
      setState(55);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MixedDrinksParser::T__1) {
        setState(54);
        match(MixedDrinksParser::T__1);
      }
      setState(61);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(62);
    match(MixedDrinksParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

MixedDrinksParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MixedDrinksParser::Statement_listContext* MixedDrinksParser::BlockContext::statement_list() {
  return getRuleContext<MixedDrinksParser::Statement_listContext>(0);
}


size_t MixedDrinksParser::BlockContext::getRuleIndex() const {
  return MixedDrinksParser::RuleBlock;
}

antlrcpp::Any MixedDrinksParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MixedDrinksVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

MixedDrinksParser::BlockContext* MixedDrinksParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 4, MixedDrinksParser::RuleBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(64);
    statement_list();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtContext ------------------------------------------------------------------

MixedDrinksParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MixedDrinksParser::Assignment_stmtContext* MixedDrinksParser::StmtContext::assignment_stmt() {
  return getRuleContext<MixedDrinksParser::Assignment_stmtContext>(0);
}

MixedDrinksParser::Declaration_stmtContext* MixedDrinksParser::StmtContext::declaration_stmt() {
  return getRuleContext<MixedDrinksParser::Declaration_stmtContext>(0);
}

MixedDrinksParser::If_stmtContext* MixedDrinksParser::StmtContext::if_stmt() {
  return getRuleContext<MixedDrinksParser::If_stmtContext>(0);
}

MixedDrinksParser::Repeat_statementContext* MixedDrinksParser::StmtContext::repeat_statement() {
  return getRuleContext<MixedDrinksParser::Repeat_statementContext>(0);
}

MixedDrinksParser::Print_statementContext* MixedDrinksParser::StmtContext::print_statement() {
  return getRuleContext<MixedDrinksParser::Print_statementContext>(0);
}


size_t MixedDrinksParser::StmtContext::getRuleIndex() const {
  return MixedDrinksParser::RuleStmt;
}

antlrcpp::Any MixedDrinksParser::StmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MixedDrinksVisitor*>(visitor))
    return parserVisitor->visitStmt(this);
  else
    return visitor->visitChildren(this);
}

MixedDrinksParser::StmtContext* MixedDrinksParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 6, MixedDrinksParser::RuleStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(77);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(66);
      assignment_stmt();
      setState(67);
      match(MixedDrinksParser::T__3);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(69);
      declaration_stmt();
      setState(70);
      match(MixedDrinksParser::T__3);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(72);
      if_stmt();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(73);
      assignment_stmt();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(74);
      repeat_statement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(75);
      declaration_stmt();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(76);
      print_statement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_stmtContext ------------------------------------------------------------------

MixedDrinksParser::If_stmtContext::If_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MixedDrinksParser::If_stmtContext::IF() {
  return getToken(MixedDrinksParser::IF, 0);
}

MixedDrinksParser::ExprContext* MixedDrinksParser::If_stmtContext::expr() {
  return getRuleContext<MixedDrinksParser::ExprContext>(0);
}

tree::TerminalNode* MixedDrinksParser::If_stmtContext::THEN() {
  return getToken(MixedDrinksParser::THEN, 0);
}

std::vector<MixedDrinksParser::Statement_listContext *> MixedDrinksParser::If_stmtContext::statement_list() {
  return getRuleContexts<MixedDrinksParser::Statement_listContext>();
}

MixedDrinksParser::Statement_listContext* MixedDrinksParser::If_stmtContext::statement_list(size_t i) {
  return getRuleContext<MixedDrinksParser::Statement_listContext>(i);
}

tree::TerminalNode* MixedDrinksParser::If_stmtContext::ELSE() {
  return getToken(MixedDrinksParser::ELSE, 0);
}


size_t MixedDrinksParser::If_stmtContext::getRuleIndex() const {
  return MixedDrinksParser::RuleIf_stmt;
}

antlrcpp::Any MixedDrinksParser::If_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MixedDrinksVisitor*>(visitor))
    return parserVisitor->visitIf_stmt(this);
  else
    return visitor->visitChildren(this);
}

MixedDrinksParser::If_stmtContext* MixedDrinksParser::if_stmt() {
  If_stmtContext *_localctx = _tracker.createInstance<If_stmtContext>(_ctx, getState());
  enterRule(_localctx, 8, MixedDrinksParser::RuleIf_stmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(79);
    match(MixedDrinksParser::IF);
    setState(80);
    match(MixedDrinksParser::T__0);
    setState(81);
    expr(0);
    setState(82);
    match(MixedDrinksParser::T__2);
    setState(83);
    match(MixedDrinksParser::THEN);
    setState(84);
    match(MixedDrinksParser::T__4);

    setState(85);
    statement_list();
    setState(86);
    match(MixedDrinksParser::T__5);
    setState(89);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MixedDrinksParser::ELSE) {
      setState(87);
      match(MixedDrinksParser::ELSE);
      setState(88);
      statement_list();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Assignment_stmtContext ------------------------------------------------------------------

MixedDrinksParser::Assignment_stmtContext::Assignment_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MixedDrinksParser::DrinkContext* MixedDrinksParser::Assignment_stmtContext::drink() {
  return getRuleContext<MixedDrinksParser::DrinkContext>(0);
}

tree::TerminalNode* MixedDrinksParser::Assignment_stmtContext::EQ_OP() {
  return getToken(MixedDrinksParser::EQ_OP, 0);
}

MixedDrinksParser::ExprContext* MixedDrinksParser::Assignment_stmtContext::expr() {
  return getRuleContext<MixedDrinksParser::ExprContext>(0);
}


size_t MixedDrinksParser::Assignment_stmtContext::getRuleIndex() const {
  return MixedDrinksParser::RuleAssignment_stmt;
}

antlrcpp::Any MixedDrinksParser::Assignment_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MixedDrinksVisitor*>(visitor))
    return parserVisitor->visitAssignment_stmt(this);
  else
    return visitor->visitChildren(this);
}

MixedDrinksParser::Assignment_stmtContext* MixedDrinksParser::assignment_stmt() {
  Assignment_stmtContext *_localctx = _tracker.createInstance<Assignment_stmtContext>(_ctx, getState());
  enterRule(_localctx, 10, MixedDrinksParser::RuleAssignment_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(91);
    drink();
    setState(92);
    match(MixedDrinksParser::EQ_OP);
    setState(93);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Declaration_stmtContext ------------------------------------------------------------------

MixedDrinksParser::Declaration_stmtContext::Declaration_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MixedDrinksParser::DeclarationContext* MixedDrinksParser::Declaration_stmtContext::declaration() {
  return getRuleContext<MixedDrinksParser::DeclarationContext>(0);
}

tree::TerminalNode* MixedDrinksParser::Declaration_stmtContext::EQ_OP() {
  return getToken(MixedDrinksParser::EQ_OP, 0);
}

MixedDrinksParser::ExprContext* MixedDrinksParser::Declaration_stmtContext::expr() {
  return getRuleContext<MixedDrinksParser::ExprContext>(0);
}


size_t MixedDrinksParser::Declaration_stmtContext::getRuleIndex() const {
  return MixedDrinksParser::RuleDeclaration_stmt;
}

antlrcpp::Any MixedDrinksParser::Declaration_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MixedDrinksVisitor*>(visitor))
    return parserVisitor->visitDeclaration_stmt(this);
  else
    return visitor->visitChildren(this);
}

MixedDrinksParser::Declaration_stmtContext* MixedDrinksParser::declaration_stmt() {
  Declaration_stmtContext *_localctx = _tracker.createInstance<Declaration_stmtContext>(_ctx, getState());
  enterRule(_localctx, 12, MixedDrinksParser::RuleDeclaration_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(95);
    declaration();
    setState(96);
    match(MixedDrinksParser::EQ_OP);
    setState(97);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

MixedDrinksParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MixedDrinksParser::TypeIDContext* MixedDrinksParser::DeclarationContext::typeID() {
  return getRuleContext<MixedDrinksParser::TypeIDContext>(0);
}

MixedDrinksParser::Variable_IDContext* MixedDrinksParser::DeclarationContext::variable_ID() {
  return getRuleContext<MixedDrinksParser::Variable_IDContext>(0);
}


size_t MixedDrinksParser::DeclarationContext::getRuleIndex() const {
  return MixedDrinksParser::RuleDeclaration;
}

antlrcpp::Any MixedDrinksParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MixedDrinksVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

MixedDrinksParser::DeclarationContext* MixedDrinksParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 14, MixedDrinksParser::RuleDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(99);
    typeID();
    setState(100);
    variable_ID();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Variable_IDContext ------------------------------------------------------------------

MixedDrinksParser::Variable_IDContext::Variable_IDContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MixedDrinksParser::Variable_IDContext::IDENTIFIER() {
  return getToken(MixedDrinksParser::IDENTIFIER, 0);
}


size_t MixedDrinksParser::Variable_IDContext::getRuleIndex() const {
  return MixedDrinksParser::RuleVariable_ID;
}

antlrcpp::Any MixedDrinksParser::Variable_IDContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MixedDrinksVisitor*>(visitor))
    return parserVisitor->visitVariable_ID(this);
  else
    return visitor->visitChildren(this);
}

MixedDrinksParser::Variable_IDContext* MixedDrinksParser::variable_ID() {
  Variable_IDContext *_localctx = _tracker.createInstance<Variable_IDContext>(_ctx, getState());
  enterRule(_localctx, 16, MixedDrinksParser::RuleVariable_ID);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(102);
    match(MixedDrinksParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Repeat_statementContext ------------------------------------------------------------------

MixedDrinksParser::Repeat_statementContext::Repeat_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MixedDrinksParser::Repeat_statementContext::REPEAT() {
  return getToken(MixedDrinksParser::REPEAT, 0);
}

MixedDrinksParser::Statement_listContext* MixedDrinksParser::Repeat_statementContext::statement_list() {
  return getRuleContext<MixedDrinksParser::Statement_listContext>(0);
}

tree::TerminalNode* MixedDrinksParser::Repeat_statementContext::UNTIL() {
  return getToken(MixedDrinksParser::UNTIL, 0);
}

MixedDrinksParser::ExprContext* MixedDrinksParser::Repeat_statementContext::expr() {
  return getRuleContext<MixedDrinksParser::ExprContext>(0);
}


size_t MixedDrinksParser::Repeat_statementContext::getRuleIndex() const {
  return MixedDrinksParser::RuleRepeat_statement;
}

antlrcpp::Any MixedDrinksParser::Repeat_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MixedDrinksVisitor*>(visitor))
    return parserVisitor->visitRepeat_statement(this);
  else
    return visitor->visitChildren(this);
}

MixedDrinksParser::Repeat_statementContext* MixedDrinksParser::repeat_statement() {
  Repeat_statementContext *_localctx = _tracker.createInstance<Repeat_statementContext>(_ctx, getState());
  enterRule(_localctx, 18, MixedDrinksParser::RuleRepeat_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(104);
    match(MixedDrinksParser::REPEAT);
    setState(105);
    match(MixedDrinksParser::T__4);
    setState(106);
    statement_list();
    setState(107);
    match(MixedDrinksParser::T__5);
    setState(108);
    match(MixedDrinksParser::UNTIL);
    setState(109);
    expr(0);
    setState(110);
    match(MixedDrinksParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Statement_listContext ------------------------------------------------------------------

MixedDrinksParser::Statement_listContext::Statement_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MixedDrinksParser::StmtContext *> MixedDrinksParser::Statement_listContext::stmt() {
  return getRuleContexts<MixedDrinksParser::StmtContext>();
}

MixedDrinksParser::StmtContext* MixedDrinksParser::Statement_listContext::stmt(size_t i) {
  return getRuleContext<MixedDrinksParser::StmtContext>(i);
}


size_t MixedDrinksParser::Statement_listContext::getRuleIndex() const {
  return MixedDrinksParser::RuleStatement_list;
}

antlrcpp::Any MixedDrinksParser::Statement_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MixedDrinksVisitor*>(visitor))
    return parserVisitor->visitStatement_list(this);
  else
    return visitor->visitChildren(this);
}

MixedDrinksParser::Statement_listContext* MixedDrinksParser::statement_list() {
  Statement_listContext *_localctx = _tracker.createInstance<Statement_listContext>(_ctx, getState());
  enterRule(_localctx, 20, MixedDrinksParser::RuleStatement_list);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(113); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(112);
              stmt();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(115); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Print_statementContext ------------------------------------------------------------------

MixedDrinksParser::Print_statementContext::Print_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MixedDrinksParser::Print_statementContext::PRINT() {
  return getToken(MixedDrinksParser::PRINT, 0);
}

MixedDrinksParser::OutputContext* MixedDrinksParser::Print_statementContext::output() {
  return getRuleContext<MixedDrinksParser::OutputContext>(0);
}


size_t MixedDrinksParser::Print_statementContext::getRuleIndex() const {
  return MixedDrinksParser::RulePrint_statement;
}

antlrcpp::Any MixedDrinksParser::Print_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MixedDrinksVisitor*>(visitor))
    return parserVisitor->visitPrint_statement(this);
  else
    return visitor->visitChildren(this);
}

MixedDrinksParser::Print_statementContext* MixedDrinksParser::print_statement() {
  Print_statementContext *_localctx = _tracker.createInstance<Print_statementContext>(_ctx, getState());
  enterRule(_localctx, 22, MixedDrinksParser::RulePrint_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(117);
    match(MixedDrinksParser::PRINT);
    setState(118);
    match(MixedDrinksParser::T__0);
    setState(119);
    output();
    setState(120);
    match(MixedDrinksParser::T__2);
    setState(121);
    match(MixedDrinksParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OutputContext ------------------------------------------------------------------

MixedDrinksParser::OutputContext::OutputContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MixedDrinksParser::ExprContext* MixedDrinksParser::OutputContext::expr() {
  return getRuleContext<MixedDrinksParser::ExprContext>(0);
}

MixedDrinksParser::DrinkNamesContext* MixedDrinksParser::OutputContext::drinkNames() {
  return getRuleContext<MixedDrinksParser::DrinkNamesContext>(0);
}


size_t MixedDrinksParser::OutputContext::getRuleIndex() const {
  return MixedDrinksParser::RuleOutput;
}

antlrcpp::Any MixedDrinksParser::OutputContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MixedDrinksVisitor*>(visitor))
    return parserVisitor->visitOutput(this);
  else
    return visitor->visitChildren(this);
}

MixedDrinksParser::OutputContext* MixedDrinksParser::output() {
  OutputContext *_localctx = _tracker.createInstance<OutputContext>(_ctx, getState());
  enterRule(_localctx, 24, MixedDrinksParser::RuleOutput);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(125);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MixedDrinksParser::T__0:
      case MixedDrinksParser::IDENTIFIER:
      case MixedDrinksParser::INTEGER:
      case MixedDrinksParser::CHARACTER: {
        enterOuterAlt(_localctx, 1);
        setState(123);
        expr(0);
        break;
      }

      case MixedDrinksParser::STRING: {
        enterOuterAlt(_localctx, 2);
        setState(124);
        drinkNames();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifiersContext ------------------------------------------------------------------

MixedDrinksParser::IdentifiersContext::IdentifiersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MixedDrinksParser::ExprContext *> MixedDrinksParser::IdentifiersContext::expr() {
  return getRuleContexts<MixedDrinksParser::ExprContext>();
}

MixedDrinksParser::ExprContext* MixedDrinksParser::IdentifiersContext::expr(size_t i) {
  return getRuleContext<MixedDrinksParser::ExprContext>(i);
}


size_t MixedDrinksParser::IdentifiersContext::getRuleIndex() const {
  return MixedDrinksParser::RuleIdentifiers;
}

antlrcpp::Any MixedDrinksParser::IdentifiersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MixedDrinksVisitor*>(visitor))
    return parserVisitor->visitIdentifiers(this);
  else
    return visitor->visitChildren(this);
}

MixedDrinksParser::IdentifiersContext* MixedDrinksParser::identifiers() {
  IdentifiersContext *_localctx = _tracker.createInstance<IdentifiersContext>(_ctx, getState());
  enterRule(_localctx, 26, MixedDrinksParser::RuleIdentifiers);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(127);
    expr(0);
    setState(132);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MixedDrinksParser::T__1) {
      setState(128);
      match(MixedDrinksParser::T__1);
      setState(129);
      expr(0);
      setState(134);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

MixedDrinksParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MixedDrinksParser::ExprContext::getRuleIndex() const {
  return MixedDrinksParser::RuleExpr;
}

void MixedDrinksParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
  this->type = ctx->type;
}

//----------------- DrinkExpressionContext ------------------------------------------------------------------

MixedDrinksParser::DrinkContext* MixedDrinksParser::DrinkExpressionContext::drink() {
  return getRuleContext<MixedDrinksParser::DrinkContext>(0);
}

MixedDrinksParser::DrinkExpressionContext::DrinkExpressionContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any MixedDrinksParser::DrinkExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MixedDrinksVisitor*>(visitor))
    return parserVisitor->visitDrinkExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParensContext ------------------------------------------------------------------

MixedDrinksParser::ExprContext* MixedDrinksParser::ParensContext::expr() {
  return getRuleContext<MixedDrinksParser::ExprContext>(0);
}

MixedDrinksParser::ParensContext::ParensContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any MixedDrinksParser::ParensContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MixedDrinksVisitor*>(visitor))
    return parserVisitor->visitParens(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddSubExprContext ------------------------------------------------------------------

std::vector<MixedDrinksParser::ExprContext *> MixedDrinksParser::AddSubExprContext::expr() {
  return getRuleContexts<MixedDrinksParser::ExprContext>();
}

MixedDrinksParser::ExprContext* MixedDrinksParser::AddSubExprContext::expr(size_t i) {
  return getRuleContext<MixedDrinksParser::ExprContext>(i);
}

MixedDrinksParser::Add_sub_opContext* MixedDrinksParser::AddSubExprContext::add_sub_op() {
  return getRuleContext<MixedDrinksParser::Add_sub_opContext>(0);
}

MixedDrinksParser::AddSubExprContext::AddSubExprContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any MixedDrinksParser::AddSubExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MixedDrinksVisitor*>(visitor))
    return parserVisitor->visitAddSubExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumberExpressionContext ------------------------------------------------------------------

MixedDrinksParser::NumberContext* MixedDrinksParser::NumberExpressionContext::number() {
  return getRuleContext<MixedDrinksParser::NumberContext>(0);
}

MixedDrinksParser::NumberExpressionContext::NumberExpressionContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any MixedDrinksParser::NumberExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MixedDrinksVisitor*>(visitor))
    return parserVisitor->visitNumberExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RelExprContext ------------------------------------------------------------------

std::vector<MixedDrinksParser::ExprContext *> MixedDrinksParser::RelExprContext::expr() {
  return getRuleContexts<MixedDrinksParser::ExprContext>();
}

MixedDrinksParser::ExprContext* MixedDrinksParser::RelExprContext::expr(size_t i) {
  return getRuleContext<MixedDrinksParser::ExprContext>(i);
}

MixedDrinksParser::Rel_opContext* MixedDrinksParser::RelExprContext::rel_op() {
  return getRuleContext<MixedDrinksParser::Rel_opContext>(0);
}

MixedDrinksParser::RelExprContext::RelExprContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any MixedDrinksParser::RelExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MixedDrinksVisitor*>(visitor))
    return parserVisitor->visitRelExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulDivExprContext ------------------------------------------------------------------

std::vector<MixedDrinksParser::ExprContext *> MixedDrinksParser::MulDivExprContext::expr() {
  return getRuleContexts<MixedDrinksParser::ExprContext>();
}

MixedDrinksParser::ExprContext* MixedDrinksParser::MulDivExprContext::expr(size_t i) {
  return getRuleContext<MixedDrinksParser::ExprContext>(i);
}

MixedDrinksParser::Mul_div_opContext* MixedDrinksParser::MulDivExprContext::mul_div_op() {
  return getRuleContext<MixedDrinksParser::Mul_div_opContext>(0);
}

MixedDrinksParser::MulDivExprContext::MulDivExprContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any MixedDrinksParser::MulDivExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MixedDrinksVisitor*>(visitor))
    return parserVisitor->visitMulDivExpr(this);
  else
    return visitor->visitChildren(this);
}

MixedDrinksParser::ExprContext* MixedDrinksParser::expr() {
   return expr(0);
}

MixedDrinksParser::ExprContext* MixedDrinksParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  MixedDrinksParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  MixedDrinksParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 28;
  enterRecursionRule(_localctx, 28, MixedDrinksParser::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(142);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MixedDrinksParser::IDENTIFIER: {
        _localctx = _tracker.createInstance<DrinkExpressionContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(136);
        drink();
        break;
      }

      case MixedDrinksParser::INTEGER:
      case MixedDrinksParser::CHARACTER: {
        _localctx = _tracker.createInstance<NumberExpressionContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(137);
        number();
        break;
      }

      case MixedDrinksParser::T__0: {
        _localctx = _tracker.createInstance<ParensContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(138);
        match(MixedDrinksParser::T__0);
        setState(139);
        expr(0);
        setState(140);
        match(MixedDrinksParser::T__2);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(158);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(156);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulDivExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(144);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(145);
          mul_div_op();
          setState(146);
          expr(7);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddSubExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(148);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(149);
          add_sub_op();
          setState(150);
          expr(6);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<RelExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(152);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(153);
          rel_op();
          setState(154);
          expr(5);
          break;
        }

        } 
      }
      setState(160);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

MixedDrinksParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MixedDrinksParser::NumberContext::getRuleIndex() const {
  return MixedDrinksParser::RuleNumber;
}

void MixedDrinksParser::NumberContext::copyFrom(NumberContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
  this->type = ctx->type;
}

//----------------- Integer_constantContext ------------------------------------------------------------------

tree::TerminalNode* MixedDrinksParser::Integer_constantContext::INTEGER() {
  return getToken(MixedDrinksParser::INTEGER, 0);
}

MixedDrinksParser::Integer_constantContext::Integer_constantContext(NumberContext *ctx) { copyFrom(ctx); }

antlrcpp::Any MixedDrinksParser::Integer_constantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MixedDrinksVisitor*>(visitor))
    return parserVisitor->visitInteger_constant(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Character_constantContext ------------------------------------------------------------------

tree::TerminalNode* MixedDrinksParser::Character_constantContext::CHARACTER() {
  return getToken(MixedDrinksParser::CHARACTER, 0);
}

MixedDrinksParser::Character_constantContext::Character_constantContext(NumberContext *ctx) { copyFrom(ctx); }

antlrcpp::Any MixedDrinksParser::Character_constantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MixedDrinksVisitor*>(visitor))
    return parserVisitor->visitCharacter_constant(this);
  else
    return visitor->visitChildren(this);
}
MixedDrinksParser::NumberContext* MixedDrinksParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 30, MixedDrinksParser::RuleNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(163);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MixedDrinksParser::INTEGER: {
        _localctx = dynamic_cast<NumberContext *>(_tracker.createInstance<MixedDrinksParser::Integer_constantContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(161);
        match(MixedDrinksParser::INTEGER);
        break;
      }

      case MixedDrinksParser::CHARACTER: {
        _localctx = dynamic_cast<NumberContext *>(_tracker.createInstance<MixedDrinksParser::Character_constantContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(162);
        match(MixedDrinksParser::CHARACTER);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DrinkNamesContext ------------------------------------------------------------------

MixedDrinksParser::DrinkNamesContext::DrinkNamesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MixedDrinksParser::DrinkNamesContext::STRING() {
  return getToken(MixedDrinksParser::STRING, 0);
}


size_t MixedDrinksParser::DrinkNamesContext::getRuleIndex() const {
  return MixedDrinksParser::RuleDrinkNames;
}

antlrcpp::Any MixedDrinksParser::DrinkNamesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MixedDrinksVisitor*>(visitor))
    return parserVisitor->visitDrinkNames(this);
  else
    return visitor->visitChildren(this);
}

MixedDrinksParser::DrinkNamesContext* MixedDrinksParser::drinkNames() {
  DrinkNamesContext *_localctx = _tracker.createInstance<DrinkNamesContext>(_ctx, getState());
  enterRule(_localctx, 32, MixedDrinksParser::RuleDrinkNames);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(165);
    match(MixedDrinksParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeIDContext ------------------------------------------------------------------

MixedDrinksParser::TypeIDContext::TypeIDContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MixedDrinksParser::TypeIDContext::IDENTIFIER() {
  return getToken(MixedDrinksParser::IDENTIFIER, 0);
}

tree::TerminalNode* MixedDrinksParser::TypeIDContext::CHAR() {
  return getToken(MixedDrinksParser::CHAR, 0);
}

tree::TerminalNode* MixedDrinksParser::TypeIDContext::INT() {
  return getToken(MixedDrinksParser::INT, 0);
}


size_t MixedDrinksParser::TypeIDContext::getRuleIndex() const {
  return MixedDrinksParser::RuleTypeID;
}

antlrcpp::Any MixedDrinksParser::TypeIDContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MixedDrinksVisitor*>(visitor))
    return parserVisitor->visitTypeID(this);
  else
    return visitor->visitChildren(this);
}

MixedDrinksParser::TypeIDContext* MixedDrinksParser::typeID() {
  TypeIDContext *_localctx = _tracker.createInstance<TypeIDContext>(_ctx, getState());
  enterRule(_localctx, 34, MixedDrinksParser::RuleTypeID);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(167);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MixedDrinksParser::INT)
      | (1ULL << MixedDrinksParser::CHAR)
      | (1ULL << MixedDrinksParser::IDENTIFIER))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DrinkContext ------------------------------------------------------------------

MixedDrinksParser::DrinkContext::DrinkContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MixedDrinksParser::DrinkContext::IDENTIFIER() {
  return getToken(MixedDrinksParser::IDENTIFIER, 0);
}


size_t MixedDrinksParser::DrinkContext::getRuleIndex() const {
  return MixedDrinksParser::RuleDrink;
}

antlrcpp::Any MixedDrinksParser::DrinkContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MixedDrinksVisitor*>(visitor))
    return parserVisitor->visitDrink(this);
  else
    return visitor->visitChildren(this);
}

MixedDrinksParser::DrinkContext* MixedDrinksParser::drink() {
  DrinkContext *_localctx = _tracker.createInstance<DrinkContext>(_ctx, getState());
  enterRule(_localctx, 36, MixedDrinksParser::RuleDrink);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(169);
    match(MixedDrinksParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Mul_div_opContext ------------------------------------------------------------------

MixedDrinksParser::Mul_div_opContext::Mul_div_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MixedDrinksParser::Mul_div_opContext::MUL_OP() {
  return getToken(MixedDrinksParser::MUL_OP, 0);
}

tree::TerminalNode* MixedDrinksParser::Mul_div_opContext::DIV_OP() {
  return getToken(MixedDrinksParser::DIV_OP, 0);
}


size_t MixedDrinksParser::Mul_div_opContext::getRuleIndex() const {
  return MixedDrinksParser::RuleMul_div_op;
}

antlrcpp::Any MixedDrinksParser::Mul_div_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MixedDrinksVisitor*>(visitor))
    return parserVisitor->visitMul_div_op(this);
  else
    return visitor->visitChildren(this);
}

MixedDrinksParser::Mul_div_opContext* MixedDrinksParser::mul_div_op() {
  Mul_div_opContext *_localctx = _tracker.createInstance<Mul_div_opContext>(_ctx, getState());
  enterRule(_localctx, 38, MixedDrinksParser::RuleMul_div_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(171);
    _la = _input->LA(1);
    if (!(_la == MixedDrinksParser::MUL_OP

    || _la == MixedDrinksParser::DIV_OP)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Add_sub_opContext ------------------------------------------------------------------

MixedDrinksParser::Add_sub_opContext::Add_sub_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MixedDrinksParser::Add_sub_opContext::ADD_OP() {
  return getToken(MixedDrinksParser::ADD_OP, 0);
}

tree::TerminalNode* MixedDrinksParser::Add_sub_opContext::SUB_OP() {
  return getToken(MixedDrinksParser::SUB_OP, 0);
}


size_t MixedDrinksParser::Add_sub_opContext::getRuleIndex() const {
  return MixedDrinksParser::RuleAdd_sub_op;
}

antlrcpp::Any MixedDrinksParser::Add_sub_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MixedDrinksVisitor*>(visitor))
    return parserVisitor->visitAdd_sub_op(this);
  else
    return visitor->visitChildren(this);
}

MixedDrinksParser::Add_sub_opContext* MixedDrinksParser::add_sub_op() {
  Add_sub_opContext *_localctx = _tracker.createInstance<Add_sub_opContext>(_ctx, getState());
  enterRule(_localctx, 40, MixedDrinksParser::RuleAdd_sub_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(173);
    _la = _input->LA(1);
    if (!(_la == MixedDrinksParser::ADD_OP

    || _la == MixedDrinksParser::SUB_OP)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Rel_opContext ------------------------------------------------------------------

MixedDrinksParser::Rel_opContext::Rel_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MixedDrinksParser::Rel_opContext::EQ_OP() {
  return getToken(MixedDrinksParser::EQ_OP, 0);
}

tree::TerminalNode* MixedDrinksParser::Rel_opContext::NE_OP() {
  return getToken(MixedDrinksParser::NE_OP, 0);
}

tree::TerminalNode* MixedDrinksParser::Rel_opContext::LT_OP() {
  return getToken(MixedDrinksParser::LT_OP, 0);
}

tree::TerminalNode* MixedDrinksParser::Rel_opContext::LE_OP() {
  return getToken(MixedDrinksParser::LE_OP, 0);
}

tree::TerminalNode* MixedDrinksParser::Rel_opContext::GT_OP() {
  return getToken(MixedDrinksParser::GT_OP, 0);
}

tree::TerminalNode* MixedDrinksParser::Rel_opContext::GE_OP() {
  return getToken(MixedDrinksParser::GE_OP, 0);
}


size_t MixedDrinksParser::Rel_opContext::getRuleIndex() const {
  return MixedDrinksParser::RuleRel_op;
}

antlrcpp::Any MixedDrinksParser::Rel_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MixedDrinksVisitor*>(visitor))
    return parserVisitor->visitRel_op(this);
  else
    return visitor->visitChildren(this);
}

MixedDrinksParser::Rel_opContext* MixedDrinksParser::rel_op() {
  Rel_opContext *_localctx = _tracker.createInstance<Rel_opContext>(_ctx, getState());
  enterRule(_localctx, 42, MixedDrinksParser::RuleRel_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(175);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MixedDrinksParser::EQ_OP)
      | (1ULL << MixedDrinksParser::NE_OP)
      | (1ULL << MixedDrinksParser::LT_OP)
      | (1ULL << MixedDrinksParser::LE_OP)
      | (1ULL << MixedDrinksParser::GT_OP)
      | (1ULL << MixedDrinksParser::GE_OP))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool MixedDrinksParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 14: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool MixedDrinksParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 6);
    case 1: return precpred(_ctx, 5);
    case 2: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> MixedDrinksParser::_decisionToDFA;
atn::PredictionContextCache MixedDrinksParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN MixedDrinksParser::_atn;
std::vector<uint16_t> MixedDrinksParser::_serializedATN;

std::vector<std::string> MixedDrinksParser::_ruleNames = {
  "prog", "main", "block", "stmt", "if_stmt", "assignment_stmt", "declaration_stmt", 
  "declaration", "variable_ID", "repeat_statement", "statement_list", "print_statement", 
  "output", "identifiers", "expr", "number", "drinkNames", "typeID", "drink", 
  "mul_div_op", "add_sub_op", "rel_op"
};

std::vector<std::string> MixedDrinksParser::_literalNames = {
  "", "'('", "','", "')'", "'~'", "'{'", "'}'", "'MIXED_DRINKS'", "'START'", 
  "'STOP'", "'CHUG'", "'UNTIL'", "'DRUNK'", "'DO'", "'SOBER'", "'SHOTS'", 
  "'SPRITS'", "'SPILL'", "", "", "", "", "'*'", "'/'", "'+'", "'-'", "'='", 
  "'<>'", "'<'", "'<='", "'>'", "'>='"
};

std::vector<std::string> MixedDrinksParser::_symbolicNames = {
  "", "", "", "", "", "", "", "MIXED_DRINKS", "BEGIN", "END", "REPEAT", 
  "UNTIL", "IF", "THEN", "ELSE", "INT", "CHAR", "PRINT", "IDENTIFIER", "INTEGER", 
  "CHARACTER", "STRING", "MUL_OP", "DIV_OP", "ADD_OP", "SUB_OP", "EQ_OP", 
  "NE_OP", "LT_OP", "LE_OP", "GT_OP", "GE_OP", "NEWLINE", "WS"
};

dfa::Vocabulary MixedDrinksParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> MixedDrinksParser::_tokenNames;

MixedDrinksParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x23, 0xb4, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 0x9, 
    0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x3, 0x2, 0x3, 0x2, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x3a, 0xa, 0x3, 0x7, 0x3, 0x3c, 0xa, 0x3, 
    0xc, 0x3, 0xe, 0x3, 0x3f, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x50, 0xa, 0x5, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x5c, 0xa, 0x6, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x6, 
    0xc, 0x74, 0xa, 0xc, 0xd, 0xc, 0xe, 0xc, 0x75, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x80, 
    0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0x85, 0xa, 0xf, 0xc, 
    0xf, 0xe, 0xf, 0x88, 0xb, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x91, 0xa, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0x9f, 
    0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0xa2, 0xb, 0x10, 0x3, 0x11, 0x3, 0x11, 
    0x5, 0x11, 0xa6, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 
    0x17, 0x3, 0x17, 0x3, 0x17, 0x2, 0x3, 0x1e, 0x18, 0x2, 0x4, 0x6, 0x8, 
    0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 
    0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2, 0x6, 0x4, 0x2, 0x11, 0x12, 
    0x14, 0x14, 0x3, 0x2, 0x18, 0x19, 0x3, 0x2, 0x1a, 0x1b, 0x3, 0x2, 0x1c, 
    0x21, 0x2, 0xaf, 0x2, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x4, 0x32, 0x3, 0x2, 
    0x2, 0x2, 0x6, 0x42, 0x3, 0x2, 0x2, 0x2, 0x8, 0x4f, 0x3, 0x2, 0x2, 0x2, 
    0xa, 0x51, 0x3, 0x2, 0x2, 0x2, 0xc, 0x5d, 0x3, 0x2, 0x2, 0x2, 0xe, 0x61, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0x65, 0x3, 0x2, 0x2, 0x2, 0x12, 0x68, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x16, 0x73, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0x77, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x7f, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0x81, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x90, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x22, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x24, 
    0xa9, 0x3, 0x2, 0x2, 0x2, 0x26, 0xab, 0x3, 0x2, 0x2, 0x2, 0x28, 0xad, 
    0x3, 0x2, 0x2, 0x2, 0x2a, 0xaf, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xb1, 0x3, 
    0x2, 0x2, 0x2, 0x2e, 0x2f, 0x5, 0x4, 0x3, 0x2, 0x2f, 0x30, 0x5, 0x6, 
    0x4, 0x2, 0x30, 0x31, 0x7, 0xb, 0x2, 0x2, 0x31, 0x3, 0x3, 0x2, 0x2, 
    0x2, 0x32, 0x33, 0x5, 0x24, 0x13, 0x2, 0x33, 0x34, 0x7, 0x9, 0x2, 0x2, 
    0x34, 0x3d, 0x7, 0x3, 0x2, 0x2, 0x35, 0x36, 0x5, 0x24, 0x13, 0x2, 0x36, 
    0x37, 0x7, 0x14, 0x2, 0x2, 0x37, 0x39, 0x3, 0x2, 0x2, 0x2, 0x38, 0x3a, 
    0x7, 0x4, 0x2, 0x2, 0x39, 0x38, 0x3, 0x2, 0x2, 0x2, 0x39, 0x3a, 0x3, 
    0x2, 0x2, 0x2, 0x3a, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x35, 0x3, 0x2, 
    0x2, 0x2, 0x3c, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3b, 0x3, 0x2, 0x2, 
    0x2, 0x3d, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x40, 0x3, 0x2, 0x2, 0x2, 
    0x3f, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x40, 0x41, 0x7, 0x5, 0x2, 0x2, 0x41, 
    0x5, 0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x5, 0x16, 0xc, 0x2, 0x43, 0x7, 
    0x3, 0x2, 0x2, 0x2, 0x44, 0x45, 0x5, 0xc, 0x7, 0x2, 0x45, 0x46, 0x7, 
    0x6, 0x2, 0x2, 0x46, 0x50, 0x3, 0x2, 0x2, 0x2, 0x47, 0x48, 0x5, 0xe, 
    0x8, 0x2, 0x48, 0x49, 0x7, 0x6, 0x2, 0x2, 0x49, 0x50, 0x3, 0x2, 0x2, 
    0x2, 0x4a, 0x50, 0x5, 0xa, 0x6, 0x2, 0x4b, 0x50, 0x5, 0xc, 0x7, 0x2, 
    0x4c, 0x50, 0x5, 0x14, 0xb, 0x2, 0x4d, 0x50, 0x5, 0xe, 0x8, 0x2, 0x4e, 
    0x50, 0x5, 0x18, 0xd, 0x2, 0x4f, 0x44, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x47, 
    0x3, 0x2, 0x2, 0x2, 0x4f, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x4b, 0x3, 
    0x2, 0x2, 0x2, 0x4f, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x4d, 0x3, 0x2, 
    0x2, 0x2, 0x4f, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x50, 0x9, 0x3, 0x2, 0x2, 
    0x2, 0x51, 0x52, 0x7, 0xe, 0x2, 0x2, 0x52, 0x53, 0x7, 0x3, 0x2, 0x2, 
    0x53, 0x54, 0x5, 0x1e, 0x10, 0x2, 0x54, 0x55, 0x7, 0x5, 0x2, 0x2, 0x55, 
    0x56, 0x7, 0xf, 0x2, 0x2, 0x56, 0x57, 0x7, 0x7, 0x2, 0x2, 0x57, 0x58, 
    0x5, 0x16, 0xc, 0x2, 0x58, 0x5b, 0x7, 0x8, 0x2, 0x2, 0x59, 0x5a, 0x7, 
    0x10, 0x2, 0x2, 0x5a, 0x5c, 0x5, 0x16, 0xc, 0x2, 0x5b, 0x59, 0x3, 0x2, 
    0x2, 0x2, 0x5b, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x5c, 0xb, 0x3, 0x2, 0x2, 
    0x2, 0x5d, 0x5e, 0x5, 0x26, 0x14, 0x2, 0x5e, 0x5f, 0x7, 0x1c, 0x2, 0x2, 
    0x5f, 0x60, 0x5, 0x1e, 0x10, 0x2, 0x60, 0xd, 0x3, 0x2, 0x2, 0x2, 0x61, 
    0x62, 0x5, 0x10, 0x9, 0x2, 0x62, 0x63, 0x7, 0x1c, 0x2, 0x2, 0x63, 0x64, 
    0x5, 0x1e, 0x10, 0x2, 0x64, 0xf, 0x3, 0x2, 0x2, 0x2, 0x65, 0x66, 0x5, 
    0x24, 0x13, 0x2, 0x66, 0x67, 0x5, 0x12, 0xa, 0x2, 0x67, 0x11, 0x3, 0x2, 
    0x2, 0x2, 0x68, 0x69, 0x7, 0x14, 0x2, 0x2, 0x69, 0x13, 0x3, 0x2, 0x2, 
    0x2, 0x6a, 0x6b, 0x7, 0xc, 0x2, 0x2, 0x6b, 0x6c, 0x7, 0x7, 0x2, 0x2, 
    0x6c, 0x6d, 0x5, 0x16, 0xc, 0x2, 0x6d, 0x6e, 0x7, 0x8, 0x2, 0x2, 0x6e, 
    0x6f, 0x7, 0xd, 0x2, 0x2, 0x6f, 0x70, 0x5, 0x1e, 0x10, 0x2, 0x70, 0x71, 
    0x7, 0x6, 0x2, 0x2, 0x71, 0x15, 0x3, 0x2, 0x2, 0x2, 0x72, 0x74, 0x5, 
    0x8, 0x5, 0x2, 0x73, 0x72, 0x3, 0x2, 0x2, 0x2, 0x74, 0x75, 0x3, 0x2, 
    0x2, 0x2, 0x75, 0x73, 0x3, 0x2, 0x2, 0x2, 0x75, 0x76, 0x3, 0x2, 0x2, 
    0x2, 0x76, 0x17, 0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 0x7, 0x13, 0x2, 0x2, 
    0x78, 0x79, 0x7, 0x3, 0x2, 0x2, 0x79, 0x7a, 0x5, 0x1a, 0xe, 0x2, 0x7a, 
    0x7b, 0x7, 0x5, 0x2, 0x2, 0x7b, 0x7c, 0x7, 0x6, 0x2, 0x2, 0x7c, 0x19, 
    0x3, 0x2, 0x2, 0x2, 0x7d, 0x80, 0x5, 0x1e, 0x10, 0x2, 0x7e, 0x80, 0x5, 
    0x22, 0x12, 0x2, 0x7f, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x7e, 0x3, 0x2, 
    0x2, 0x2, 0x80, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x81, 0x86, 0x5, 0x1e, 0x10, 
    0x2, 0x82, 0x83, 0x7, 0x4, 0x2, 0x2, 0x83, 0x85, 0x5, 0x1e, 0x10, 0x2, 
    0x84, 0x82, 0x3, 0x2, 0x2, 0x2, 0x85, 0x88, 0x3, 0x2, 0x2, 0x2, 0x86, 
    0x84, 0x3, 0x2, 0x2, 0x2, 0x86, 0x87, 0x3, 0x2, 0x2, 0x2, 0x87, 0x1d, 
    0x3, 0x2, 0x2, 0x2, 0x88, 0x86, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8a, 0x8, 
    0x10, 0x1, 0x2, 0x8a, 0x91, 0x5, 0x26, 0x14, 0x2, 0x8b, 0x91, 0x5, 0x20, 
    0x11, 0x2, 0x8c, 0x8d, 0x7, 0x3, 0x2, 0x2, 0x8d, 0x8e, 0x5, 0x1e, 0x10, 
    0x2, 0x8e, 0x8f, 0x7, 0x5, 0x2, 0x2, 0x8f, 0x91, 0x3, 0x2, 0x2, 0x2, 
    0x90, 0x89, 0x3, 0x2, 0x2, 0x2, 0x90, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x90, 
    0x8c, 0x3, 0x2, 0x2, 0x2, 0x91, 0xa0, 0x3, 0x2, 0x2, 0x2, 0x92, 0x93, 
    0xc, 0x8, 0x2, 0x2, 0x93, 0x94, 0x5, 0x28, 0x15, 0x2, 0x94, 0x95, 0x5, 
    0x1e, 0x10, 0x9, 0x95, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x96, 0x97, 0xc, 0x7, 
    0x2, 0x2, 0x97, 0x98, 0x5, 0x2a, 0x16, 0x2, 0x98, 0x99, 0x5, 0x1e, 0x10, 
    0x8, 0x99, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 0xc, 0x6, 0x2, 0x2, 
    0x9b, 0x9c, 0x5, 0x2c, 0x17, 0x2, 0x9c, 0x9d, 0x5, 0x1e, 0x10, 0x7, 
    0x9d, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x92, 0x3, 0x2, 0x2, 0x2, 0x9e, 
    0x96, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa2, 
    0x3, 0x2, 0x2, 0x2, 0xa0, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa1, 0x3, 
    0x2, 0x2, 0x2, 0xa1, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa0, 0x3, 0x2, 
    0x2, 0x2, 0xa3, 0xa6, 0x7, 0x15, 0x2, 0x2, 0xa4, 0xa6, 0x7, 0x16, 0x2, 
    0x2, 0xa5, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa4, 0x3, 0x2, 0x2, 0x2, 
    0xa6, 0x21, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa8, 0x7, 0x17, 0x2, 0x2, 0xa8, 
    0x23, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xaa, 0x9, 0x2, 0x2, 0x2, 0xaa, 0x25, 
    0x3, 0x2, 0x2, 0x2, 0xab, 0xac, 0x7, 0x14, 0x2, 0x2, 0xac, 0x27, 0x3, 
    0x2, 0x2, 0x2, 0xad, 0xae, 0x9, 0x3, 0x2, 0x2, 0xae, 0x29, 0x3, 0x2, 
    0x2, 0x2, 0xaf, 0xb0, 0x9, 0x4, 0x2, 0x2, 0xb0, 0x2b, 0x3, 0x2, 0x2, 
    0x2, 0xb1, 0xb2, 0x9, 0x5, 0x2, 0x2, 0xb2, 0x2d, 0x3, 0x2, 0x2, 0x2, 
    0xd, 0x39, 0x3d, 0x4f, 0x5b, 0x75, 0x7f, 0x86, 0x90, 0x9e, 0xa0, 0xa5, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

MixedDrinksParser::Initializer MixedDrinksParser::_init;
