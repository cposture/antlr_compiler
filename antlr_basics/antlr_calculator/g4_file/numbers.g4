lexer grammar numbers;

Number: Integer;
Integer: Digit Digit*;
Digit : '0' | '1' | '2' | '3' | '4' | '5' | '6' | '7' | '8' | '9';
