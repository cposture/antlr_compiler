
// Generated from /home/luffichen/compiler/HelloCompiler/antlr_basics/Calculation.g4 by ANTLR 4.7.1

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

  virtual void enterStatement(CalculationParser::StatementContext *ctx) = 0;
  virtual void exitStatement(CalculationParser::StatementContext *ctx) = 0;

  virtual void enterExpression(CalculationParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(CalculationParser::ExpressionContext *ctx) = 0;


};

