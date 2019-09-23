#include "CalculationVisitor.h"

class MyVisitor : public CalculationVisitor
{
public:
    virtual antlrcpp::Any visitProgram(CalculationParser::ProgramContext *context);

    virtual antlrcpp::Any visitPrint(CalculationParser::PrintContext *context);

    virtual antlrcpp::Any visitAssignment(CalculationParser::AssignmentContext *context);

    virtual antlrcpp::Any visitBlank(CalculationParser::BlankContext *context);

    virtual antlrcpp::Any visitResult(CalculationParser::ResultContext *context);

    virtual antlrcpp::Any visitParen(CalculationParser::ParenContext *context);

    virtual antlrcpp::Any visitIden(CalculationParser::IdenContext *context);

    virtual antlrcpp::Any visitAddSub(CalculationParser::AddSubContext *context);

    virtual antlrcpp::Any visitMulDiv(CalculationParser::MulDivContext *context);
private:
};
