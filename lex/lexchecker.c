#include <stdio.h>

extern int yylex();
extern int yylineno;
extern char * yytext;

char *names[]={NULL,"CREATE","TABLE","INSERT","INTO","SELECT","FROM","WHERE","PRIMARY","FOREIGN","KEY","DEFAULT","NOT","TOKEN_NULL","AND","OR","COMPARATOR","REFERENCES","ORDER","BY","DELETE","DATATYPE","VALUES","AUTO_INCREMENT","ASC","DESC","UNIQUE","IN","TRUE","FALSE","DISTINCT","SET","DROP","ALTER","ADD","COLUMN","ALL_COLUMN","BRACKET_OPEN","BRACKET_CLOSE","IDENTIFIER","INT_LITERAL","STRING_LITERAL"," ","SEMICOLON"};

int main(void)
{
	int ntoken;

	ntoken=yylex();
	while(ntoken)
	{
		printf("%s ", names[ntoken]);
		ntoken=yylex();
	}
	printf("\n");
	return 0;
}
