
// Generated from Calculation.g4 by ANTLR 4.7.2

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

  virtual antlrcpp::Any visitPrint(CalculationParser::PrintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignment(CalculationParser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlank(CalculationParser::BlankContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitResult(CalculationParser::ResultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParen(CalculationParser::ParenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIden(CalculationParser::IdenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAddSub(CalculationParser::AddSubContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMulDiv(CalculationParser::MulDivContext *ctx) override {
    return visitChildren(ctx);
  }


};

