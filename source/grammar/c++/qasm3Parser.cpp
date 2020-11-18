
// Generated from ../qasm3.g4 by ANTLR 4.8


#include "qasm3Listener.h"

#include "qasm3Parser.h"


using namespace antlrcpp;
using namespace antlr4;

qasm3Parser::qasm3Parser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

qasm3Parser::~qasm3Parser() {
  delete _interpreter;
}

std::string qasm3Parser::getGrammarFileName() const {
  return "qasm3.g4";
}

const std::vector<std::string>& qasm3Parser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& qasm3Parser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

qasm3Parser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::HeaderContext* qasm3Parser::ProgramContext::header() {
  return getRuleContext<qasm3Parser::HeaderContext>(0);
}

tree::TerminalNode* qasm3Parser::ProgramContext::EOF() {
  return getToken(qasm3Parser::EOF, 0);
}

std::vector<qasm3Parser::IncludeContext *> qasm3Parser::ProgramContext::include() {
  return getRuleContexts<qasm3Parser::IncludeContext>();
}

qasm3Parser::IncludeContext* qasm3Parser::ProgramContext::include(size_t i) {
  return getRuleContext<qasm3Parser::IncludeContext>(i);
}

std::vector<qasm3Parser::StatementContext *> qasm3Parser::ProgramContext::statement() {
  return getRuleContexts<qasm3Parser::StatementContext>();
}

qasm3Parser::StatementContext* qasm3Parser::ProgramContext::statement(size_t i) {
  return getRuleContext<qasm3Parser::StatementContext>(i);
}


size_t qasm3Parser::ProgramContext::getRuleIndex() const {
  return qasm3Parser::RuleProgram;
}

void qasm3Parser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void qasm3Parser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}

qasm3Parser::ProgramContext* qasm3Parser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, qasm3Parser::RuleProgram);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(32);
    header();
    setState(36);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == qasm3Parser::T__1) {
      setState(33);
      include();
      setState(38);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(40); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(39);
      statement();
      setState(42); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << qasm3Parser::T__4)
      | (1ULL << qasm3Parser::T__5)
      | (1ULL << qasm3Parser::T__6)
      | (1ULL << qasm3Parser::T__7)
      | (1ULL << qasm3Parser::T__8)
      | (1ULL << qasm3Parser::T__9)
      | (1ULL << qasm3Parser::T__10)
      | (1ULL << qasm3Parser::T__11)
      | (1ULL << qasm3Parser::T__12)
      | (1ULL << qasm3Parser::T__13)
      | (1ULL << qasm3Parser::Gate))) != 0));
    setState(44);
    match(qasm3Parser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HeaderContext ------------------------------------------------------------------

qasm3Parser::HeaderContext::HeaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qasm3Parser::HeaderContext::SemiColon() {
  return getToken(qasm3Parser::SemiColon, 0);
}

tree::TerminalNode* qasm3Parser::HeaderContext::Dot() {
  return getToken(qasm3Parser::Dot, 0);
}

tree::TerminalNode* qasm3Parser::HeaderContext::Number() {
  return getToken(qasm3Parser::Number, 0);
}


size_t qasm3Parser::HeaderContext::getRuleIndex() const {
  return qasm3Parser::RuleHeader;
}

void qasm3Parser::HeaderContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHeader(this);
}

void qasm3Parser::HeaderContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHeader(this);
}

qasm3Parser::HeaderContext* qasm3Parser::header() {
  HeaderContext *_localctx = _tracker.createInstance<HeaderContext>(_ctx, getState());
  enterRule(_localctx, 2, qasm3Parser::RuleHeader);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(46);
    match(qasm3Parser::T__0);
    setState(49);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == qasm3Parser::Dot) {
      setState(47);
      match(qasm3Parser::Dot);
      setState(48);
      match(qasm3Parser::Number);
    }
    setState(51);
    match(qasm3Parser::SemiColon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IncludeContext ------------------------------------------------------------------

qasm3Parser::IncludeContext::IncludeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qasm3Parser::IncludeContext::StringLiteral() {
  return getToken(qasm3Parser::StringLiteral, 0);
}

tree::TerminalNode* qasm3Parser::IncludeContext::SemiColon() {
  return getToken(qasm3Parser::SemiColon, 0);
}


size_t qasm3Parser::IncludeContext::getRuleIndex() const {
  return qasm3Parser::RuleInclude;
}

void qasm3Parser::IncludeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInclude(this);
}

void qasm3Parser::IncludeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInclude(this);
}

qasm3Parser::IncludeContext* qasm3Parser::include() {
  IncludeContext *_localctx = _tracker.createInstance<IncludeContext>(_ctx, getState());
  enterRule(_localctx, 4, qasm3Parser::RuleInclude);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(53);
    match(qasm3Parser::T__1);
    setState(54);
    match(qasm3Parser::StringLiteral);
    setState(55);
    match(qasm3Parser::SemiColon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

qasm3Parser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::VariableDeclarationStatementContext* qasm3Parser::StatementContext::variableDeclarationStatement() {
  return getRuleContext<qasm3Parser::VariableDeclarationStatementContext>(0);
}

tree::TerminalNode* qasm3Parser::StatementContext::SemiColon() {
  return getToken(qasm3Parser::SemiColon, 0);
}

qasm3Parser::GateDefinitionContext* qasm3Parser::StatementContext::gateDefinition() {
  return getRuleContext<qasm3Parser::GateDefinitionContext>(0);
}


size_t qasm3Parser::StatementContext::getRuleIndex() const {
  return qasm3Parser::RuleStatement;
}

void qasm3Parser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void qasm3Parser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

qasm3Parser::StatementContext* qasm3Parser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 6, qasm3Parser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(61);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(57);
      variableDeclarationStatement();
      setState(58);
      match(qasm3Parser::SemiColon);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(60);
      gateDefinition();
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

//----------------- VariableDeclarationStatementContext ------------------------------------------------------------------

qasm3Parser::VariableDeclarationStatementContext::VariableDeclarationStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::TypeContext* qasm3Parser::VariableDeclarationStatementContext::type() {
  return getRuleContext<qasm3Parser::TypeContext>(0);
}

qasm3Parser::VariableDeclarationListContext* qasm3Parser::VariableDeclarationStatementContext::variableDeclarationList() {
  return getRuleContext<qasm3Parser::VariableDeclarationListContext>(0);
}

tree::TerminalNode* qasm3Parser::VariableDeclarationStatementContext::Gate() {
  return getToken(qasm3Parser::Gate, 0);
}


size_t qasm3Parser::VariableDeclarationStatementContext::getRuleIndex() const {
  return qasm3Parser::RuleVariableDeclarationStatement;
}

void qasm3Parser::VariableDeclarationStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclarationStatement(this);
}

void qasm3Parser::VariableDeclarationStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclarationStatement(this);
}

qasm3Parser::VariableDeclarationStatementContext* qasm3Parser::variableDeclarationStatement() {
  VariableDeclarationStatementContext *_localctx = _tracker.createInstance<VariableDeclarationStatementContext>(_ctx, getState());
  enterRule(_localctx, 8, qasm3Parser::RuleVariableDeclarationStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(67);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case qasm3Parser::T__4:
      case qasm3Parser::T__5:
      case qasm3Parser::T__6:
      case qasm3Parser::T__7:
      case qasm3Parser::T__8:
      case qasm3Parser::T__9:
      case qasm3Parser::T__10:
      case qasm3Parser::T__11:
      case qasm3Parser::T__12:
      case qasm3Parser::T__13: {
        enterOuterAlt(_localctx, 1);
        setState(63);
        type();
        setState(64);
        variableDeclarationList();
        break;
      }

      case qasm3Parser::Gate: {
        enterOuterAlt(_localctx, 2);
        setState(66);
        match(qasm3Parser::Gate);
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

//----------------- TypeContext ------------------------------------------------------------------

qasm3Parser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::VarTypeContext* qasm3Parser::TypeContext::varType() {
  return getRuleContext<qasm3Parser::VarTypeContext>(0);
}

tree::TerminalNode* qasm3Parser::TypeContext::OpenBracket() {
  return getToken(qasm3Parser::OpenBracket, 0);
}

std::vector<tree::TerminalNode *> qasm3Parser::TypeContext::Number() {
  return getTokens(qasm3Parser::Number);
}

tree::TerminalNode* qasm3Parser::TypeContext::Number(size_t i) {
  return getToken(qasm3Parser::Number, i);
}

tree::TerminalNode* qasm3Parser::TypeContext::CloseBracket() {
  return getToken(qasm3Parser::CloseBracket, 0);
}

tree::TerminalNode* qasm3Parser::TypeContext::Comma() {
  return getToken(qasm3Parser::Comma, 0);
}


size_t qasm3Parser::TypeContext::getRuleIndex() const {
  return qasm3Parser::RuleType;
}

void qasm3Parser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void qasm3Parser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}

qasm3Parser::TypeContext* qasm3Parser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 10, qasm3Parser::RuleType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(69);
    varType();
    setState(77);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      setState(70);
      match(qasm3Parser::OpenBracket);
      setState(71);
      match(qasm3Parser::Number);
      setState(74);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == qasm3Parser::Comma) {
        setState(72);
        match(qasm3Parser::Comma);
        setState(73);
        match(qasm3Parser::Number);
      }
      setState(76);
      match(qasm3Parser::CloseBracket);
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

//----------------- VariableDeclarationListContext ------------------------------------------------------------------

qasm3Parser::VariableDeclarationListContext::VariableDeclarationListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<qasm3Parser::VariableDeclarationContext *> qasm3Parser::VariableDeclarationListContext::variableDeclaration() {
  return getRuleContexts<qasm3Parser::VariableDeclarationContext>();
}

qasm3Parser::VariableDeclarationContext* qasm3Parser::VariableDeclarationListContext::variableDeclaration(size_t i) {
  return getRuleContext<qasm3Parser::VariableDeclarationContext>(i);
}

std::vector<tree::TerminalNode *> qasm3Parser::VariableDeclarationListContext::Comma() {
  return getTokens(qasm3Parser::Comma);
}

tree::TerminalNode* qasm3Parser::VariableDeclarationListContext::Comma(size_t i) {
  return getToken(qasm3Parser::Comma, i);
}


size_t qasm3Parser::VariableDeclarationListContext::getRuleIndex() const {
  return qasm3Parser::RuleVariableDeclarationList;
}

void qasm3Parser::VariableDeclarationListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclarationList(this);
}

void qasm3Parser::VariableDeclarationListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclarationList(this);
}

qasm3Parser::VariableDeclarationListContext* qasm3Parser::variableDeclarationList() {
  VariableDeclarationListContext *_localctx = _tracker.createInstance<VariableDeclarationListContext>(_ctx, getState());
  enterRule(_localctx, 12, qasm3Parser::RuleVariableDeclarationList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(79);
    variableDeclaration();
    setState(84);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == qasm3Parser::Comma) {
      setState(80);
      match(qasm3Parser::Comma);
      setState(81);
      variableDeclaration();
      setState(86);
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

//----------------- VariableDeclarationContext ------------------------------------------------------------------

qasm3Parser::VariableDeclarationContext::VariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qasm3Parser::VariableDeclarationContext::Identifier() {
  return getToken(qasm3Parser::Identifier, 0);
}

tree::TerminalNode* qasm3Parser::VariableDeclarationContext::OpenBracket() {
  return getToken(qasm3Parser::OpenBracket, 0);
}

tree::TerminalNode* qasm3Parser::VariableDeclarationContext::Number() {
  return getToken(qasm3Parser::Number, 0);
}

tree::TerminalNode* qasm3Parser::VariableDeclarationContext::CloseBracket() {
  return getToken(qasm3Parser::CloseBracket, 0);
}

tree::TerminalNode* qasm3Parser::VariableDeclarationContext::Assign() {
  return getToken(qasm3Parser::Assign, 0);
}

qasm3Parser::ValueContext* qasm3Parser::VariableDeclarationContext::value() {
  return getRuleContext<qasm3Parser::ValueContext>(0);
}


size_t qasm3Parser::VariableDeclarationContext::getRuleIndex() const {
  return qasm3Parser::RuleVariableDeclaration;
}

void qasm3Parser::VariableDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclaration(this);
}

void qasm3Parser::VariableDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclaration(this);
}

qasm3Parser::VariableDeclarationContext* qasm3Parser::variableDeclaration() {
  VariableDeclarationContext *_localctx = _tracker.createInstance<VariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 14, qasm3Parser::RuleVariableDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(87);
    match(qasm3Parser::Identifier);
    setState(91);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == qasm3Parser::OpenBracket) {
      setState(88);
      match(qasm3Parser::OpenBracket);
      setState(89);
      match(qasm3Parser::Number);
      setState(90);
      match(qasm3Parser::CloseBracket);
    }
    setState(95);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == qasm3Parser::Assign) {
      setState(93);
      match(qasm3Parser::Assign);
      setState(94);
      value();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GateDefinitionContext ------------------------------------------------------------------

qasm3Parser::GateDefinitionContext::GateDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qasm3Parser::GateDefinitionContext::Gate() {
  return getToken(qasm3Parser::Gate, 0);
}

tree::TerminalNode* qasm3Parser::GateDefinitionContext::Identifier() {
  return getToken(qasm3Parser::Identifier, 0);
}

qasm3Parser::QargsListContext* qasm3Parser::GateDefinitionContext::qargsList() {
  return getRuleContext<qasm3Parser::QargsListContext>(0);
}

qasm3Parser::ExpressionContext* qasm3Parser::GateDefinitionContext::expression() {
  return getRuleContext<qasm3Parser::ExpressionContext>(0);
}

qasm3Parser::ParamsListContext* qasm3Parser::GateDefinitionContext::paramsList() {
  return getRuleContext<qasm3Parser::ParamsListContext>(0);
}


size_t qasm3Parser::GateDefinitionContext::getRuleIndex() const {
  return qasm3Parser::RuleGateDefinition;
}

void qasm3Parser::GateDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGateDefinition(this);
}

void qasm3Parser::GateDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGateDefinition(this);
}

qasm3Parser::GateDefinitionContext* qasm3Parser::gateDefinition() {
  GateDefinitionContext *_localctx = _tracker.createInstance<GateDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 16, qasm3Parser::RuleGateDefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(97);
    match(qasm3Parser::Gate);
    setState(98);
    match(qasm3Parser::Identifier);

    setState(99);
    paramsList();
    setState(100);
    qargsList();
    setState(101);
    match(qasm3Parser::T__2);
    setState(102);
    expression();
    setState(103);
    match(qasm3Parser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamsListContext ------------------------------------------------------------------

qasm3Parser::ParamsListContext::ParamsListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<qasm3Parser::ParamDeclarationContext *> qasm3Parser::ParamsListContext::paramDeclaration() {
  return getRuleContexts<qasm3Parser::ParamDeclarationContext>();
}

qasm3Parser::ParamDeclarationContext* qasm3Parser::ParamsListContext::paramDeclaration(size_t i) {
  return getRuleContext<qasm3Parser::ParamDeclarationContext>(i);
}

std::vector<tree::TerminalNode *> qasm3Parser::ParamsListContext::Comma() {
  return getTokens(qasm3Parser::Comma);
}

tree::TerminalNode* qasm3Parser::ParamsListContext::Comma(size_t i) {
  return getToken(qasm3Parser::Comma, i);
}


size_t qasm3Parser::ParamsListContext::getRuleIndex() const {
  return qasm3Parser::RuleParamsList;
}

void qasm3Parser::ParamsListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParamsList(this);
}

void qasm3Parser::ParamsListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParamsList(this);
}

qasm3Parser::ParamsListContext* qasm3Parser::paramsList() {
  ParamsListContext *_localctx = _tracker.createInstance<ParamsListContext>(_ctx, getState());
  enterRule(_localctx, 18, qasm3Parser::RuleParamsList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(105);
    paramDeclaration();
    setState(110);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == qasm3Parser::Comma) {
      setState(106);
      match(qasm3Parser::Comma);
      setState(107);
      paramDeclaration();
      setState(112);
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

//----------------- ParamDeclarationContext ------------------------------------------------------------------

qasm3Parser::ParamDeclarationContext::ParamDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::TypeContext* qasm3Parser::ParamDeclarationContext::type() {
  return getRuleContext<qasm3Parser::TypeContext>(0);
}

tree::TerminalNode* qasm3Parser::ParamDeclarationContext::OpenBracket() {
  return getToken(qasm3Parser::OpenBracket, 0);
}

tree::TerminalNode* qasm3Parser::ParamDeclarationContext::Number() {
  return getToken(qasm3Parser::Number, 0);
}

tree::TerminalNode* qasm3Parser::ParamDeclarationContext::CloseBracket() {
  return getToken(qasm3Parser::CloseBracket, 0);
}

tree::TerminalNode* qasm3Parser::ParamDeclarationContext::Colon() {
  return getToken(qasm3Parser::Colon, 0);
}

tree::TerminalNode* qasm3Parser::ParamDeclarationContext::Identifier() {
  return getToken(qasm3Parser::Identifier, 0);
}


size_t qasm3Parser::ParamDeclarationContext::getRuleIndex() const {
  return qasm3Parser::RuleParamDeclaration;
}

void qasm3Parser::ParamDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParamDeclaration(this);
}

void qasm3Parser::ParamDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParamDeclaration(this);
}

qasm3Parser::ParamDeclarationContext* qasm3Parser::paramDeclaration() {
  ParamDeclarationContext *_localctx = _tracker.createInstance<ParamDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 20, qasm3Parser::RuleParamDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(113);
    type();
    setState(114);
    match(qasm3Parser::OpenBracket);
    setState(115);
    match(qasm3Parser::Number);
    setState(116);
    match(qasm3Parser::CloseBracket);
    setState(117);
    match(qasm3Parser::Colon);
    setState(118);
    match(qasm3Parser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QargsListContext ------------------------------------------------------------------

qasm3Parser::QargsListContext::QargsListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<qasm3Parser::QargDeclarationContext *> qasm3Parser::QargsListContext::qargDeclaration() {
  return getRuleContexts<qasm3Parser::QargDeclarationContext>();
}

qasm3Parser::QargDeclarationContext* qasm3Parser::QargsListContext::qargDeclaration(size_t i) {
  return getRuleContext<qasm3Parser::QargDeclarationContext>(i);
}

std::vector<tree::TerminalNode *> qasm3Parser::QargsListContext::Comma() {
  return getTokens(qasm3Parser::Comma);
}

tree::TerminalNode* qasm3Parser::QargsListContext::Comma(size_t i) {
  return getToken(qasm3Parser::Comma, i);
}


size_t qasm3Parser::QargsListContext::getRuleIndex() const {
  return qasm3Parser::RuleQargsList;
}

void qasm3Parser::QargsListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQargsList(this);
}

void qasm3Parser::QargsListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQargsList(this);
}

qasm3Parser::QargsListContext* qasm3Parser::qargsList() {
  QargsListContext *_localctx = _tracker.createInstance<QargsListContext>(_ctx, getState());
  enterRule(_localctx, 22, qasm3Parser::RuleQargsList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(120);
    qargDeclaration();
    setState(125);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == qasm3Parser::Comma) {
      setState(121);
      match(qasm3Parser::Comma);
      setState(122);
      qargDeclaration();
      setState(127);
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

//----------------- QargDeclarationContext ------------------------------------------------------------------

qasm3Parser::QargDeclarationContext::QargDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> qasm3Parser::QargDeclarationContext::Identifier() {
  return getTokens(qasm3Parser::Identifier);
}

tree::TerminalNode* qasm3Parser::QargDeclarationContext::Identifier(size_t i) {
  return getToken(qasm3Parser::Identifier, i);
}

std::vector<tree::TerminalNode *> qasm3Parser::QargDeclarationContext::Comma() {
  return getTokens(qasm3Parser::Comma);
}

tree::TerminalNode* qasm3Parser::QargDeclarationContext::Comma(size_t i) {
  return getToken(qasm3Parser::Comma, i);
}


size_t qasm3Parser::QargDeclarationContext::getRuleIndex() const {
  return qasm3Parser::RuleQargDeclaration;
}

void qasm3Parser::QargDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQargDeclaration(this);
}

void qasm3Parser::QargDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQargDeclaration(this);
}

qasm3Parser::QargDeclarationContext* qasm3Parser::qargDeclaration() {
  QargDeclarationContext *_localctx = _tracker.createInstance<QargDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 24, qasm3Parser::RuleQargDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(128);
    match(qasm3Parser::Identifier);
    setState(133);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(129);
        match(qasm3Parser::Comma);
        setState(130);
        match(qasm3Parser::Identifier); 
      }
      setState(135);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

qasm3Parser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t qasm3Parser::ExpressionContext::getRuleIndex() const {
  return qasm3Parser::RuleExpression;
}

void qasm3Parser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void qasm3Parser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}

qasm3Parser::ExpressionContext* qasm3Parser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 26, qasm3Parser::RuleExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);

   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValueContext ------------------------------------------------------------------

qasm3Parser::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qasm3Parser::ValueContext::Number() {
  return getToken(qasm3Parser::Number, 0);
}

tree::TerminalNode* qasm3Parser::ValueContext::StringLiteral() {
  return getToken(qasm3Parser::StringLiteral, 0);
}


size_t qasm3Parser::ValueContext::getRuleIndex() const {
  return qasm3Parser::RuleValue;
}

void qasm3Parser::ValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValue(this);
}

void qasm3Parser::ValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValue(this);
}

qasm3Parser::ValueContext* qasm3Parser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 28, qasm3Parser::RuleValue);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(138);
    _la = _input->LA(1);
    if (!(_la == qasm3Parser::StringLiteral

    || _la == qasm3Parser::Number)) {
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

//----------------- VarTypeContext ------------------------------------------------------------------

qasm3Parser::VarTypeContext::VarTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t qasm3Parser::VarTypeContext::getRuleIndex() const {
  return qasm3Parser::RuleVarType;
}

void qasm3Parser::VarTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarType(this);
}

void qasm3Parser::VarTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarType(this);
}

qasm3Parser::VarTypeContext* qasm3Parser::varType() {
  VarTypeContext *_localctx = _tracker.createInstance<VarTypeContext>(_ctx, getState());
  enterRule(_localctx, 30, qasm3Parser::RuleVarType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(140);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << qasm3Parser::T__4)
      | (1ULL << qasm3Parser::T__5)
      | (1ULL << qasm3Parser::T__6)
      | (1ULL << qasm3Parser::T__7)
      | (1ULL << qasm3Parser::T__8)
      | (1ULL << qasm3Parser::T__9)
      | (1ULL << qasm3Parser::T__10)
      | (1ULL << qasm3Parser::T__11)
      | (1ULL << qasm3Parser::T__12)
      | (1ULL << qasm3Parser::T__13))) != 0))) {
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

// Static vars and initialization.
std::vector<dfa::DFA> qasm3Parser::_decisionToDFA;
atn::PredictionContextCache qasm3Parser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN qasm3Parser::_atn;
std::vector<uint16_t> qasm3Parser::_serializedATN;

std::vector<std::string> qasm3Parser::_ruleNames = {
  "program", "header", "include", "statement", "variableDeclarationStatement", 
  "type", "variableDeclarationList", "variableDeclaration", "gateDefinition", 
  "paramsList", "paramDeclaration", "qargsList", "qargDeclaration", "expression", 
  "value", "varType"
};

std::vector<std::string> qasm3Parser::_literalNames = {
  "", "'OPENQASM 3'", "'include'", "'{'", "'}'", "'qubit'", "'qreg'", "'bit'", 
  "'creg'", "'bool'", "'const'", "'int'", "'uint'", "'angle'", "'fixed'", 
  "'gate'", "", "", "'='", "", "'['", "']'", "':'", "';'", "'.'", "','"
};

std::vector<std::string> qasm3Parser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "GateDef", 
  "Gate", "StdGates", "Assign", "StringLiteral", "OpenBracket", "CloseBracket", 
  "Colon", "SemiColon", "Dot", "Comma", "Identifier", "SPACE", "Number"
};

dfa::Vocabulary qasm3Parser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> qasm3Parser::_tokenNames;

qasm3Parser::Initializer::Initializer() {
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
    0x3, 0x1e, 0x91, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x3, 0x2, 
    0x3, 0x2, 0x7, 0x2, 0x25, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x28, 0xb, 0x2, 
    0x3, 0x2, 0x6, 0x2, 0x2b, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0x2c, 0x3, 0x2, 
    0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x34, 0xa, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x40, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x46, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x4d, 0xa, 0x7, 0x3, 0x7, 0x5, 0x7, 
    0x50, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x55, 0xa, 0x8, 
    0xc, 0x8, 0xe, 0x8, 0x58, 0xb, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x5, 0x9, 0x5e, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x62, 0xa, 
    0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x6f, 0xa, 0xb, 
    0xc, 0xb, 0xe, 0xb, 0x72, 0xb, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 
    0xd, 0x7e, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x81, 0xb, 0xd, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x7, 0xe, 0x86, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x89, 0xb, 
    0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x2, 0x2, 0x12, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 
    0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x2, 0x4, 0x4, 0x2, 
    0x15, 0x15, 0x1e, 0x1e, 0x3, 0x2, 0x7, 0x10, 0x2, 0x8d, 0x2, 0x22, 0x3, 
    0x2, 0x2, 0x2, 0x4, 0x30, 0x3, 0x2, 0x2, 0x2, 0x6, 0x37, 0x3, 0x2, 0x2, 
    0x2, 0x8, 0x3f, 0x3, 0x2, 0x2, 0x2, 0xa, 0x45, 0x3, 0x2, 0x2, 0x2, 0xc, 
    0x47, 0x3, 0x2, 0x2, 0x2, 0xe, 0x51, 0x3, 0x2, 0x2, 0x2, 0x10, 0x59, 
    0x3, 0x2, 0x2, 0x2, 0x12, 0x63, 0x3, 0x2, 0x2, 0x2, 0x14, 0x6b, 0x3, 
    0x2, 0x2, 0x2, 0x16, 0x73, 0x3, 0x2, 0x2, 0x2, 0x18, 0x7a, 0x3, 0x2, 
    0x2, 0x2, 0x1a, 0x82, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x8a, 0x3, 0x2, 0x2, 
    0x2, 0x1e, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x20, 0x8e, 0x3, 0x2, 0x2, 0x2, 
    0x22, 0x26, 0x5, 0x4, 0x3, 0x2, 0x23, 0x25, 0x5, 0x6, 0x4, 0x2, 0x24, 
    0x23, 0x3, 0x2, 0x2, 0x2, 0x25, 0x28, 0x3, 0x2, 0x2, 0x2, 0x26, 0x24, 
    0x3, 0x2, 0x2, 0x2, 0x26, 0x27, 0x3, 0x2, 0x2, 0x2, 0x27, 0x2a, 0x3, 
    0x2, 0x2, 0x2, 0x28, 0x26, 0x3, 0x2, 0x2, 0x2, 0x29, 0x2b, 0x5, 0x8, 
    0x5, 0x2, 0x2a, 0x29, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x2c, 0x3, 0x2, 0x2, 
    0x2, 0x2c, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2d, 0x3, 0x2, 0x2, 0x2, 
    0x2d, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2f, 0x7, 0x2, 0x2, 0x3, 0x2f, 
    0x3, 0x3, 0x2, 0x2, 0x2, 0x30, 0x33, 0x7, 0x3, 0x2, 0x2, 0x31, 0x32, 
    0x7, 0x1a, 0x2, 0x2, 0x32, 0x34, 0x7, 0x1e, 0x2, 0x2, 0x33, 0x31, 0x3, 
    0x2, 0x2, 0x2, 0x33, 0x34, 0x3, 0x2, 0x2, 0x2, 0x34, 0x35, 0x3, 0x2, 
    0x2, 0x2, 0x35, 0x36, 0x7, 0x19, 0x2, 0x2, 0x36, 0x5, 0x3, 0x2, 0x2, 
    0x2, 0x37, 0x38, 0x7, 0x4, 0x2, 0x2, 0x38, 0x39, 0x7, 0x15, 0x2, 0x2, 
    0x39, 0x3a, 0x7, 0x19, 0x2, 0x2, 0x3a, 0x7, 0x3, 0x2, 0x2, 0x2, 0x3b, 
    0x3c, 0x5, 0xa, 0x6, 0x2, 0x3c, 0x3d, 0x7, 0x19, 0x2, 0x2, 0x3d, 0x40, 
    0x3, 0x2, 0x2, 0x2, 0x3e, 0x40, 0x5, 0x12, 0xa, 0x2, 0x3f, 0x3b, 0x3, 
    0x2, 0x2, 0x2, 0x3f, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x40, 0x9, 0x3, 0x2, 
    0x2, 0x2, 0x41, 0x42, 0x5, 0xc, 0x7, 0x2, 0x42, 0x43, 0x5, 0xe, 0x8, 
    0x2, 0x43, 0x46, 0x3, 0x2, 0x2, 0x2, 0x44, 0x46, 0x7, 0x12, 0x2, 0x2, 
    0x45, 0x41, 0x3, 0x2, 0x2, 0x2, 0x45, 0x44, 0x3, 0x2, 0x2, 0x2, 0x46, 
    0xb, 0x3, 0x2, 0x2, 0x2, 0x47, 0x4f, 0x5, 0x20, 0x11, 0x2, 0x48, 0x49, 
    0x7, 0x16, 0x2, 0x2, 0x49, 0x4c, 0x7, 0x1e, 0x2, 0x2, 0x4a, 0x4b, 0x7, 
    0x1b, 0x2, 0x2, 0x4b, 0x4d, 0x7, 0x1e, 0x2, 0x2, 0x4c, 0x4a, 0x3, 0x2, 
    0x2, 0x2, 0x4c, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4e, 0x3, 0x2, 0x2, 
    0x2, 0x4e, 0x50, 0x7, 0x17, 0x2, 0x2, 0x4f, 0x48, 0x3, 0x2, 0x2, 0x2, 
    0x4f, 0x50, 0x3, 0x2, 0x2, 0x2, 0x50, 0xd, 0x3, 0x2, 0x2, 0x2, 0x51, 
    0x56, 0x5, 0x10, 0x9, 0x2, 0x52, 0x53, 0x7, 0x1b, 0x2, 0x2, 0x53, 0x55, 
    0x5, 0x10, 0x9, 0x2, 0x54, 0x52, 0x3, 0x2, 0x2, 0x2, 0x55, 0x58, 0x3, 
    0x2, 0x2, 0x2, 0x56, 0x54, 0x3, 0x2, 0x2, 0x2, 0x56, 0x57, 0x3, 0x2, 
    0x2, 0x2, 0x57, 0xf, 0x3, 0x2, 0x2, 0x2, 0x58, 0x56, 0x3, 0x2, 0x2, 
    0x2, 0x59, 0x5d, 0x7, 0x1c, 0x2, 0x2, 0x5a, 0x5b, 0x7, 0x16, 0x2, 0x2, 
    0x5b, 0x5c, 0x7, 0x1e, 0x2, 0x2, 0x5c, 0x5e, 0x7, 0x17, 0x2, 0x2, 0x5d, 
    0x5a, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x61, 
    0x3, 0x2, 0x2, 0x2, 0x5f, 0x60, 0x7, 0x14, 0x2, 0x2, 0x60, 0x62, 0x5, 
    0x1e, 0x10, 0x2, 0x61, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x61, 0x62, 0x3, 0x2, 
    0x2, 0x2, 0x62, 0x11, 0x3, 0x2, 0x2, 0x2, 0x63, 0x64, 0x7, 0x12, 0x2, 
    0x2, 0x64, 0x65, 0x7, 0x1c, 0x2, 0x2, 0x65, 0x66, 0x5, 0x14, 0xb, 0x2, 
    0x66, 0x67, 0x5, 0x18, 0xd, 0x2, 0x67, 0x68, 0x7, 0x5, 0x2, 0x2, 0x68, 
    0x69, 0x5, 0x1c, 0xf, 0x2, 0x69, 0x6a, 0x7, 0x6, 0x2, 0x2, 0x6a, 0x13, 
    0x3, 0x2, 0x2, 0x2, 0x6b, 0x70, 0x5, 0x16, 0xc, 0x2, 0x6c, 0x6d, 0x7, 
    0x1b, 0x2, 0x2, 0x6d, 0x6f, 0x5, 0x16, 0xc, 0x2, 0x6e, 0x6c, 0x3, 0x2, 
    0x2, 0x2, 0x6f, 0x72, 0x3, 0x2, 0x2, 0x2, 0x70, 0x6e, 0x3, 0x2, 0x2, 
    0x2, 0x70, 0x71, 0x3, 0x2, 0x2, 0x2, 0x71, 0x15, 0x3, 0x2, 0x2, 0x2, 
    0x72, 0x70, 0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 0x5, 0xc, 0x7, 0x2, 0x74, 
    0x75, 0x7, 0x16, 0x2, 0x2, 0x75, 0x76, 0x7, 0x1e, 0x2, 0x2, 0x76, 0x77, 
    0x7, 0x17, 0x2, 0x2, 0x77, 0x78, 0x7, 0x18, 0x2, 0x2, 0x78, 0x79, 0x7, 
    0x1c, 0x2, 0x2, 0x79, 0x17, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7f, 0x5, 0x1a, 
    0xe, 0x2, 0x7b, 0x7c, 0x7, 0x1b, 0x2, 0x2, 0x7c, 0x7e, 0x5, 0x1a, 0xe, 
    0x2, 0x7d, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x81, 0x3, 0x2, 0x2, 0x2, 
    0x7f, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x80, 0x3, 0x2, 0x2, 0x2, 0x80, 
    0x19, 0x3, 0x2, 0x2, 0x2, 0x81, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x82, 0x87, 
    0x7, 0x1c, 0x2, 0x2, 0x83, 0x84, 0x7, 0x1b, 0x2, 0x2, 0x84, 0x86, 0x7, 
    0x1c, 0x2, 0x2, 0x85, 0x83, 0x3, 0x2, 0x2, 0x2, 0x86, 0x89, 0x3, 0x2, 
    0x2, 0x2, 0x87, 0x85, 0x3, 0x2, 0x2, 0x2, 0x87, 0x88, 0x3, 0x2, 0x2, 
    0x2, 0x88, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x89, 0x87, 0x3, 0x2, 0x2, 0x2, 
    0x8a, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x8c, 
    0x8d, 0x9, 0x2, 0x2, 0x2, 0x8d, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8f, 
    0x9, 0x3, 0x2, 0x2, 0x8f, 0x21, 0x3, 0x2, 0x2, 0x2, 0xf, 0x26, 0x2c, 
    0x33, 0x3f, 0x45, 0x4c, 0x4f, 0x56, 0x5d, 0x61, 0x70, 0x7f, 0x87, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

qasm3Parser::Initializer qasm3Parser::_init;
