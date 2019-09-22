
// Generated from /home/luffichen/compiler/HelloCompiler/antlr_basics/Calculation.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "CalculationParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by CalculationParser.
 */
class  CalculationVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by CalculationParser.
   */
    virtual antlrcpp::Any visitProgram(CalculationParser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitStatement(CalculationParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitExpression(CalculationParser::ExpressionContext *context) = 0;


};

