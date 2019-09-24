
// Generated from Calculation.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "CalculationParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by CalculationParser.
 */
class  CalculationListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(CalculationParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(CalculationParser::ProgramContext *ctx) = 0;

  virtual void enterPrint(CalculationParser::PrintContext *ctx) = 0;
  virtual void exitPrint(CalculationParser::PrintContext *ctx) = 0;

  virtual void enterAssignment(CalculationParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(CalculationParser::AssignmentContext *ctx) = 0;

  virtual void enterBlank(CalculationParser::BlankContext *ctx) = 0;
  virtual void exitBlank(CalculationParser::BlankContext *ctx) = 0;

  virtual void enterResult(CalculationParser::ResultContext *ctx) = 0;
  virtual void exitResult(CalculationParser::ResultContext *ctx) = 0;

  virtual void enterParen(CalculationParser::ParenContext *ctx) = 0;
  virtual void exitParen(CalculationParser::ParenContext *ctx) = 0;

  virtual void enterIden(CalculationParser::IdenContext *ctx) = 0;
  virtual void exitIden(CalculationParser::IdenContext *ctx) = 0;

  virtual void enterAddSub(CalculationParser::AddSubContext *ctx) = 0;
  virtual void exitAddSub(CalculationParser::AddSubContext *ctx) = 0;

  virtual void enterMulDiv(CalculationParser::MulDivContext *ctx) = 0;
  virtual void exitMulDiv(CalculationParser::MulDivContext *ctx) = 0;


};

