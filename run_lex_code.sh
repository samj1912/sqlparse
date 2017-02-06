lex lex/lexchecker.l 
gcc lex/lexchecker.c lex.yy.c -ll -o lex/lexchecker
lex/lexchecker < input/sample.sql

