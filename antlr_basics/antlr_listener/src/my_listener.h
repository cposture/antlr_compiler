#include "CalculationListener.h"

class MyListener : public CalculationListener
{
public:
    virtual void enterProgram(CalculationParser::ProgramContext *ctx);
    virtual void exitProgram(CalculationParser::ProgramContext *ctx);
    
    virtual void enterPrint(CalculationParser::PrintContext *ctx);
    virtual void exitPrint(CalculationParser::PrintContext *ctx);
    
    virtual void enterAssignment(CalculationParser::AssignmentContext *ctx);
    virtual void exitAssignment(CalculationParser::AssignmentContext *ctx);
    
    virtual void enterBlank(CalculationParser::BlankContext *ctx);
    virtual void exitBlank(CalculationParser::BlankContext *ctx);
    
    virtual void enterResult(CalculationParser::ResultContext *ctx);
    virtual void exitResult(CalculationParser::ResultContext *ctx);
    
    virtual void enterParen(CalculationParser::ParenContext *ctx);
    virtual void exitParen(CalculationParser::ParenContext *ctx);
    
    virtual void enterIden(CalculationParser::IdenContext *ctx);
    virtual void exitIden(CalculationParser::IdenContext *ctx);
    
    virtual void enterAddSub(CalculationParser::AddSubContext *ctx);
    virtual void exitAddSub(CalculationParser::AddSubContext *ctx);
    
    virtual void enterMulDiv(CalculationParser::MulDivContext *ctx);
    virtual void exitMulDiv(CalculationParser::MulDivContext *ctx);

    virtual void visitTerminal(antlr4::tree::TerminalNode *node);
    virtual void visitErrorNode(antlr4::tree::ErrorNode *node);
    virtual void enterEveryRule(antlr4::ParserRuleContext *ctx);
    virtual void exitEveryRule(antlr4::ParserRuleContext *ctx);
private:
};
