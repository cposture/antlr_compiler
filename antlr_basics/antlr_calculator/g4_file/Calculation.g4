grammar Calculation;

import numbers;

program: statement+;

statement: expression               # print
    | IDENTIFIER '=' expression     # assignment
    | NEWLINE                       # blank
    ;

IDENTIFIER: [a-zA-Z]+;

expression: expression op = ('*' | '/') expression   # mulDiv
    | expression op = ('+' | '-') expression         # addSub
    | ('+' | '-')? Number                       # result
    | IDENTIFIER                                # iden
    | '(' expression ')'                        # paren
    ;

NEWLINE: '\r'?'\n' -> skip;
SPACES: [ \t]+ -> skip;
