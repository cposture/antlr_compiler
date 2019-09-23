#include <fstream>
#include <iostream>

#include "antlr4-runtime.h"

#include "CalculationLexer.h"
#include "CalculationParser.h"
#include "my_listener.h"

using std::cout;
using std::endl;
using std::ifstream;

using antlr4::ANTLRInputStream;
using antlr4::CommonTokenStream;

int main(int argc, char* argv[]) {
    // 1. Read the source file
    ifstream stream;
    stream.open(argv[1]);

    // 2. Create an input stream of the source file
    ANTLRInputStream input(stream);

    // 3. Create a lexer for tokenizing the stream
    CalculationLexer lexer(&input);

    // 4. Create a token stream
    CommonTokenStream tokens(&lexer);

    // 5. Create a parser for recognizing the tokens
    CalculationParser parser(&tokens);

    // 6. Try to parse one of the rules
    CalculationParser::ProgramContext *tree = parser.program();

    cout<<tree->toStringTree(&parser)<<endl;

    antlr4::tree::ParseTreeWalker walker;
    MyListener listener;

    walker.walk(&listener, tree);
}
