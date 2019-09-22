
// Generated from /home/luffichen/compiler/HelloCompiler/antlr_basics/Calculation.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "CalculationListener.h"


/**
 * This class provides an empty implementation of CalculationListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  CalculationBaseListener : public CalculationListener {
public:

  virtual void enterProgram(CalculationParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(CalculationParser::ProgramContext * /*ctx*/) override { }

  virtual void enterStatement(CalculationParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(CalculationParser::StatementContext * /*ctx*/) override { }

  virtual void enterExpression(CalculationParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(CalculationParser::ExpressionContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

