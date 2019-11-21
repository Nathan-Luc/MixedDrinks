
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

std::vector<MixedDrinksParser::StmtContext *> MixedDrinksParser::ProgContext::stmt() {
  return getRuleContexts<MixedDrinksParser::StmtContext>();
}

MixedDrinksParser::StmtContext* MixedDrinksParser::ProgContext::stmt(size_t i) {
  return getRuleContext<MixedDrinksParser::StmtContext>(i);
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
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(31); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(30);
      stmt();
      setState(33); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MixedDrinksParser::CHUG)
      | (1ULL << MixedDrinksParser::DRUNK)
      | (1ULL << MixedDrinksParser::BEER)
      | (1ULL << MixedDrinksParser::SPRITS)
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

//----------------- DeclareStmtContext ------------------------------------------------------------------

MixedDrinksParser::Declaration_stmtContext* MixedDrinksParser::DeclareStmtContext::declaration_stmt() {
  return getRuleContext<MixedDrinksParser::Declaration_stmtContext>(0);
}

MixedDrinksParser::DeclareStmtContext::DeclareStmtContext(StmtContext *ctx) { copyFrom(ctx); }

antlrcpp::Any MixedDrinksParser::DeclareStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MixedDrinksVisitor*>(visitor))
    return parserVisitor->visitDeclareStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfStmtContext ------------------------------------------------------------------

MixedDrinksParser::If_stmtContext* MixedDrinksParser::IfStmtContext::if_stmt() {
  return getRuleContext<MixedDrinksParser::If_stmtContext>(0);
}

MixedDrinksParser::IfStmtContext::IfStmtContext(StmtContext *ctx) { copyFrom(ctx); }

antlrcpp::Any MixedDrinksParser::IfStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MixedDrinksVisitor*>(visitor))
    return parserVisitor->visitIfStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignmentStmtContext ------------------------------------------------------------------

MixedDrinksParser::Assignment_stmtContext* MixedDrinksParser::AssignmentStmtContext::assignment_stmt() {
  return getRuleContext<MixedDrinksParser::Assignment_stmtContext>(0);
}

MixedDrinksParser::AssignmentStmtContext::AssignmentStmtContext(StmtContext *ctx) { copyFrom(ctx); }

antlrcpp::Any MixedDrinksParser::AssignmentStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MixedDrinksVisitor*>(visitor))
    return parserVisitor->visitAssignmentStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RepeatStmtContext ------------------------------------------------------------------

MixedDrinksParser::Chug_stmtContext* MixedDrinksParser::RepeatStmtContext::chug_stmt() {
  return getRuleContext<MixedDrinksParser::Chug_stmtContext>(0);
}

MixedDrinksParser::RepeatStmtContext::RepeatStmtContext(StmtContext *ctx) { copyFrom(ctx); }

antlrcpp::Any MixedDrinksParser::RepeatStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MixedDrinksVisitor*>(visitor))
    return parserVisitor->visitRepeatStmt(this);
  else
    return visitor->visitChildren(this);
}
MixedDrinksParser::StmtContext* MixedDrinksParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 2, MixedDrinksParser::RuleStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(39);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<MixedDrinksParser::IfStmtContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(35);
      if_stmt();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<MixedDrinksParser::AssignmentStmtContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(36);
      assignment_stmt();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<MixedDrinksParser::RepeatStmtContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(37);
      chug_stmt();
      break;
    }

    case 4: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<MixedDrinksParser::DeclareStmtContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(38);
      declaration_stmt();
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

antlrcpp::Any MixedDrinksParser::If_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MixedDrinksVisitor*>(visitor))
    return parserVisitor->visitIf_stmt(this);
  else
    return visitor->visitChildren(this);
}

MixedDrinksParser::If_stmtContext* MixedDrinksParser::if_stmt() {
  If_stmtContext *_localctx = _tracker.createInstance<If_stmtContext>(_ctx, getState());
  enterRule(_localctx, 4, MixedDrinksParser::RuleIf_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(41);
    match(MixedDrinksParser::DRUNK);
    setState(42);
    match(MixedDrinksParser::T__0);
    setState(43);
    expr(0);
    setState(44);
    match(MixedDrinksParser::T__1);
    setState(45);
    match(MixedDrinksParser::THEN);
    setState(46);
    stmt();
    setState(49);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      setState(47);
      match(MixedDrinksParser::SOBER);
      setState(48);
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
  enterRule(_localctx, 6, MixedDrinksParser::RuleAssignment_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(51);
    drink();
    setState(52);
    match(MixedDrinksParser::EQ_OP);
    setState(53);
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
  enterRule(_localctx, 8, MixedDrinksParser::RuleDeclaration_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(55);
    declaration();
    setState(56);
    match(MixedDrinksParser::EQ_OP);
    setState(57);
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

MixedDrinksParser::DrinkContext* MixedDrinksParser::DeclarationContext::drink() {
  return getRuleContext<MixedDrinksParser::DrinkContext>(0);
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
  enterRule(_localctx, 10, MixedDrinksParser::RuleDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(59);
    typeID();
    setState(60);
    drink();
   
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

antlrcpp::Any MixedDrinksParser::Chug_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MixedDrinksVisitor*>(visitor))
    return parserVisitor->visitChug_stmt(this);
  else
    return visitor->visitChildren(this);
}

MixedDrinksParser::Chug_stmtContext* MixedDrinksParser::chug_stmt() {
  Chug_stmtContext *_localctx = _tracker.createInstance<Chug_stmtContext>(_ctx, getState());
  enterRule(_localctx, 12, MixedDrinksParser::RuleChug_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(62);
    match(MixedDrinksParser::CHUG);
    setState(63);
    expr(0);
    setState(64);
    match(MixedDrinksParser::UNTIL);
    setState(65);
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

antlrcpp::Any MixedDrinksParser::Stmt_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MixedDrinksVisitor*>(visitor))
    return parserVisitor->visitStmt_list(this);
  else
    return visitor->visitChildren(this);
}

MixedDrinksParser::Stmt_listContext* MixedDrinksParser::stmt_list() {
  Stmt_listContext *_localctx = _tracker.createInstance<Stmt_listContext>(_ctx, getState());
  enterRule(_localctx, 14, MixedDrinksParser::RuleStmt_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(67);
    stmt();
    setState(72);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MixedDrinksParser::T__2) {
      setState(68);
      match(MixedDrinksParser::T__2);
      setState(69);
      stmt();
      setState(74);
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

//----------------- IdentifierContext ------------------------------------------------------------------

MixedDrinksParser::DrinkContext* MixedDrinksParser::IdentifierContext::drink() {
  return getRuleContext<MixedDrinksParser::DrinkContext>(0);
}

MixedDrinksParser::IdentifierContext::IdentifierContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any MixedDrinksParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MixedDrinksVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
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
//----------------- IntegerContext ------------------------------------------------------------------

MixedDrinksParser::ShotsContext* MixedDrinksParser::IntegerContext::shots() {
  return getRuleContext<MixedDrinksParser::ShotsContext>(0);
}

MixedDrinksParser::IntegerContext::IntegerContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any MixedDrinksParser::IntegerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MixedDrinksVisitor*>(visitor))
    return parserVisitor->visitInteger(this);
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
  size_t startState = 16;
  enterRecursionRule(_localctx, 16, MixedDrinksParser::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(82);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MixedDrinksParser::IDENTIFIER: {
        _localctx = _tracker.createInstance<IdentifierContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(76);
        drink();
        break;
      }

      case MixedDrinksParser::INTEGER: {
        _localctx = _tracker.createInstance<IntegerContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(77);
        shots();
        break;
      }

      case MixedDrinksParser::T__0: {
        _localctx = _tracker.createInstance<ParensContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(78);
        match(MixedDrinksParser::T__0);
        setState(79);
        expr(0);
        setState(80);
        match(MixedDrinksParser::T__1);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(98);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(96);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulDivExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(84);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(85);
          mul_div_op();
          setState(86);
          expr(7);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddSubExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(88);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(89);
          add_sub_op();
          setState(90);
          expr(6);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<RelExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(92);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(93);
          rel_op();
          setState(94);
          expr(5);
          break;
        }

        } 
      }
      setState(100);
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

//----------------- TypeIDContext ------------------------------------------------------------------

MixedDrinksParser::TypeIDContext::TypeIDContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MixedDrinksParser::TypeIDContext::IDENTIFIER() {
  return getToken(MixedDrinksParser::IDENTIFIER, 0);
}

tree::TerminalNode* MixedDrinksParser::TypeIDContext::BEER() {
  return getToken(MixedDrinksParser::BEER, 0);
}

tree::TerminalNode* MixedDrinksParser::TypeIDContext::SPRITS() {
  return getToken(MixedDrinksParser::SPRITS, 0);
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
  enterRule(_localctx, 18, MixedDrinksParser::RuleTypeID);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(101);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MixedDrinksParser::BEER)
      | (1ULL << MixedDrinksParser::SPRITS)
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
  enterRule(_localctx, 20, MixedDrinksParser::RuleDrink);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(103);
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

antlrcpp::Any MixedDrinksParser::ShotsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MixedDrinksVisitor*>(visitor))
    return parserVisitor->visitShots(this);
  else
    return visitor->visitChildren(this);
}

MixedDrinksParser::ShotsContext* MixedDrinksParser::shots() {
  ShotsContext *_localctx = _tracker.createInstance<ShotsContext>(_ctx, getState());
  enterRule(_localctx, 22, MixedDrinksParser::RuleShots);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(105);
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

antlrcpp::Any MixedDrinksParser::Mul_div_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MixedDrinksVisitor*>(visitor))
    return parserVisitor->visitMul_div_op(this);
  else
    return visitor->visitChildren(this);
}

MixedDrinksParser::Mul_div_opContext* MixedDrinksParser::mul_div_op() {
  Mul_div_opContext *_localctx = _tracker.createInstance<Mul_div_opContext>(_ctx, getState());
  enterRule(_localctx, 24, MixedDrinksParser::RuleMul_div_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(107);
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
  enterRule(_localctx, 26, MixedDrinksParser::RuleAdd_sub_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(109);
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
  enterRule(_localctx, 28, MixedDrinksParser::RuleRel_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(111);
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
    case 8: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

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
  "prog", "stmt", "if_stmt", "assignment_stmt", "declaration_stmt", "declaration", 
  "chug_stmt", "stmt_list", "expr", "typeID", "drink", "shots", "mul_div_op", 
  "add_sub_op", "rel_op"
};

std::vector<std::string> MixedDrinksParser::_literalNames = {
  "", "'('", "')'", "';'", "'CHUG'", "'UNTIL'", "'DRUNK'", "'THEN'", "'SOBER'", 
  "'BEER'", "'SPRITS'", "", "", "'*'", "'/'", "'+'", "'-'", "'='", "'<>'", 
  "'<'", "'<='", "'>'", "'>='"
};

std::vector<std::string> MixedDrinksParser::_symbolicNames = {
  "", "", "", "", "CHUG", "UNTIL", "DRUNK", "THEN", "SOBER", "BEER", "SPRITS", 
  "IDENTIFIER", "INTEGER", "MUL_OP", "DIV_OP", "ADD_OP", "SUB_OP", "EQ_OP", 
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
    0x3, 0x1a, 0x74, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x3, 0x2, 0x6, 0x2, 0x22, 0xa, 
    0x2, 0xd, 0x2, 0xe, 0x2, 0x23, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x5, 0x3, 0x2a, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x34, 0xa, 0x4, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x49, 0xa, 0x9, 0xc, 
    0x9, 0xe, 0x9, 0x4c, 0xb, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x55, 0xa, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x63, 0xa, 0xa, 0xc, 0xa, 
    0xe, 0xa, 0x66, 0xb, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x2, 0x3, 0x12, 0x11, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 
    0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x2, 0x6, 0x3, 
    0x2, 0xb, 0xd, 0x3, 0x2, 0xf, 0x10, 0x3, 0x2, 0x11, 0x12, 0x3, 0x2, 
    0x13, 0x18, 0x2, 0x6f, 0x2, 0x21, 0x3, 0x2, 0x2, 0x2, 0x4, 0x29, 0x3, 
    0x2, 0x2, 0x2, 0x6, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x8, 0x35, 0x3, 0x2, 0x2, 
    0x2, 0xa, 0x39, 0x3, 0x2, 0x2, 0x2, 0xc, 0x3d, 0x3, 0x2, 0x2, 0x2, 0xe, 
    0x40, 0x3, 0x2, 0x2, 0x2, 0x10, 0x45, 0x3, 0x2, 0x2, 0x2, 0x12, 0x54, 
    0x3, 0x2, 0x2, 0x2, 0x14, 0x67, 0x3, 0x2, 0x2, 0x2, 0x16, 0x69, 0x3, 
    0x2, 0x2, 0x2, 0x18, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x6d, 0x3, 0x2, 
    0x2, 0x2, 0x1c, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x71, 0x3, 0x2, 0x2, 
    0x2, 0x20, 0x22, 0x5, 0x4, 0x3, 0x2, 0x21, 0x20, 0x3, 0x2, 0x2, 0x2, 
    0x22, 0x23, 0x3, 0x2, 0x2, 0x2, 0x23, 0x21, 0x3, 0x2, 0x2, 0x2, 0x23, 
    0x24, 0x3, 0x2, 0x2, 0x2, 0x24, 0x3, 0x3, 0x2, 0x2, 0x2, 0x25, 0x2a, 
    0x5, 0x6, 0x4, 0x2, 0x26, 0x2a, 0x5, 0x8, 0x5, 0x2, 0x27, 0x2a, 0x5, 
    0xe, 0x8, 0x2, 0x28, 0x2a, 0x5, 0xa, 0x6, 0x2, 0x29, 0x25, 0x3, 0x2, 
    0x2, 0x2, 0x29, 0x26, 0x3, 0x2, 0x2, 0x2, 0x29, 0x27, 0x3, 0x2, 0x2, 
    0x2, 0x29, 0x28, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x5, 0x3, 0x2, 0x2, 0x2, 
    0x2b, 0x2c, 0x7, 0x8, 0x2, 0x2, 0x2c, 0x2d, 0x7, 0x3, 0x2, 0x2, 0x2d, 
    0x2e, 0x5, 0x12, 0xa, 0x2, 0x2e, 0x2f, 0x7, 0x4, 0x2, 0x2, 0x2f, 0x30, 
    0x7, 0x9, 0x2, 0x2, 0x30, 0x33, 0x5, 0x4, 0x3, 0x2, 0x31, 0x32, 0x7, 
    0xa, 0x2, 0x2, 0x32, 0x34, 0x5, 0x4, 0x3, 0x2, 0x33, 0x31, 0x3, 0x2, 
    0x2, 0x2, 0x33, 0x34, 0x3, 0x2, 0x2, 0x2, 0x34, 0x7, 0x3, 0x2, 0x2, 
    0x2, 0x35, 0x36, 0x5, 0x16, 0xc, 0x2, 0x36, 0x37, 0x7, 0x13, 0x2, 0x2, 
    0x37, 0x38, 0x5, 0x12, 0xa, 0x2, 0x38, 0x9, 0x3, 0x2, 0x2, 0x2, 0x39, 
    0x3a, 0x5, 0xc, 0x7, 0x2, 0x3a, 0x3b, 0x7, 0x13, 0x2, 0x2, 0x3b, 0x3c, 
    0x5, 0x12, 0xa, 0x2, 0x3c, 0xb, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3e, 0x5, 
    0x14, 0xb, 0x2, 0x3e, 0x3f, 0x5, 0x16, 0xc, 0x2, 0x3f, 0xd, 0x3, 0x2, 
    0x2, 0x2, 0x40, 0x41, 0x7, 0x6, 0x2, 0x2, 0x41, 0x42, 0x5, 0x12, 0xa, 
    0x2, 0x42, 0x43, 0x7, 0x7, 0x2, 0x2, 0x43, 0x44, 0x5, 0x12, 0xa, 0x2, 
    0x44, 0xf, 0x3, 0x2, 0x2, 0x2, 0x45, 0x4a, 0x5, 0x4, 0x3, 0x2, 0x46, 
    0x47, 0x7, 0x5, 0x2, 0x2, 0x47, 0x49, 0x5, 0x4, 0x3, 0x2, 0x48, 0x46, 
    0x3, 0x2, 0x2, 0x2, 0x49, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x48, 0x3, 
    0x2, 0x2, 0x2, 0x4a, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x11, 0x3, 0x2, 
    0x2, 0x2, 0x4c, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4e, 0x8, 0xa, 0x1, 
    0x2, 0x4e, 0x55, 0x5, 0x16, 0xc, 0x2, 0x4f, 0x55, 0x5, 0x18, 0xd, 0x2, 
    0x50, 0x51, 0x7, 0x3, 0x2, 0x2, 0x51, 0x52, 0x5, 0x12, 0xa, 0x2, 0x52, 
    0x53, 0x7, 0x4, 0x2, 0x2, 0x53, 0x55, 0x3, 0x2, 0x2, 0x2, 0x54, 0x4d, 
    0x3, 0x2, 0x2, 0x2, 0x54, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x54, 0x50, 0x3, 
    0x2, 0x2, 0x2, 0x55, 0x64, 0x3, 0x2, 0x2, 0x2, 0x56, 0x57, 0xc, 0x8, 
    0x2, 0x2, 0x57, 0x58, 0x5, 0x1a, 0xe, 0x2, 0x58, 0x59, 0x5, 0x12, 0xa, 
    0x9, 0x59, 0x63, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5b, 0xc, 0x7, 0x2, 0x2, 
    0x5b, 0x5c, 0x5, 0x1c, 0xf, 0x2, 0x5c, 0x5d, 0x5, 0x12, 0xa, 0x8, 0x5d, 
    0x63, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5f, 0xc, 0x6, 0x2, 0x2, 0x5f, 0x60, 
    0x5, 0x1e, 0x10, 0x2, 0x60, 0x61, 0x5, 0x12, 0xa, 0x7, 0x61, 0x63, 0x3, 
    0x2, 0x2, 0x2, 0x62, 0x56, 0x3, 0x2, 0x2, 0x2, 0x62, 0x5a, 0x3, 0x2, 
    0x2, 0x2, 0x62, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x63, 0x66, 0x3, 0x2, 0x2, 
    0x2, 0x64, 0x62, 0x3, 0x2, 0x2, 0x2, 0x64, 0x65, 0x3, 0x2, 0x2, 0x2, 
    0x65, 0x13, 0x3, 0x2, 0x2, 0x2, 0x66, 0x64, 0x3, 0x2, 0x2, 0x2, 0x67, 
    0x68, 0x9, 0x2, 0x2, 0x2, 0x68, 0x15, 0x3, 0x2, 0x2, 0x2, 0x69, 0x6a, 
    0x7, 0xd, 0x2, 0x2, 0x6a, 0x17, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6c, 0x7, 
    0xe, 0x2, 0x2, 0x6c, 0x19, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6e, 0x9, 0x3, 
    0x2, 0x2, 0x6e, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x70, 0x9, 0x4, 0x2, 
    0x2, 0x70, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x71, 0x72, 0x9, 0x5, 0x2, 0x2, 
    0x72, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x9, 0x23, 0x29, 0x33, 0x4a, 0x54, 0x62, 
    0x64, 
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
