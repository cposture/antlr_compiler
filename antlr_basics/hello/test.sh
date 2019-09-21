#!/usr/bin/env sh
alias antlr4='java -Xmx500M -cp "/usr/local/lib/antlr-4.7.2-complete.jar:$CLASSPATH" org.antlr.v4.Tool'
alias grun='java org.antlr.v4.gui.TestRig'
echo 'generate java code...'
antlr4 Hello.g4 -o antlr4-runtime-java
cd antlr4-runtime-java
echo 'javac *.java...'
javac *.java
echo 'done'
echo 'input hello xxx and Ctrl+D to finish:'
grun Hello welcome -tokens
echo 'show gui:'
grun Hello welcome -gui
