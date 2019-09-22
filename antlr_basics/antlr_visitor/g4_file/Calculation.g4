grammar Calculation;

import numbers;

program: statement+;

statement: expression
    | IDENTIFIER '=' expression;

IDENTIFIER: [a-zA-Z]+;

expression: expression ('*' | '/') expression
    | expression ('+' | '-') expression
    | ('+' | '-')? Number
    | '(' expression ')'
    ;

NEWLINE: '\r'?'\n' -> skip;
SPACES: [ \t]+ -> skip;
