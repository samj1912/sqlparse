lex lexchecker.l 
gcc lexchecker.c lex.yy.c -ll -o lexchecker
./lexchecker < ../input/sample.sql
