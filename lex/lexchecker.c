#include <stdio.h>


extern int yylex();
extern int yylineno;
extern char * yytext;

char *names[]={NULL,"CREATE","TABLE","INSERT","INTO","SELECT","FROM","WHERE","PRIMARY","FOREIGN","KEY","DEFAULT","NOT","TOKEN_NULL","AND","OR","NEQ","GEQ","LEQ","GT","LT","REFERENCES","ORDER","BY","DELETE","INT","DOUBLE","CHAR","VARCHAR","BIT","TEXT","VALUES","AUTO_INCREMENT","ASC","DESC","UNIQUE","IN","TRUE","FALSE","DISTINCT","SET","DROP","ALTER","ADD","COLUMN","ALL_COLUMN","IDENTIFIER","INT_LITERAL"};

int main(void)
{
	int ntoken;

	ntoken=yylex();
	while(ntoken)
	{
		printf("%s\n", names[ntoken]);
		ntoken=yylex();
	}
}