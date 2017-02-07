lex lexchecker.l 
gcc lexchecker.c lex.yy.c -ll -o lexchecker
cat ../input/sample.sql
echo -e ""
./lexchecker < ../input/sample.sql
