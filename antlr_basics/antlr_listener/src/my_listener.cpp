#include "my_listener.h"
#include <iostream>

using namespace std;

void MyListener::enterProgram(CalculationParser::ProgramContext *ctx)
{
    cout << "enterProgram:"<< ctx->getText()  <<  endl;
}

void MyListener::exitProgram(CalculationParser::ProgramContext *ctx)
{
    cout << "exitProgram:"<< ctx->getText() << endl;
}

void MyListener::enterPrint(CalculationParser::PrintContext *ctx)
{
    cout << "enterPrint:"<< ctx->getText() << endl;
}

void MyListener::exitPrint(CalculationParser::PrintContext *ctx)
{
    cout << "exitPrint:"<< ctx->getText() << endl;
}

void MyListener::enterAssignment(CalculationParser::AssignmentContext *ctx)
{
    cout << "enterAssignment:"<< ctx->getText() << endl;
}

void MyListener::exitAssignment(CalculationParser::AssignmentContext *ctx)
{
    cout << "exitAssignment:"<< ctx->getText() << endl;
}

void MyListener::enterBlank(CalculationParser::BlankContext *ctx)
{
    cout << "enterBlank:"<< ctx->getText() << endl;
}

void MyListener::exitBlank(CalculationParser::BlankContext *ctx)
{
    cout << "exitBlank:"<< ctx->getText() << endl;
}

void MyListener::enterResult(CalculationParser::ResultContext *ctx)
{
    cout << "enterResult:"<< ctx->getText() << endl;
}

void MyListener::exitResult(CalculationParser::ResultContext *ctx)
{
    cout << "exitResult:"<< ctx->getText() << endl;
}

void MyListener::enterParen(CalculationParser::ParenContext *ctx)
{
    cout << "enterParen:"<< ctx->getText() << endl;
}

void MyListener::exitParen(CalculationParser::ParenContext *ctx)
{
    cout << "exitParen:"<< ctx->getText() << endl;
}

void MyListener::enterIden(CalculationParser::IdenContext *ctx)
{
    cout << "enterIden:"<< ctx->getText() << endl;
}

void MyListener::exitIden(CalculationParser::IdenContext *ctx)
{
    cout << "exitIden:"<< ctx->getText() << endl;
}

void MyListener::enterAddSub(CalculationParser::AddSubContext *ctx)
{
    cout << "enterAddSub:"<< ctx->getText() << endl;
}

void MyListener::exitAddSub(CalculationParser::AddSubContext *ctx)
{
    cout << "exitAddSub:"<< ctx->getText() << endl;
}

void MyListener::enterMulDiv(CalculationParser::MulDivContext *ctx)
{
    cout << "enterMulDiv:"<< ctx->getText() << endl;
}

void MyListener::exitMulDiv(CalculationParser::MulDivContext *ctx)
{
    cout << "exitMulDiv:"<< ctx->getText() << endl;
}

void MyListener::visitTerminal(antlr4::tree::TerminalNode *node)
{
    cout << "visitTerminal:"<< node->getText() << endl;
}

void MyListener::visitErrorNode(antlr4::tree::ErrorNode *node)
{
    cout << "visitErrorNode:"<< node->getText() << endl;
}

void MyListener::enterEveryRule(antlr4::ParserRuleContext *ctx)
{
    cout << "enterEveryRule:"<< ctx->getText() << endl;
}

void MyListener::exitEveryRule(antlr4::ParserRuleContext *ctx)
{
    cout << "exitEveryRule:"<< ctx->getText() << endl;
}
