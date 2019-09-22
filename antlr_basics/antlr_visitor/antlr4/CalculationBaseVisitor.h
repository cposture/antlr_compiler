
// Generated from /home/luffichen/compiler/HelloCompiler/antlr_basics/Calculation.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "CalculationVisitor.h"


/**
 * This class provides an empty implementation of CalculationVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  CalculationBaseVisitor : public CalculationVisitor {
public:

  virtual antlrcpp::Any visitProgram(CalculationParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(CalculationParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(CalculationParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }


};

