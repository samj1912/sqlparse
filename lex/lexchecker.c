#include <stdio.h>
#include "lexchecker.h"

extern int yylex();
extern int yylineno;
extern char * yytext;

// char *names[] = {  };

int main()
{
	int ntoken,vtoken;

	ntoken = yylex();
	while(ntoken)
	{
		printf("%d\n",ntoken);
		ntoken = yylex();
	}
	return 0;
}

