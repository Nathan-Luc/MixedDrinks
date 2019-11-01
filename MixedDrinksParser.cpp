
// Generated from MixedDrinks.g4 by ANTLR 4.7.2


#include "MixedDrinksListener.h"

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

std::vector<MixedDrinksParser::StmtContext *> MixedDrinksParser::ProgContext::stmt() {
  return getRuleContexts<MixedDrinksParser::StmtContext>();
}

MixedDrinksParser::StmtContext* MixedDrinksParser::ProgContext::stmt(size_t i) {
  return getRuleContext<MixedDrinksParser::StmtContext>(i);
}


size_t MixedDrinksParser::ProgContext::getRuleIndex() const {
  return MixedDrinksParser::RuleProg;
}

void MixedDrinksParser::ProgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MixedDrinksListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProg(this);
}

void MixedDrinksParser::ProgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MixedDrinksListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProg(this);
}

MixedDrinksParser::ProgContext* MixedDrinksParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, MixedDrinksParser::RuleProg);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(25); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(24);
      stmt();
      setState(27); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MixedDrinksParser::CHUG)
      | (1ULL << MixedDrinksParser::DRUNK)
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


size_t MixedDrinksParser::StmtContext::getRuleIndex() const {
  return MixedDrinksParser::RuleStmt;
}

void MixedDrinksParser::StmtContext::copyFrom(StmtContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- IfStmtContext ------------------------------------------------------------------

MixedDrinksParser::If_stmtContext* MixedDrinksParser::IfStmtContext::if_stmt() {
  return getRuleContext<MixedDrinksParser::If_stmtContext>(0);
}

MixedDrinksParser::IfStmtContext::IfStmtContext(StmtContext *ctx) { copyFrom(ctx); }

void MixedDrinksParser::IfStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MixedDrinksListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStmt(this);
}
void MixedDrinksParser::IfStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MixedDrinksListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStmt(this);
}
//----------------- AssignmentStmtContext ------------------------------------------------------------------

MixedDrinksParser::Assignment_stmtContext* MixedDrinksParser::AssignmentStmtContext::assignment_stmt() {
  return getRuleContext<MixedDrinksParser::Assignment_stmtContext>(0);
}

MixedDrinksParser::AssignmentStmtContext::AssignmentStmtContext(StmtContext *ctx) { copyFrom(ctx); }

void MixedDrinksParser::AssignmentStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MixedDrinksListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentStmt(this);
}
void MixedDrinksParser::AssignmentStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MixedDrinksListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentStmt(this);
}
//----------------- RepeatStmtContext ------------------------------------------------------------------

MixedDrinksParser::Chug_stmtContext* MixedDrinksParser::RepeatStmtContext::chug_stmt() {
  return getRuleContext<MixedDrinksParser::Chug_stmtContext>(0);
}

MixedDrinksParser::RepeatStmtContext::RepeatStmtContext(StmtContext *ctx) { copyFrom(ctx); }

void MixedDrinksParser::RepeatStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MixedDrinksListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRepeatStmt(this);
}
void MixedDrinksParser::RepeatStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MixedDrinksListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRepeatStmt(this);
}
MixedDrinksParser::StmtContext* MixedDrinksParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 2, MixedDrinksParser::RuleStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(32);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MixedDrinksParser::DRUNK: {
        _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<MixedDrinksParser::IfStmtContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(29);
        if_stmt();
        break;
      }

      case MixedDrinksParser::IDENTIFIER: {
        _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<MixedDrinksParser::AssignmentStmtContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(30);
        assignment_stmt();
        break;
      }

      case MixedDrinksParser::CHUG: {
        _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<MixedDrinksParser::RepeatStmtContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(31);
        chug_stmt();
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

//----------------- If_stmtContext ------------------------------------------------------------------

MixedDrinksParser::If_stmtContext::If_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MixedDrinksParser::If_stmtContext::DRUNK() {
  return getToken(MixedDrinksParser::DRUNK, 0);
}

MixedDrinksParser::ExprContext* MixedDrinksParser::If_stmtContext::expr() {
  return getRuleContext<MixedDrinksParser::ExprContext>(0);
}

tree::TerminalNode* MixedDrinksParser::If_stmtContext::THEN() {
  return getToken(MixedDrinksParser::THEN, 0);
}

std::vector<MixedDrinksParser::StmtContext *> MixedDrinksParser::If_stmtContext::stmt() {
  return getRuleContexts<MixedDrinksParser::StmtContext>();
}

MixedDrinksParser::StmtContext* MixedDrinksParser::If_stmtContext::stmt(size_t i) {
  return getRuleContext<MixedDrinksParser::StmtContext>(i);
}

tree::TerminalNode* MixedDrinksParser::If_stmtContext::SOBER() {
  return getToken(MixedDrinksParser::SOBER, 0);
}


size_t MixedDrinksParser::If_stmtContext::getRuleIndex() const {
  return MixedDrinksParser::RuleIf_stmt;
}

void MixedDrinksParser::If_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MixedDrinksListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_stmt(this);
}

void MixedDrinksParser::If_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MixedDrinksListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_stmt(this);
}

MixedDrinksParser::If_stmtContext* MixedDrinksParser::if_stmt() {
  If_stmtContext *_localctx = _tracker.createInstance<If_stmtContext>(_ctx, getState());
  enterRule(_localctx, 4, MixedDrinksParser::RuleIf_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(34);
    match(MixedDrinksParser::DRUNK);
    setState(35);
    match(MixedDrinksParser::T__0);
    setState(36);
    expr(0);
    setState(37);
    match(MixedDrinksParser::T__1);
    setState(38);
    match(MixedDrinksParser::THEN);
    setState(39);
    stmt();
    setState(42);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      setState(40);
      match(MixedDrinksParser::SOBER);
      setState(41);
      stmt();
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

//----------------- Chug_stmtContext ------------------------------------------------------------------

MixedDrinksParser::Chug_stmtContext::Chug_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MixedDrinksParser::Chug_stmtContext::CHUG() {
  return getToken(MixedDrinksParser::CHUG, 0);
}

std::vector<MixedDrinksParser::ExprContext *> MixedDrinksParser::Chug_stmtContext::expr() {
  return getRuleContexts<MixedDrinksParser::ExprContext>();
}

MixedDrinksParser::ExprContext* MixedDrinksParser::Chug_stmtContext::expr(size_t i) {
  return getRuleContext<MixedDrinksParser::ExprContext>(i);
}

tree::TerminalNode* MixedDrinksParser::Chug_stmtContext::UNTIL() {
  return getToken(MixedDrinksParser::UNTIL, 0);
}


size_t MixedDrinksParser::Chug_stmtContext::getRuleIndex() const {
  return MixedDrinksParser::RuleChug_stmt;
}

void MixedDrinksParser::Chug_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MixedDrinksListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterChug_stmt(this);
}

void MixedDrinksParser::Chug_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MixedDrinksListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitChug_stmt(this);
}

MixedDrinksParser::Chug_stmtContext* MixedDrinksParser::chug_stmt() {
  Chug_stmtContext *_localctx = _tracker.createInstance<Chug_stmtContext>(_ctx, getState());
  enterRule(_localctx, 6, MixedDrinksParser::RuleChug_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(44);
    match(MixedDrinksParser::CHUG);
    setState(45);
    expr(0);
    setState(46);
    match(MixedDrinksParser::UNTIL);
    setState(47);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Stmt_listContext ------------------------------------------------------------------

MixedDrinksParser::Stmt_listContext::Stmt_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MixedDrinksParser::StmtContext *> MixedDrinksParser::Stmt_listContext::stmt() {
  return getRuleContexts<MixedDrinksParser::StmtContext>();
}

MixedDrinksParser::StmtContext* MixedDrinksParser::Stmt_listContext::stmt(size_t i) {
  return getRuleContext<MixedDrinksParser::StmtContext>(i);
}


size_t MixedDrinksParser::Stmt_listContext::getRuleIndex() const {
  return MixedDrinksParser::RuleStmt_list;
}

void MixedDrinksParser::Stmt_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MixedDrinksListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStmt_list(this);
}

void MixedDrinksParser::Stmt_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MixedDrinksListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStmt_list(this);
}

MixedDrinksParser::Stmt_listContext* MixedDrinksParser::stmt_list() {
  Stmt_listContext *_localctx = _tracker.createInstance<Stmt_listContext>(_ctx, getState());
  enterRule(_localctx, 8, MixedDrinksParser::RuleStmt_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(49);
    stmt();
    setState(54);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MixedDrinksParser::T__2) {
      setState(50);
      match(MixedDrinksParser::T__2);
      setState(51);
      stmt();
      setState(56);
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

void MixedDrinksParser::Assignment_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MixedDrinksListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment_stmt(this);
}

void MixedDrinksParser::Assignment_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MixedDrinksListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment_stmt(this);
}

MixedDrinksParser::Assignment_stmtContext* MixedDrinksParser::assignment_stmt() {
  Assignment_stmtContext *_localctx = _tracker.createInstance<Assignment_stmtContext>(_ctx, getState());
  enterRule(_localctx, 10, MixedDrinksParser::RuleAssignment_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(57);
    drink();
    setState(58);
    match(MixedDrinksParser::EQ_OP);
    setState(59);
    expr(0);
   
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
}

//----------------- IdentifierContext ------------------------------------------------------------------

MixedDrinksParser::DrinkContext* MixedDrinksParser::IdentifierContext::drink() {
  return getRuleContext<MixedDrinksParser::DrinkContext>(0);
}

MixedDrinksParser::IdentifierContext::IdentifierContext(ExprContext *ctx) { copyFrom(ctx); }

void MixedDrinksParser::IdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MixedDrinksListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifier(this);
}
void MixedDrinksParser::IdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MixedDrinksListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifier(this);
}
//----------------- ParensContext ------------------------------------------------------------------

MixedDrinksParser::ExprContext* MixedDrinksParser::ParensContext::expr() {
  return getRuleContext<MixedDrinksParser::ExprContext>(0);
}

MixedDrinksParser::ParensContext::ParensContext(ExprContext *ctx) { copyFrom(ctx); }

void MixedDrinksParser::ParensContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MixedDrinksListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParens(this);
}
void MixedDrinksParser::ParensContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MixedDrinksListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParens(this);
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

void MixedDrinksParser::AddSubExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MixedDrinksListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddSubExpr(this);
}
void MixedDrinksParser::AddSubExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MixedDrinksListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddSubExpr(this);
}
//----------------- IntegerContext ------------------------------------------------------------------

MixedDrinksParser::ShotsContext* MixedDrinksParser::IntegerContext::shots() {
  return getRuleContext<MixedDrinksParser::ShotsContext>(0);
}

MixedDrinksParser::IntegerContext::IntegerContext(ExprContext *ctx) { copyFrom(ctx); }

void MixedDrinksParser::IntegerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MixedDrinksListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInteger(this);
}
void MixedDrinksParser::IntegerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MixedDrinksListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInteger(this);
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

void MixedDrinksParser::RelExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MixedDrinksListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelExpr(this);
}
void MixedDrinksParser::RelExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MixedDrinksListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelExpr(this);
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

void MixedDrinksParser::MulDivExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MixedDrinksListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulDivExpr(this);
}
void MixedDrinksParser::MulDivExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MixedDrinksListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulDivExpr(this);
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
  size_t startState = 12;
  enterRecursionRule(_localctx, 12, MixedDrinksParser::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(68);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MixedDrinksParser::IDENTIFIER: {
        _localctx = _tracker.createInstance<IdentifierContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(62);
        drink();
        break;
      }

      case MixedDrinksParser::INTEGER: {
        _localctx = _tracker.createInstance<IntegerContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(63);
        shots();
        break;
      }

      case MixedDrinksParser::T__0: {
        _localctx = _tracker.createInstance<ParensContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(64);
        match(MixedDrinksParser::T__0);
        setState(65);
        expr(0);
        setState(66);
        match(MixedDrinksParser::T__1);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(84);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(82);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulDivExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(70);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(71);
          mul_div_op();
          setState(72);
          expr(7);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddSubExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(74);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(75);
          add_sub_op();
          setState(76);
          expr(6);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<RelExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(78);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(79);
          rel_op();
          setState(80);
          expr(5);
          break;
        }

        } 
      }
      setState(86);
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

void MixedDrinksParser::DrinkContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MixedDrinksListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDrink(this);
}

void MixedDrinksParser::DrinkContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MixedDrinksListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDrink(this);
}

MixedDrinksParser::DrinkContext* MixedDrinksParser::drink() {
  DrinkContext *_localctx = _tracker.createInstance<DrinkContext>(_ctx, getState());
  enterRule(_localctx, 14, MixedDrinksParser::RuleDrink);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(87);
    match(MixedDrinksParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ShotsContext ------------------------------------------------------------------

MixedDrinksParser::ShotsContext::ShotsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MixedDrinksParser::ShotsContext::INTEGER() {
  return getToken(MixedDrinksParser::INTEGER, 0);
}


size_t MixedDrinksParser::ShotsContext::getRuleIndex() const {
  return MixedDrinksParser::RuleShots;
}

void MixedDrinksParser::ShotsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MixedDrinksListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShots(this);
}

void MixedDrinksParser::ShotsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MixedDrinksListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShots(this);
}

MixedDrinksParser::ShotsContext* MixedDrinksParser::shots() {
  ShotsContext *_localctx = _tracker.createInstance<ShotsContext>(_ctx, getState());
  enterRule(_localctx, 16, MixedDrinksParser::RuleShots);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(89);
    match(MixedDrinksParser::INTEGER);
   
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

void MixedDrinksParser::Mul_div_opContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MixedDrinksListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMul_div_op(this);
}

void MixedDrinksParser::Mul_div_opContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MixedDrinksListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMul_div_op(this);
}

MixedDrinksParser::Mul_div_opContext* MixedDrinksParser::mul_div_op() {
  Mul_div_opContext *_localctx = _tracker.createInstance<Mul_div_opContext>(_ctx, getState());
  enterRule(_localctx, 18, MixedDrinksParser::RuleMul_div_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(91);
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

void MixedDrinksParser::Add_sub_opContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MixedDrinksListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdd_sub_op(this);
}

void MixedDrinksParser::Add_sub_opContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MixedDrinksListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdd_sub_op(this);
}

MixedDrinksParser::Add_sub_opContext* MixedDrinksParser::add_sub_op() {
  Add_sub_opContext *_localctx = _tracker.createInstance<Add_sub_opContext>(_ctx, getState());
  enterRule(_localctx, 20, MixedDrinksParser::RuleAdd_sub_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(93);
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

void MixedDrinksParser::Rel_opContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MixedDrinksListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRel_op(this);
}

void MixedDrinksParser::Rel_opContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MixedDrinksListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRel_op(this);
}

MixedDrinksParser::Rel_opContext* MixedDrinksParser::rel_op() {
  Rel_opContext *_localctx = _tracker.createInstance<Rel_opContext>(_ctx, getState());
  enterRule(_localctx, 22, MixedDrinksParser::RuleRel_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(95);
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
    case 6: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

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
  "prog", "stmt", "if_stmt", "chug_stmt", "stmt_list", "assignment_stmt", 
  "expr", "drink", "shots", "mul_div_op", "add_sub_op", "rel_op"
};

std::vector<std::string> MixedDrinksParser::_literalNames = {
  "", "'('", "')'", "';'", "'CHUG'", "'UNTIL'", "'DRUNK'", "'THEN'", "'SOBER'", 
  "", "", "'*'", "'/'", "'+'", "'-'", "'='", "'<>'", "'<'", "'<='", "'>'", 
  "'>='"
};

std::vector<std::string> MixedDrinksParser::_symbolicNames = {
  "", "", "", "", "CHUG", "UNTIL", "DRUNK", "THEN", "SOBER", "IDENTIFIER", 
  "INTEGER", "MUL_OP", "DIV_OP", "ADD_OP", "SUB_OP", "EQ_OP", "NE_OP", "LT_OP", 
  "LE_OP", "GT_OP", "GE_OP", "NEWLINE", "WS"
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
    0x3, 0x18, 0x64, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x3, 0x2, 0x6, 0x2, 0x1c, 
    0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0x1d, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 
    0x3, 0x23, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x2d, 0xa, 0x4, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 
    0x6, 0x37, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x3a, 0xb, 0x6, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x47, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x55, 0xa, 0x8, 0xc, 0x8, 0xe, 
    0x8, 0x58, 0xb, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x2, 0x3, 
    0xe, 0xe, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 
    0x18, 0x2, 0x5, 0x3, 0x2, 0xd, 0xe, 0x3, 0x2, 0xf, 0x10, 0x3, 0x2, 0x11, 
    0x16, 0x2, 0x61, 0x2, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x4, 0x22, 0x3, 0x2, 
    0x2, 0x2, 0x6, 0x24, 0x3, 0x2, 0x2, 0x2, 0x8, 0x2e, 0x3, 0x2, 0x2, 0x2, 
    0xa, 0x33, 0x3, 0x2, 0x2, 0x2, 0xc, 0x3b, 0x3, 0x2, 0x2, 0x2, 0xe, 0x46, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0x59, 0x3, 0x2, 0x2, 0x2, 0x12, 0x5b, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x16, 0x5f, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0x61, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x1c, 0x5, 0x4, 0x3, 
    0x2, 0x1b, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1d, 0x3, 0x2, 0x2, 0x2, 
    0x1d, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x1e, 
    0x3, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x23, 0x5, 0x6, 0x4, 0x2, 0x20, 0x23, 
    0x5, 0xc, 0x7, 0x2, 0x21, 0x23, 0x5, 0x8, 0x5, 0x2, 0x22, 0x1f, 0x3, 
    0x2, 0x2, 0x2, 0x22, 0x20, 0x3, 0x2, 0x2, 0x2, 0x22, 0x21, 0x3, 0x2, 
    0x2, 0x2, 0x23, 0x5, 0x3, 0x2, 0x2, 0x2, 0x24, 0x25, 0x7, 0x8, 0x2, 
    0x2, 0x25, 0x26, 0x7, 0x3, 0x2, 0x2, 0x26, 0x27, 0x5, 0xe, 0x8, 0x2, 
    0x27, 0x28, 0x7, 0x4, 0x2, 0x2, 0x28, 0x29, 0x7, 0x9, 0x2, 0x2, 0x29, 
    0x2c, 0x5, 0x4, 0x3, 0x2, 0x2a, 0x2b, 0x7, 0xa, 0x2, 0x2, 0x2b, 0x2d, 
    0x5, 0x4, 0x3, 0x2, 0x2c, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2d, 0x3, 
    0x2, 0x2, 0x2, 0x2d, 0x7, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2f, 0x7, 0x6, 
    0x2, 0x2, 0x2f, 0x30, 0x5, 0xe, 0x8, 0x2, 0x30, 0x31, 0x7, 0x7, 0x2, 
    0x2, 0x31, 0x32, 0x5, 0xe, 0x8, 0x2, 0x32, 0x9, 0x3, 0x2, 0x2, 0x2, 
    0x33, 0x38, 0x5, 0x4, 0x3, 0x2, 0x34, 0x35, 0x7, 0x5, 0x2, 0x2, 0x35, 
    0x37, 0x5, 0x4, 0x3, 0x2, 0x36, 0x34, 0x3, 0x2, 0x2, 0x2, 0x37, 0x3a, 
    0x3, 0x2, 0x2, 0x2, 0x38, 0x36, 0x3, 0x2, 0x2, 0x2, 0x38, 0x39, 0x3, 
    0x2, 0x2, 0x2, 0x39, 0xb, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x38, 0x3, 0x2, 
    0x2, 0x2, 0x3b, 0x3c, 0x5, 0x10, 0x9, 0x2, 0x3c, 0x3d, 0x7, 0x11, 0x2, 
    0x2, 0x3d, 0x3e, 0x5, 0xe, 0x8, 0x2, 0x3e, 0xd, 0x3, 0x2, 0x2, 0x2, 
    0x3f, 0x40, 0x8, 0x8, 0x1, 0x2, 0x40, 0x47, 0x5, 0x10, 0x9, 0x2, 0x41, 
    0x47, 0x5, 0x12, 0xa, 0x2, 0x42, 0x43, 0x7, 0x3, 0x2, 0x2, 0x43, 0x44, 
    0x5, 0xe, 0x8, 0x2, 0x44, 0x45, 0x7, 0x4, 0x2, 0x2, 0x45, 0x47, 0x3, 
    0x2, 0x2, 0x2, 0x46, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x46, 0x41, 0x3, 0x2, 
    0x2, 0x2, 0x46, 0x42, 0x3, 0x2, 0x2, 0x2, 0x47, 0x56, 0x3, 0x2, 0x2, 
    0x2, 0x48, 0x49, 0xc, 0x8, 0x2, 0x2, 0x49, 0x4a, 0x5, 0x14, 0xb, 0x2, 
    0x4a, 0x4b, 0x5, 0xe, 0x8, 0x9, 0x4b, 0x55, 0x3, 0x2, 0x2, 0x2, 0x4c, 
    0x4d, 0xc, 0x7, 0x2, 0x2, 0x4d, 0x4e, 0x5, 0x16, 0xc, 0x2, 0x4e, 0x4f, 
    0x5, 0xe, 0x8, 0x8, 0x4f, 0x55, 0x3, 0x2, 0x2, 0x2, 0x50, 0x51, 0xc, 
    0x6, 0x2, 0x2, 0x51, 0x52, 0x5, 0x18, 0xd, 0x2, 0x52, 0x53, 0x5, 0xe, 
    0x8, 0x7, 0x53, 0x55, 0x3, 0x2, 0x2, 0x2, 0x54, 0x48, 0x3, 0x2, 0x2, 
    0x2, 0x54, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x54, 0x50, 0x3, 0x2, 0x2, 0x2, 
    0x55, 0x58, 0x3, 0x2, 0x2, 0x2, 0x56, 0x54, 0x3, 0x2, 0x2, 0x2, 0x56, 
    0x57, 0x3, 0x2, 0x2, 0x2, 0x57, 0xf, 0x3, 0x2, 0x2, 0x2, 0x58, 0x56, 
    0x3, 0x2, 0x2, 0x2, 0x59, 0x5a, 0x7, 0xb, 0x2, 0x2, 0x5a, 0x11, 0x3, 
    0x2, 0x2, 0x2, 0x5b, 0x5c, 0x7, 0xc, 0x2, 0x2, 0x5c, 0x13, 0x3, 0x2, 
    0x2, 0x2, 0x5d, 0x5e, 0x9, 0x2, 0x2, 0x2, 0x5e, 0x15, 0x3, 0x2, 0x2, 
    0x2, 0x5f, 0x60, 0x9, 0x3, 0x2, 0x2, 0x60, 0x17, 0x3, 0x2, 0x2, 0x2, 
    0x61, 0x62, 0x9, 0x4, 0x2, 0x2, 0x62, 0x19, 0x3, 0x2, 0x2, 0x2, 0x9, 
    0x1d, 0x22, 0x2c, 0x38, 0x46, 0x54, 0x56, 
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
