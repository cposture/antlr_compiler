
// Generated from Calculation.g4 by ANTLR 4.7.2

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

  virtual void enterPrint(CalculationParser::PrintContext * /*ctx*/) override { }
  virtual void exitPrint(CalculationParser::PrintContext * /*ctx*/) override { }

  virtual void enterAssignment(CalculationParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(CalculationParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterBlank(CalculationParser::BlankContext * /*ctx*/) override { }
  virtual void exitBlank(CalculationParser::BlankContext * /*ctx*/) override { }

  virtual void enterResult(CalculationParser::ResultContext * /*ctx*/) override { }
  virtual void exitResult(CalculationParser::ResultContext * /*ctx*/) override { }

  virtual void enterParen(CalculationParser::ParenContext * /*ctx*/) override { }
  virtual void exitParen(CalculationParser::ParenContext * /*ctx*/) override { }

  virtual void enterIden(CalculationParser::IdenContext * /*ctx*/) override { }
  virtual void exitIden(CalculationParser::IdenContext * /*ctx*/) override { }

  virtual void enterAddSub(CalculationParser::AddSubContext * /*ctx*/) override { }
  virtual void exitAddSub(CalculationParser::AddSubContext * /*ctx*/) override { }

  virtual void enterMulDiv(CalculationParser::MulDivContext * /*ctx*/) override { }
  virtual void exitMulDiv(CalculationParser::MulDivContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

