
// Generated from /home/luffichen/compiler/HelloCompiler/antlr_basics/Calculation.g4 by ANTLR 4.7.1


#include "CalculationListener.h"
#include "CalculationVisitor.h"

#include "CalculationParser.h"


using namespace antlrcpp;
using namespace antlr4;

CalculationParser::CalculationParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

CalculationParser::~CalculationParser() {
  delete _interpreter;
}

std::string CalculationParser::getGrammarFileName() const {
  return "Calculation.g4";
}

const std::vector<std::string>& CalculationParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& CalculationParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

CalculationParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CalculationParser::StatementContext *> CalculationParser::ProgramContext::statement() {
  return getRuleContexts<CalculationParser::StatementContext>();
}

CalculationParser::StatementContext* CalculationParser::ProgramContext::statement(size_t i) {
  return getRuleContext<CalculationParser::StatementContext>(i);
}


size_t CalculationParser::ProgramContext::getRuleIndex() const {
  return CalculationParser::RuleProgram;
}

void CalculationParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculationListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void CalculationParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculationListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


antlrcpp::Any CalculationParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalculationVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

CalculationParser::ProgramContext* CalculationParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, CalculationParser::RuleProgram);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(7); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(6);
      statement();
      setState(9); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CalculationParser::T__3)
      | (1ULL << CalculationParser::T__4)
      | (1ULL << CalculationParser::T__5)
      | (1ULL << CalculationParser::IDENTIFIER)
      | (1ULL << CalculationParser::Number))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

CalculationParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CalculationParser::ExpressionContext* CalculationParser::StatementContext::expression() {
  return getRuleContext<CalculationParser::ExpressionContext>(0);
}

tree::TerminalNode* CalculationParser::StatementContext::IDENTIFIER() {
  return getToken(CalculationParser::IDENTIFIER, 0);
}


size_t CalculationParser::StatementContext::getRuleIndex() const {
  return CalculationParser::RuleStatement;
}

void CalculationParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculationListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void CalculationParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculationListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


antlrcpp::Any CalculationParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalculationVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

CalculationParser::StatementContext* CalculationParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, CalculationParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(15);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CalculationParser::T__3:
      case CalculationParser::T__4:
      case CalculationParser::T__5:
      case CalculationParser::Number: {
        enterOuterAlt(_localctx, 1);
        setState(11);
        expression(0);
        break;
      }

      case CalculationParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(12);
        match(CalculationParser::IDENTIFIER);
        setState(13);
        match(CalculationParser::T__0);
        setState(14);
        expression(0);
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

//----------------- ExpressionContext ------------------------------------------------------------------

CalculationParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CalculationParser::ExpressionContext::Number() {
  return getToken(CalculationParser::Number, 0);
}

std::vector<CalculationParser::ExpressionContext *> CalculationParser::ExpressionContext::expression() {
  return getRuleContexts<CalculationParser::ExpressionContext>();
}

CalculationParser::ExpressionContext* CalculationParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<CalculationParser::ExpressionContext>(i);
}


size_t CalculationParser::ExpressionContext::getRuleIndex() const {
  return CalculationParser::RuleExpression;
}

void CalculationParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculationListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void CalculationParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculationListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


antlrcpp::Any CalculationParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalculationVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}


CalculationParser::ExpressionContext* CalculationParser::expression() {
   return expression(0);
}

CalculationParser::ExpressionContext* CalculationParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CalculationParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  CalculationParser::ExpressionContext *previousContext = _localctx;
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, CalculationParser::RuleExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(26);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CalculationParser::T__3:
      case CalculationParser::T__4:
      case CalculationParser::Number: {
        setState(19);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CalculationParser::T__3

        || _la == CalculationParser::T__4) {
          setState(18);
          _la = _input->LA(1);
          if (!(_la == CalculationParser::T__3

          || _la == CalculationParser::T__4)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
        }
        setState(21);
        match(CalculationParser::Number);
        break;
      }

      case CalculationParser::T__5: {
        setState(22);
        match(CalculationParser::T__5);
        setState(23);
        expression(0);
        setState(24);
        match(CalculationParser::T__6);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(36);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(34);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(28);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(29);
          _la = _input->LA(1);
          if (!(_la == CalculationParser::T__1

          || _la == CalculationParser::T__2)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(30);
          expression(5);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(31);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(32);
          _la = _input->LA(1);
          if (!(_la == CalculationParser::T__3

          || _la == CalculationParser::T__4)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(33);
          expression(4);
          break;
        }

        } 
      }
      setState(38);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool CalculationParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 2: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool CalculationParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 4);
    case 1: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> CalculationParser::_decisionToDFA;
atn::PredictionContextCache CalculationParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN CalculationParser::_atn;
std::vector<uint16_t> CalculationParser::_serializedATN;

std::vector<std::string> CalculationParser::_ruleNames = {
  "program", "statement", "expression"
};

std::vector<std::string> CalculationParser::_literalNames = {
  "", "'='", "'*'", "'/'", "'+'", "'-'", "'('", "')'"
};

std::vector<std::string> CalculationParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "IDENTIFIER", "NEWLINE", "SPACES", "Number", 
  "Real", "Exponent", "Decimal", "Integer", "Digit"
};

dfa::Vocabulary CalculationParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> CalculationParser::_tokenNames;

CalculationParser::Initializer::Initializer() {
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
    0x3, 0x12, 0x2a, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x3, 0x2, 0x6, 0x2, 0xa, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0xb, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x12, 0xa, 0x3, 0x3, 0x4, 
    0x3, 0x4, 0x5, 0x4, 0x16, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x5, 0x4, 0x1d, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x25, 0xa, 0x4, 0xc, 0x4, 0xe, 
    0x4, 0x28, 0xb, 0x4, 0x3, 0x4, 0x2, 0x3, 0x6, 0x5, 0x2, 0x4, 0x6, 0x2, 
    0x4, 0x3, 0x2, 0x6, 0x7, 0x3, 0x2, 0x4, 0x5, 0x2, 0x2c, 0x2, 0x9, 0x3, 
    0x2, 0x2, 0x2, 0x4, 0x11, 0x3, 0x2, 0x2, 0x2, 0x6, 0x1c, 0x3, 0x2, 0x2, 
    0x2, 0x8, 0xa, 0x5, 0x4, 0x3, 0x2, 0x9, 0x8, 0x3, 0x2, 0x2, 0x2, 0xa, 
    0xb, 0x3, 0x2, 0x2, 0x2, 0xb, 0x9, 0x3, 0x2, 0x2, 0x2, 0xb, 0xc, 0x3, 
    0x2, 0x2, 0x2, 0xc, 0x3, 0x3, 0x2, 0x2, 0x2, 0xd, 0x12, 0x5, 0x6, 0x4, 
    0x2, 0xe, 0xf, 0x7, 0xa, 0x2, 0x2, 0xf, 0x10, 0x7, 0x3, 0x2, 0x2, 0x10, 
    0x12, 0x5, 0x6, 0x4, 0x2, 0x11, 0xd, 0x3, 0x2, 0x2, 0x2, 0x11, 0xe, 
    0x3, 0x2, 0x2, 0x2, 0x12, 0x5, 0x3, 0x2, 0x2, 0x2, 0x13, 0x15, 0x8, 
    0x4, 0x1, 0x2, 0x14, 0x16, 0x9, 0x2, 0x2, 0x2, 0x15, 0x14, 0x3, 0x2, 
    0x2, 0x2, 0x15, 0x16, 0x3, 0x2, 0x2, 0x2, 0x16, 0x17, 0x3, 0x2, 0x2, 
    0x2, 0x17, 0x1d, 0x7, 0xd, 0x2, 0x2, 0x18, 0x19, 0x7, 0x8, 0x2, 0x2, 
    0x19, 0x1a, 0x5, 0x6, 0x4, 0x2, 0x1a, 0x1b, 0x7, 0x9, 0x2, 0x2, 0x1b, 
    0x1d, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x13, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x18, 
    0x3, 0x2, 0x2, 0x2, 0x1d, 0x26, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x1f, 0xc, 
    0x6, 0x2, 0x2, 0x1f, 0x20, 0x9, 0x3, 0x2, 0x2, 0x20, 0x25, 0x5, 0x6, 
    0x4, 0x7, 0x21, 0x22, 0xc, 0x5, 0x2, 0x2, 0x22, 0x23, 0x9, 0x2, 0x2, 
    0x2, 0x23, 0x25, 0x5, 0x6, 0x4, 0x6, 0x24, 0x1e, 0x3, 0x2, 0x2, 0x2, 
    0x24, 0x21, 0x3, 0x2, 0x2, 0x2, 0x25, 0x28, 0x3, 0x2, 0x2, 0x2, 0x26, 
    0x24, 0x3, 0x2, 0x2, 0x2, 0x26, 0x27, 0x3, 0x2, 0x2, 0x2, 0x27, 0x7, 
    0x3, 0x2, 0x2, 0x2, 0x28, 0x26, 0x3, 0x2, 0x2, 0x2, 0x8, 0xb, 0x11, 
    0x15, 0x1c, 0x24, 0x26, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

CalculationParser::Initializer CalculationParser::_init;
