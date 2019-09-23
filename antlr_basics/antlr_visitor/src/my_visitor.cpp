#include "my_visitor.h"
#include <iostream>

using namespace std;

antlrcpp::Any MyVisitor::visitProgram(CalculationParser::ProgramContext *context)
{
    cout << "visitProgram:" << context->getText() << endl;

    return visitChildren(context);
}

antlrcpp::Any MyVisitor::visitPrint(CalculationParser::PrintContext *context)
{
    cout << "visitPrint:" << context->getText() << endl;

    return visitChildren(context);
}

antlrcpp::Any MyVisitor::visitAssignment(CalculationParser::AssignmentContext *context)
{
    cout << "visitAssignment:" << context->getText() << endl;

    return visitChildren(context);
}

antlrcpp::Any MyVisitor::visitBlank(CalculationParser::BlankContext *context)
{
    cout << "visitBlank:" << context->getText() << endl;

    return visitChildren(context);
}

antlrcpp::Any MyVisitor::visitResult(CalculationParser::ResultContext *context)
{
    cout << "visitResult:" << context->getText() << endl;

    return visitChildren(context);
}

antlrcpp::Any MyVisitor::visitParen(CalculationParser::ParenContext *context)
{
    cout << "visitParen:" << context->getText() << endl;

    return visitChildren(context);
}

antlrcpp::Any MyVisitor::visitIden(CalculationParser::IdenContext *context)
{
    cout << "visitIden:" << context->getText() << endl;

    return visitChildren(context);
}

antlrcpp::Any MyVisitor::visitAddSub(CalculationParser::AddSubContext *context)
{
    cout << "visitAddSub:" << context->getText() << endl;

    return visitChildren(context);
}

antlrcpp::Any MyVisitor::visitMulDiv(CalculationParser::MulDivContext *context)
{
    cout << "visitMulDiv:" << context->getText() << endl;

    return visitChildren(context);
}
