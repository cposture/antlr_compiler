#include "CalculationVisitor.h"

#include <map>
#include <string>

class MyVisitor : public CalculationVisitor
{
public:
    MyVisitor()
    {
        tab = 0;
    }

    void OutputTab()
    {
        for(int i = 0; i < tab; i++)
        {
            std::cout << "\t";
        }
    }

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
    std::map<std::string, int> m_iden_map;
    int tab;
};
