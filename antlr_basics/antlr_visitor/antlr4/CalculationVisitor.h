
// Generated from Calculation.g4 by ANTLR 4.7.2

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

    virtual antlrcpp::Any visitPrint(CalculationParser::PrintContext *context) = 0;

    virtual antlrcpp::Any visitAssignment(CalculationParser::AssignmentContext *context) = 0;

    virtual antlrcpp::Any visitBlank(CalculationParser::BlankContext *context) = 0;

    virtual antlrcpp::Any visitResult(CalculationParser::ResultContext *context) = 0;

    virtual antlrcpp::Any visitParen(CalculationParser::ParenContext *context) = 0;

    virtual antlrcpp::Any visitIden(CalculationParser::IdenContext *context) = 0;

    virtual antlrcpp::Any visitAddSub(CalculationParser::AddSubContext *context) = 0;

    virtual antlrcpp::Any visitMulDiv(CalculationParser::MulDivContext *context) = 0;


};

