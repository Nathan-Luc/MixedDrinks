
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

MixedDrinksParser::Function_listContext* MixedDrinksParser::ProgContext::function_list() {
  return getRuleContext<MixedDrinksParser::Function_listContext>(0);
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
    setState(57);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      setState(56);
      function_list();
      break;
    }

    }
    setState(59);
    main();
    setState(60);
    block();
    setState(61);
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
    setState(63);
    typeID();
    setState(64);
    match(MixedDrinksParser::MIXED_DRINKS);
    setState(65);
    match(MixedDrinksParser::T__0);
    setState(74);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MixedDrinksParser::INT)
      | (1ULL << MixedDrinksParser::CHAR)
      | (1ULL << MixedDrinksParser::IDENTIFIER))) != 0)) {
      setState(66);
      typeID();
      setState(67);
      match(MixedDrinksParser::IDENTIFIER);
      setState(70);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MixedDrinksParser::T__1) {
        setState(69);
        match(MixedDrinksParser::T__1);
      }
      setState(76);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(77);
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

MixedDrinksParser::Function_listContext* MixedDrinksParser::BlockContext::function_list() {
  return getRuleContext<MixedDrinksParser::Function_listContext>(0);
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
    setState(81);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(79);
      statement_list();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(80);
      function_list();
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
  enterRule(_localctx, 6, MixedDrinksParser::RuleStatement_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(84); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(83);
      stmt();
      setState(86); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MixedDrinksParser::REPEAT)
      | (1ULL << MixedDrinksParser::IF)
      | (1ULL << MixedDrinksParser::INT)
      | (1ULL << MixedDrinksParser::CHAR)
      | (1ULL << MixedDrinksParser::PRINT)
      | (1ULL << MixedDrinksParser::RETURN)
      | (1ULL << MixedDrinksParser::IDENTIFIER))) != 0));
   
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

MixedDrinksParser::Return_statementContext* MixedDrinksParser::StmtContext::return_statement() {
  return getRuleContext<MixedDrinksParser::Return_statementContext>(0);
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
  enterRule(_localctx, 8, MixedDrinksParser::RuleStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(100);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(88);
      assignment_stmt();
      setState(89);
      match(MixedDrinksParser::T__3);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(91);
      declaration_stmt();
      setState(92);
      match(MixedDrinksParser::T__3);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(94);
      if_stmt();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(95);
      repeat_statement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(96);
      print_statement();
      setState(97);
      match(MixedDrinksParser::T__3);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(99);
      return_statement();
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

//----------------- Function_listContext ------------------------------------------------------------------

MixedDrinksParser::Function_listContext::Function_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MixedDrinksParser::FunctionsContext *> MixedDrinksParser::Function_listContext::functions() {
  return getRuleContexts<MixedDrinksParser::FunctionsContext>();
}

MixedDrinksParser::FunctionsContext* MixedDrinksParser::Function_listContext::functions(size_t i) {
  return getRuleContext<MixedDrinksParser::FunctionsContext>(i);
}


size_t MixedDrinksParser::Function_listContext::getRuleIndex() const {
  return MixedDrinksParser::RuleFunction_list;
}

antlrcpp::Any MixedDrinksParser::Function_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MixedDrinksVisitor*>(visitor))
    return parserVisitor->visitFunction_list(this);
  else
    return visitor->visitChildren(this);
}

MixedDrinksParser::Function_listContext* MixedDrinksParser::function_list() {
  Function_listContext *_localctx = _tracker.createInstance<Function_listContext>(_ctx, getState());
  enterRule(_localctx, 10, MixedDrinksParser::RuleFunction_list);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(105);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(102);
        functions(); 
      }
      setState(107);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionsContext ------------------------------------------------------------------

MixedDrinksParser::FunctionsContext::FunctionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MixedDrinksParser::Function_callContext* MixedDrinksParser::FunctionsContext::function_call() {
  return getRuleContext<MixedDrinksParser::Function_callContext>(0);
}

MixedDrinksParser::Function_defineContext* MixedDrinksParser::FunctionsContext::function_define() {
  return getRuleContext<MixedDrinksParser::Function_defineContext>(0);
}


size_t MixedDrinksParser::FunctionsContext::getRuleIndex() const {
  return MixedDrinksParser::RuleFunctions;
}

antlrcpp::Any MixedDrinksParser::FunctionsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MixedDrinksVisitor*>(visitor))
    return parserVisitor->visitFunctions(this);
  else
    return visitor->visitChildren(this);
}

MixedDrinksParser::FunctionsContext* MixedDrinksParser::functions() {
  FunctionsContext *_localctx = _tracker.createInstance<FunctionsContext>(_ctx, getState());
  enterRule(_localctx, 12, MixedDrinksParser::RuleFunctions);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(110);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(108);
      function_call();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(109);
      function_define();
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

//----------------- Function_callContext ------------------------------------------------------------------

MixedDrinksParser::Function_callContext::Function_callContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MixedDrinksParser::Function_IDContext* MixedDrinksParser::Function_callContext::function_ID() {
  return getRuleContext<MixedDrinksParser::Function_IDContext>(0);
}

MixedDrinksParser::IdentifiersContext* MixedDrinksParser::Function_callContext::identifiers() {
  return getRuleContext<MixedDrinksParser::IdentifiersContext>(0);
}


size_t MixedDrinksParser::Function_callContext::getRuleIndex() const {
  return MixedDrinksParser::RuleFunction_call;
}

antlrcpp::Any MixedDrinksParser::Function_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MixedDrinksVisitor*>(visitor))
    return parserVisitor->visitFunction_call(this);
  else
    return visitor->visitChildren(this);
}

MixedDrinksParser::Function_callContext* MixedDrinksParser::function_call() {
  Function_callContext *_localctx = _tracker.createInstance<Function_callContext>(_ctx, getState());
  enterRule(_localctx, 14, MixedDrinksParser::RuleFunction_call);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(112);
    function_ID();
    setState(113);
    match(MixedDrinksParser::T__0);
    setState(115);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MixedDrinksParser::T__0)
      | (1ULL << MixedDrinksParser::IDENTIFIER)
      | (1ULL << MixedDrinksParser::INTEGER)
      | (1ULL << MixedDrinksParser::CHARACTER))) != 0)) {
      setState(114);
      identifiers();
    }
    setState(117);
    match(MixedDrinksParser::T__2);
    setState(119);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      setState(118);
      match(MixedDrinksParser::T__3);
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

//----------------- Function_defineContext ------------------------------------------------------------------

MixedDrinksParser::Function_defineContext::Function_defineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MixedDrinksParser::TypeIDContext* MixedDrinksParser::Function_defineContext::typeID() {
  return getRuleContext<MixedDrinksParser::TypeIDContext>(0);
}

MixedDrinksParser::Function_IDContext* MixedDrinksParser::Function_defineContext::function_ID() {
  return getRuleContext<MixedDrinksParser::Function_IDContext>(0);
}

MixedDrinksParser::Statement_listContext* MixedDrinksParser::Function_defineContext::statement_list() {
  return getRuleContext<MixedDrinksParser::Statement_listContext>(0);
}

std::vector<MixedDrinksParser::DeclarationContext *> MixedDrinksParser::Function_defineContext::declaration() {
  return getRuleContexts<MixedDrinksParser::DeclarationContext>();
}

MixedDrinksParser::DeclarationContext* MixedDrinksParser::Function_defineContext::declaration(size_t i) {
  return getRuleContext<MixedDrinksParser::DeclarationContext>(i);
}


size_t MixedDrinksParser::Function_defineContext::getRuleIndex() const {
  return MixedDrinksParser::RuleFunction_define;
}

antlrcpp::Any MixedDrinksParser::Function_defineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MixedDrinksVisitor*>(visitor))
    return parserVisitor->visitFunction_define(this);
  else
    return visitor->visitChildren(this);
}

MixedDrinksParser::Function_defineContext* MixedDrinksParser::function_define() {
  Function_defineContext *_localctx = _tracker.createInstance<Function_defineContext>(_ctx, getState());
  enterRule(_localctx, 16, MixedDrinksParser::RuleFunction_define);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(121);
    typeID();
    setState(122);
    function_ID();
    setState(123);
    match(MixedDrinksParser::T__0);
    setState(130);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MixedDrinksParser::INT)
      | (1ULL << MixedDrinksParser::CHAR)
      | (1ULL << MixedDrinksParser::IDENTIFIER))) != 0)) {
      setState(124);
      declaration();
      setState(126);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MixedDrinksParser::T__1) {
        setState(125);
        match(MixedDrinksParser::T__1);
      }
      setState(132);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(133);
    match(MixedDrinksParser::T__2);
    setState(134);
    match(MixedDrinksParser::T__4);
    setState(135);
    statement_list();
    setState(136);
    match(MixedDrinksParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Return_statementContext ------------------------------------------------------------------

MixedDrinksParser::Return_statementContext::Return_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MixedDrinksParser::Return_statementContext::RETURN() {
  return getToken(MixedDrinksParser::RETURN, 0);
}

MixedDrinksParser::ExprContext* MixedDrinksParser::Return_statementContext::expr() {
  return getRuleContext<MixedDrinksParser::ExprContext>(0);
}


size_t MixedDrinksParser::Return_statementContext::getRuleIndex() const {
  return MixedDrinksParser::RuleReturn_statement;
}

antlrcpp::Any MixedDrinksParser::Return_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MixedDrinksVisitor*>(visitor))
    return parserVisitor->visitReturn_statement(this);
  else
    return visitor->visitChildren(this);
}

MixedDrinksParser::Return_statementContext* MixedDrinksParser::return_statement() {
  Return_statementContext *_localctx = _tracker.createInstance<Return_statementContext>(_ctx, getState());
  enterRule(_localctx, 18, MixedDrinksParser::RuleReturn_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(138);
    match(MixedDrinksParser::RETURN);
    setState(139);
    expr(0);
    setState(140);
    match(MixedDrinksParser::T__3);
   
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
  enterRule(_localctx, 20, MixedDrinksParser::RuleIf_stmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(142);
    match(MixedDrinksParser::IF);
    setState(143);
    match(MixedDrinksParser::T__0);
    setState(144);
    expr(0);
    setState(145);
    match(MixedDrinksParser::T__2);
    setState(146);
    match(MixedDrinksParser::THEN);
    setState(147);
    match(MixedDrinksParser::T__4);

    setState(148);
    statement_list();
    setState(149);
    match(MixedDrinksParser::T__5);
    setState(155);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MixedDrinksParser::ELSE) {
      setState(150);
      match(MixedDrinksParser::ELSE);
      setState(151);
      match(MixedDrinksParser::T__4);
      setState(152);
      statement_list();
      setState(153);
      match(MixedDrinksParser::T__5);
    }
   
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
  enterRule(_localctx, 22, MixedDrinksParser::RuleRepeat_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(157);
    match(MixedDrinksParser::REPEAT);
    setState(158);
    match(MixedDrinksParser::T__4);
    setState(159);
    statement_list();
    setState(160);
    match(MixedDrinksParser::T__5);
    setState(161);
    match(MixedDrinksParser::UNTIL);
    setState(162);
    match(MixedDrinksParser::T__0);
    setState(163);
    expr(0);
    setState(164);
    match(MixedDrinksParser::T__2);
    setState(165);
    match(MixedDrinksParser::T__3);
   
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
  enterRule(_localctx, 24, MixedDrinksParser::RuleAssignment_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(167);
    drink();
    setState(168);
    match(MixedDrinksParser::EQ_OP);
    setState(169);
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
  enterRule(_localctx, 26, MixedDrinksParser::RuleDeclaration_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(171);
    declaration();
    setState(172);
    match(MixedDrinksParser::EQ_OP);
    setState(173);
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
  enterRule(_localctx, 28, MixedDrinksParser::RuleDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(175);
    typeID();
    setState(176);
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
  enterRule(_localctx, 30, MixedDrinksParser::RuleVariable_ID);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(178);
    match(MixedDrinksParser::IDENTIFIER);
   
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
  enterRule(_localctx, 32, MixedDrinksParser::RulePrint_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(180);
    match(MixedDrinksParser::PRINT);
    setState(181);
    match(MixedDrinksParser::T__0);
    setState(182);
    output();
    setState(183);
    match(MixedDrinksParser::T__2);
    setState(184);
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
  enterRule(_localctx, 34, MixedDrinksParser::RuleOutput);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(188);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MixedDrinksParser::T__0:
      case MixedDrinksParser::IDENTIFIER:
      case MixedDrinksParser::INTEGER:
      case MixedDrinksParser::CHARACTER: {
        enterOuterAlt(_localctx, 1);
        setState(186);
        expr(0);
        break;
      }

      case MixedDrinksParser::STRING: {
        enterOuterAlt(_localctx, 2);
        setState(187);
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
  enterRule(_localctx, 36, MixedDrinksParser::RuleIdentifiers);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(190);
    expr(0);
    setState(195);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MixedDrinksParser::T__1) {
      setState(191);
      match(MixedDrinksParser::T__1);
      setState(192);
      expr(0);
      setState(197);
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
//----------------- FunctionCallExpressionContext ------------------------------------------------------------------

MixedDrinksParser::Function_callContext* MixedDrinksParser::FunctionCallExpressionContext::function_call() {
  return getRuleContext<MixedDrinksParser::Function_callContext>(0);
}

MixedDrinksParser::FunctionCallExpressionContext::FunctionCallExpressionContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any MixedDrinksParser::FunctionCallExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MixedDrinksVisitor*>(visitor))
    return parserVisitor->visitFunctionCallExpression(this);
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
  size_t startState = 38;
  enterRecursionRule(_localctx, 38, MixedDrinksParser::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(206);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<FunctionCallExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(199);
      function_call();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<DrinkExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(200);
      drink();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<NumberExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(201);
      number();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<ParensContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(202);
      match(MixedDrinksParser::T__0);
      setState(203);
      expr(0);
      setState(204);
      match(MixedDrinksParser::T__2);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(222);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(220);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulDivExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(208);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(209);
          mul_div_op();
          setState(210);
          expr(7);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddSubExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(212);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(213);
          add_sub_op();
          setState(214);
          expr(6);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<RelExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(216);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(217);
          rel_op();
          setState(218);
          expr(5);
          break;
        }

        } 
      }
      setState(224);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
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
  enterRule(_localctx, 40, MixedDrinksParser::RuleNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(227);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MixedDrinksParser::INTEGER: {
        _localctx = dynamic_cast<NumberContext *>(_tracker.createInstance<MixedDrinksParser::Integer_constantContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(225);
        match(MixedDrinksParser::INTEGER);
        break;
      }

      case MixedDrinksParser::CHARACTER: {
        _localctx = dynamic_cast<NumberContext *>(_tracker.createInstance<MixedDrinksParser::Character_constantContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(226);
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
  enterRule(_localctx, 42, MixedDrinksParser::RuleDrinkNames);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(229);
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
  enterRule(_localctx, 44, MixedDrinksParser::RuleTypeID);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(231);
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
  enterRule(_localctx, 46, MixedDrinksParser::RuleDrink);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(233);
    match(MixedDrinksParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_IDContext ------------------------------------------------------------------

MixedDrinksParser::Function_IDContext::Function_IDContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MixedDrinksParser::Function_IDContext::IDENTIFIER() {
  return getToken(MixedDrinksParser::IDENTIFIER, 0);
}


size_t MixedDrinksParser::Function_IDContext::getRuleIndex() const {
  return MixedDrinksParser::RuleFunction_ID;
}

antlrcpp::Any MixedDrinksParser::Function_IDContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MixedDrinksVisitor*>(visitor))
    return parserVisitor->visitFunction_ID(this);
  else
    return visitor->visitChildren(this);
}

MixedDrinksParser::Function_IDContext* MixedDrinksParser::function_ID() {
  Function_IDContext *_localctx = _tracker.createInstance<Function_IDContext>(_ctx, getState());
  enterRule(_localctx, 48, MixedDrinksParser::RuleFunction_ID);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(235);
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
  enterRule(_localctx, 50, MixedDrinksParser::RuleMul_div_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(237);
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
  enterRule(_localctx, 52, MixedDrinksParser::RuleAdd_sub_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(239);
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
  enterRule(_localctx, 54, MixedDrinksParser::RuleRel_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(241);
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
    case 19: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

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
  "prog", "main", "block", "statement_list", "stmt", "function_list", "functions", 
  "function_call", "function_define", "return_statement", "if_stmt", "repeat_statement", 
  "assignment_stmt", "declaration_stmt", "declaration", "variable_ID", "print_statement", 
  "output", "identifiers", "expr", "number", "drinkNames", "typeID", "drink", 
  "function_ID", "mul_div_op", "add_sub_op", "rel_op"
};

std::vector<std::string> MixedDrinksParser::_literalNames = {
  "", "'('", "','", "')'", "'~'", "'{'", "'}'", "'MIXED_DRINKS'", "'START'", 
  "'STOP'", "'CHUG'", "'UNTIL'", "'DRUNK'", "'DO'", "'SOBER'", "'SHOTS'", 
  "'SPRITS'", "'SPILL'", "'RETURN'", "", "", "", "", "'*'", "'/'", "'+'", 
  "'-'", "'='", "'<>'", "'<'", "'<='", "'>'", "'>='"
};

std::vector<std::string> MixedDrinksParser::_symbolicNames = {
  "", "", "", "", "", "", "", "MIXED_DRINKS", "BEGIN", "END", "REPEAT", 
  "UNTIL", "IF", "THEN", "ELSE", "INT", "CHAR", "PRINT", "RETURN", "IDENTIFIER", 
  "INTEGER", "CHARACTER", "STRING", "MUL_OP", "DIV_OP", "ADD_OP", "SUB_OP", 
  "EQ_OP", "NE_OP", "LT_OP", "LE_OP", "GT_OP", "GE_OP", "NEWLINE", "WS"
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
    0x3, 0x24, 0xf6, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 0x9, 
    0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 
    0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 
    0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x3, 0x2, 0x5, 0x2, 0x3c, 0xa, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x49, 0xa, 0x3, 
    0x7, 0x3, 0x4b, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x4e, 0xb, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x54, 0xa, 0x4, 0x3, 0x5, 0x6, 
    0x5, 0x57, 0xa, 0x5, 0xd, 0x5, 0xe, 0x5, 0x58, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x67, 0xa, 0x6, 0x3, 0x7, 0x7, 0x7, 
    0x6a, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x6d, 0xb, 0x7, 0x3, 0x8, 0x3, 0x8, 
    0x5, 0x8, 0x71, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x76, 
    0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x7a, 0xa, 0x9, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x81, 0xa, 0xa, 0x7, 0xa, 
    0x83, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x86, 0xb, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 
    0x9e, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0xbf, 
    0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 0xc4, 0xa, 0x14, 
    0xc, 0x14, 0xe, 0x14, 0xc7, 0xb, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0xd1, 
    0xa, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x7, 0x15, 0xdf, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0xe2, 0xb, 0x15, 0x3, 
    0x16, 0x3, 0x16, 0x5, 0x16, 0xe6, 0xa, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 
    0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x2, 
    0x3, 0x28, 0x1e, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 
    0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 
    0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x2, 0x6, 0x4, 0x2, 0x11, 0x12, 
    0x15, 0x15, 0x3, 0x2, 0x19, 0x1a, 0x3, 0x2, 0x1b, 0x1c, 0x3, 0x2, 0x1d, 
    0x22, 0x2, 0xf3, 0x2, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x4, 0x41, 0x3, 0x2, 
    0x2, 0x2, 0x6, 0x53, 0x3, 0x2, 0x2, 0x2, 0x8, 0x56, 0x3, 0x2, 0x2, 0x2, 
    0xa, 0x66, 0x3, 0x2, 0x2, 0x2, 0xc, 0x6b, 0x3, 0x2, 0x2, 0x2, 0xe, 0x70, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0x72, 0x3, 0x2, 0x2, 0x2, 0x12, 0x7b, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x16, 0x90, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xa9, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0xad, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xb1, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0xb4, 0x3, 0x2, 0x2, 0x2, 0x22, 0xb6, 0x3, 0x2, 0x2, 0x2, 0x24, 
    0xbe, 0x3, 0x2, 0x2, 0x2, 0x26, 0xc0, 0x3, 0x2, 0x2, 0x2, 0x28, 0xd0, 
    0x3, 0x2, 0x2, 0x2, 0x2a, 0xe5, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xe7, 0x3, 
    0x2, 0x2, 0x2, 0x2e, 0xe9, 0x3, 0x2, 0x2, 0x2, 0x30, 0xeb, 0x3, 0x2, 
    0x2, 0x2, 0x32, 0xed, 0x3, 0x2, 0x2, 0x2, 0x34, 0xef, 0x3, 0x2, 0x2, 
    0x2, 0x36, 0xf1, 0x3, 0x2, 0x2, 0x2, 0x38, 0xf3, 0x3, 0x2, 0x2, 0x2, 
    0x3a, 0x3c, 0x5, 0xc, 0x7, 0x2, 0x3b, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3b, 
    0x3c, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3e, 
    0x5, 0x4, 0x3, 0x2, 0x3e, 0x3f, 0x5, 0x6, 0x4, 0x2, 0x3f, 0x40, 0x7, 
    0xb, 0x2, 0x2, 0x40, 0x3, 0x3, 0x2, 0x2, 0x2, 0x41, 0x42, 0x5, 0x2e, 
    0x18, 0x2, 0x42, 0x43, 0x7, 0x9, 0x2, 0x2, 0x43, 0x4c, 0x7, 0x3, 0x2, 
    0x2, 0x44, 0x45, 0x5, 0x2e, 0x18, 0x2, 0x45, 0x46, 0x7, 0x15, 0x2, 0x2, 
    0x46, 0x48, 0x3, 0x2, 0x2, 0x2, 0x47, 0x49, 0x7, 0x4, 0x2, 0x2, 0x48, 
    0x47, 0x3, 0x2, 0x2, 0x2, 0x48, 0x49, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4b, 
    0x3, 0x2, 0x2, 0x2, 0x4a, 0x44, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4e, 0x3, 
    0x2, 0x2, 0x2, 0x4c, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4d, 0x3, 0x2, 
    0x2, 0x2, 0x4d, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4c, 0x3, 0x2, 0x2, 
    0x2, 0x4f, 0x50, 0x7, 0x5, 0x2, 0x2, 0x50, 0x5, 0x3, 0x2, 0x2, 0x2, 
    0x51, 0x54, 0x5, 0x8, 0x5, 0x2, 0x52, 0x54, 0x5, 0xc, 0x7, 0x2, 0x53, 
    0x51, 0x3, 0x2, 0x2, 0x2, 0x53, 0x52, 0x3, 0x2, 0x2, 0x2, 0x54, 0x7, 
    0x3, 0x2, 0x2, 0x2, 0x55, 0x57, 0x5, 0xa, 0x6, 0x2, 0x56, 0x55, 0x3, 
    0x2, 0x2, 0x2, 0x57, 0x58, 0x3, 0x2, 0x2, 0x2, 0x58, 0x56, 0x3, 0x2, 
    0x2, 0x2, 0x58, 0x59, 0x3, 0x2, 0x2, 0x2, 0x59, 0x9, 0x3, 0x2, 0x2, 
    0x2, 0x5a, 0x5b, 0x5, 0x1a, 0xe, 0x2, 0x5b, 0x5c, 0x7, 0x6, 0x2, 0x2, 
    0x5c, 0x67, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5e, 0x5, 0x1c, 0xf, 0x2, 0x5e, 
    0x5f, 0x7, 0x6, 0x2, 0x2, 0x5f, 0x67, 0x3, 0x2, 0x2, 0x2, 0x60, 0x67, 
    0x5, 0x16, 0xc, 0x2, 0x61, 0x67, 0x5, 0x18, 0xd, 0x2, 0x62, 0x63, 0x5, 
    0x22, 0x12, 0x2, 0x63, 0x64, 0x7, 0x6, 0x2, 0x2, 0x64, 0x67, 0x3, 0x2, 
    0x2, 0x2, 0x65, 0x67, 0x5, 0x14, 0xb, 0x2, 0x66, 0x5a, 0x3, 0x2, 0x2, 
    0x2, 0x66, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x66, 0x60, 0x3, 0x2, 0x2, 0x2, 
    0x66, 0x61, 0x3, 0x2, 0x2, 0x2, 0x66, 0x62, 0x3, 0x2, 0x2, 0x2, 0x66, 
    0x65, 0x3, 0x2, 0x2, 0x2, 0x67, 0xb, 0x3, 0x2, 0x2, 0x2, 0x68, 0x6a, 
    0x5, 0xe, 0x8, 0x2, 0x69, 0x68, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6d, 0x3, 
    0x2, 0x2, 0x2, 0x6b, 0x69, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6c, 0x3, 0x2, 
    0x2, 0x2, 0x6c, 0xd, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6b, 0x3, 0x2, 0x2, 
    0x2, 0x6e, 0x71, 0x5, 0x10, 0x9, 0x2, 0x6f, 0x71, 0x5, 0x12, 0xa, 0x2, 
    0x70, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x70, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x71, 
    0xf, 0x3, 0x2, 0x2, 0x2, 0x72, 0x73, 0x5, 0x32, 0x1a, 0x2, 0x73, 0x75, 
    0x7, 0x3, 0x2, 0x2, 0x74, 0x76, 0x5, 0x26, 0x14, 0x2, 0x75, 0x74, 0x3, 
    0x2, 0x2, 0x2, 0x75, 0x76, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 0x3, 0x2, 
    0x2, 0x2, 0x77, 0x79, 0x7, 0x5, 0x2, 0x2, 0x78, 0x7a, 0x7, 0x6, 0x2, 
    0x2, 0x79, 0x78, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7a, 0x3, 0x2, 0x2, 0x2, 
    0x7a, 0x11, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7c, 0x5, 0x2e, 0x18, 0x2, 0x7c, 
    0x7d, 0x5, 0x32, 0x1a, 0x2, 0x7d, 0x84, 0x7, 0x3, 0x2, 0x2, 0x7e, 0x80, 
    0x5, 0x1e, 0x10, 0x2, 0x7f, 0x81, 0x7, 0x4, 0x2, 0x2, 0x80, 0x7f, 0x3, 
    0x2, 0x2, 0x2, 0x80, 0x81, 0x3, 0x2, 0x2, 0x2, 0x81, 0x83, 0x3, 0x2, 
    0x2, 0x2, 0x82, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x83, 0x86, 0x3, 0x2, 0x2, 
    0x2, 0x84, 0x82, 0x3, 0x2, 0x2, 0x2, 0x84, 0x85, 0x3, 0x2, 0x2, 0x2, 
    0x85, 0x87, 0x3, 0x2, 0x2, 0x2, 0x86, 0x84, 0x3, 0x2, 0x2, 0x2, 0x87, 
    0x88, 0x7, 0x5, 0x2, 0x2, 0x88, 0x89, 0x7, 0x7, 0x2, 0x2, 0x89, 0x8a, 
    0x5, 0x8, 0x5, 0x2, 0x8a, 0x8b, 0x7, 0x8, 0x2, 0x2, 0x8b, 0x13, 0x3, 
    0x2, 0x2, 0x2, 0x8c, 0x8d, 0x7, 0x14, 0x2, 0x2, 0x8d, 0x8e, 0x5, 0x28, 
    0x15, 0x2, 0x8e, 0x8f, 0x7, 0x6, 0x2, 0x2, 0x8f, 0x15, 0x3, 0x2, 0x2, 
    0x2, 0x90, 0x91, 0x7, 0xe, 0x2, 0x2, 0x91, 0x92, 0x7, 0x3, 0x2, 0x2, 
    0x92, 0x93, 0x5, 0x28, 0x15, 0x2, 0x93, 0x94, 0x7, 0x5, 0x2, 0x2, 0x94, 
    0x95, 0x7, 0xf, 0x2, 0x2, 0x95, 0x96, 0x7, 0x7, 0x2, 0x2, 0x96, 0x97, 
    0x5, 0x8, 0x5, 0x2, 0x97, 0x9d, 0x7, 0x8, 0x2, 0x2, 0x98, 0x99, 0x7, 
    0x10, 0x2, 0x2, 0x99, 0x9a, 0x7, 0x7, 0x2, 0x2, 0x9a, 0x9b, 0x5, 0x8, 
    0x5, 0x2, 0x9b, 0x9c, 0x7, 0x8, 0x2, 0x2, 0x9c, 0x9e, 0x3, 0x2, 0x2, 
    0x2, 0x9d, 0x98, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9e, 0x3, 0x2, 0x2, 0x2, 
    0x9e, 0x17, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa0, 0x7, 0xc, 0x2, 0x2, 0xa0, 
    0xa1, 0x7, 0x7, 0x2, 0x2, 0xa1, 0xa2, 0x5, 0x8, 0x5, 0x2, 0xa2, 0xa3, 
    0x7, 0x8, 0x2, 0x2, 0xa3, 0xa4, 0x7, 0xd, 0x2, 0x2, 0xa4, 0xa5, 0x7, 
    0x3, 0x2, 0x2, 0xa5, 0xa6, 0x5, 0x28, 0x15, 0x2, 0xa6, 0xa7, 0x7, 0x5, 
    0x2, 0x2, 0xa7, 0xa8, 0x7, 0x6, 0x2, 0x2, 0xa8, 0x19, 0x3, 0x2, 0x2, 
    0x2, 0xa9, 0xaa, 0x5, 0x30, 0x19, 0x2, 0xaa, 0xab, 0x7, 0x1d, 0x2, 0x2, 
    0xab, 0xac, 0x5, 0x28, 0x15, 0x2, 0xac, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xad, 
    0xae, 0x5, 0x1e, 0x10, 0x2, 0xae, 0xaf, 0x7, 0x1d, 0x2, 0x2, 0xaf, 0xb0, 
    0x5, 0x28, 0x15, 0x2, 0xb0, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xb2, 0x5, 
    0x2e, 0x18, 0x2, 0xb2, 0xb3, 0x5, 0x20, 0x11, 0x2, 0xb3, 0x1f, 0x3, 
    0x2, 0x2, 0x2, 0xb4, 0xb5, 0x7, 0x15, 0x2, 0x2, 0xb5, 0x21, 0x3, 0x2, 
    0x2, 0x2, 0xb6, 0xb7, 0x7, 0x13, 0x2, 0x2, 0xb7, 0xb8, 0x7, 0x3, 0x2, 
    0x2, 0xb8, 0xb9, 0x5, 0x24, 0x13, 0x2, 0xb9, 0xba, 0x7, 0x5, 0x2, 0x2, 
    0xba, 0xbb, 0x7, 0x6, 0x2, 0x2, 0xbb, 0x23, 0x3, 0x2, 0x2, 0x2, 0xbc, 
    0xbf, 0x5, 0x28, 0x15, 0x2, 0xbd, 0xbf, 0x5, 0x2c, 0x17, 0x2, 0xbe, 
    0xbc, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbf, 0x25, 
    0x3, 0x2, 0x2, 0x2, 0xc0, 0xc5, 0x5, 0x28, 0x15, 0x2, 0xc1, 0xc2, 0x7, 
    0x4, 0x2, 0x2, 0xc2, 0xc4, 0x5, 0x28, 0x15, 0x2, 0xc3, 0xc1, 0x3, 0x2, 
    0x2, 0x2, 0xc4, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc3, 0x3, 0x2, 0x2, 
    0x2, 0xc5, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc6, 0x27, 0x3, 0x2, 0x2, 0x2, 
    0xc7, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc9, 0x8, 0x15, 0x1, 0x2, 0xc9, 
    0xd1, 0x5, 0x10, 0x9, 0x2, 0xca, 0xd1, 0x5, 0x30, 0x19, 0x2, 0xcb, 0xd1, 
    0x5, 0x2a, 0x16, 0x2, 0xcc, 0xcd, 0x7, 0x3, 0x2, 0x2, 0xcd, 0xce, 0x5, 
    0x28, 0x15, 0x2, 0xce, 0xcf, 0x7, 0x5, 0x2, 0x2, 0xcf, 0xd1, 0x3, 0x2, 
    0x2, 0x2, 0xd0, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xca, 0x3, 0x2, 0x2, 
    0x2, 0xd0, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xcc, 0x3, 0x2, 0x2, 0x2, 
    0xd1, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd3, 0xc, 0x8, 0x2, 0x2, 0xd3, 
    0xd4, 0x5, 0x34, 0x1b, 0x2, 0xd4, 0xd5, 0x5, 0x28, 0x15, 0x9, 0xd5, 
    0xdf, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd7, 0xc, 0x7, 0x2, 0x2, 0xd7, 0xd8, 
    0x5, 0x36, 0x1c, 0x2, 0xd8, 0xd9, 0x5, 0x28, 0x15, 0x8, 0xd9, 0xdf, 
    0x3, 0x2, 0x2, 0x2, 0xda, 0xdb, 0xc, 0x6, 0x2, 0x2, 0xdb, 0xdc, 0x5, 
    0x38, 0x1d, 0x2, 0xdc, 0xdd, 0x5, 0x28, 0x15, 0x7, 0xdd, 0xdf, 0x3, 
    0x2, 0x2, 0x2, 0xde, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xde, 0xd6, 0x3, 0x2, 
    0x2, 0x2, 0xde, 0xda, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xe2, 0x3, 0x2, 0x2, 
    0x2, 0xe0, 0xde, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe1, 0x3, 0x2, 0x2, 0x2, 
    0xe1, 0x29, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xe3, 
    0xe6, 0x7, 0x16, 0x2, 0x2, 0xe4, 0xe6, 0x7, 0x17, 0x2, 0x2, 0xe5, 0xe3, 
    0x3, 0x2, 0x2, 0x2, 0xe5, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe6, 0x2b, 0x3, 
    0x2, 0x2, 0x2, 0xe7, 0xe8, 0x7, 0x18, 0x2, 0x2, 0xe8, 0x2d, 0x3, 0x2, 
    0x2, 0x2, 0xe9, 0xea, 0x9, 0x2, 0x2, 0x2, 0xea, 0x2f, 0x3, 0x2, 0x2, 
    0x2, 0xeb, 0xec, 0x7, 0x15, 0x2, 0x2, 0xec, 0x31, 0x3, 0x2, 0x2, 0x2, 
    0xed, 0xee, 0x7, 0x15, 0x2, 0x2, 0xee, 0x33, 0x3, 0x2, 0x2, 0x2, 0xef, 
    0xf0, 0x9, 0x3, 0x2, 0x2, 0xf0, 0x35, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xf2, 
    0x9, 0x4, 0x2, 0x2, 0xf2, 0x37, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xf4, 0x9, 
    0x5, 0x2, 0x2, 0xf4, 0x39, 0x3, 0x2, 0x2, 0x2, 0x15, 0x3b, 0x48, 0x4c, 
    0x53, 0x58, 0x66, 0x6b, 0x70, 0x75, 0x79, 0x80, 0x84, 0x9d, 0xbe, 0xc5, 
    0xd0, 0xde, 0xe0, 0xe5, 
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
