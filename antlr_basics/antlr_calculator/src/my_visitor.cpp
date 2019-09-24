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
    tab++;

    OutputTab();
    cout << "visitPrint:" << context->getText() << endl;

    const int value = visit(context);

    OutputTab();
    cout << "value:" << value << endl;

    tab--;
}

antlrcpp::Any MyVisitor::visitAssignment(CalculationParser::AssignmentContext *context)
{
    tab++;

    OutputTab();
    cout << "visitAssignment:" << context->getText() << endl;

    const string &key = context->IDENTIFIER()->getText();
    const int value = visit(context->expression());

    m_iden_map[key] = value;

    OutputTab();
    cout << "value:" << value << endl;

    tab--;
}

antlrcpp::Any MyVisitor::visitBlank(CalculationParser::BlankContext *context)
{
    tab++;

    OutputTab();
    cout << "visitBlank:" << context->getText() << endl;

    antlrcpp::Any temp =  visitChildren(context);

    tab--;

    return temp;
}

antlrcpp::Any MyVisitor::visitResult(CalculationParser::ResultContext *context)
{
    tab++;

    OutputTab();
    cout << "visitResult:" << context->getText() << endl;

    int temp = std::atoi(context->getText().c_str());

    tab--;

    return temp;
}

antlrcpp::Any MyVisitor::visitParen(CalculationParser::ParenContext *context)
{
    tab++;

    OutputTab();
    cout << "visitParen:" << context->getText() << endl;

    antlrcpp::Any temp = visit(context->expression());

    tab--;

    return temp;
}

antlrcpp::Any MyVisitor::visitIden(CalculationParser::IdenContext *context)
{
    tab++;

    OutputTab();
    cout << "visitIden:" << context->getText() << endl;

    const string key = context->getText();

    if(m_iden_map.find(key) == m_iden_map.end())
    {
        throw (string("key not assign before get, key:") + key);
    }

    tab--;

    return m_iden_map[key];
}

antlrcpp::Any MyVisitor::visitAddSub(CalculationParser::AddSubContext *context)
{
    tab++;

    OutputTab();
    cout << "visitAddSub:" << context->getText() << endl;

    const int left_value = visit(context->expression()[0]);
    const int right_value = visit(context->expression()[1]);
    const antlr4::Token *op = context->op;
    int result;

    if(op->getText() == "+")
    {
        result = left_value + right_value;
    }
    else
    {
        result = left_value - right_value;
    }

    tab--;

    return result;
}

antlrcpp::Any MyVisitor::visitMulDiv(CalculationParser::MulDivContext *context)
{
    tab++;

    OutputTab();
    cout << "visitAddSub:" << context->getText() << endl;

    const int left_value = visit(context->expression()[0]);
    const int right_value = visit(context->expression()[1]);
    const antlr4::Token *op = context->op;
    int result;

    if(op->getText() == "*")
    {
        result = left_value * right_value;
    }
    else
    {
        if(right_value == 0)
        {
            throw string("can not div 0");
        }

        result = left_value / right_value;
    }

    tab--;

    return result;
}
