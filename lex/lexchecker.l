%{
#include "lexchecker.h"
%}

%%

"create"		return CREATE;
"select"		return SELECT;
"from"			return FROM;
"where"			return WHERE;
"group"			return GROUP;
"by"			return BY;
"having"		return HAVING;
"order"			return ORDER;
.				printf("Unrecognised token\n");
%%

int yywrap(void)
{
	return 1;
}
