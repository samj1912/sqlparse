%{
	#include "sql.h"
%}


%%

create 							{ return CREATE; }
table 							{ return TABLE; }
insert 							{ return INSERT; }
into 							{ return INTO; }
select 							{ return SELECT; }
from 							{ return FROM; }
where 							{ return WHERE; }
primary 						{ return PRIMARY; }
foreign 						{ return FOREIGN; }
key 							{ return KEY; }
default 						{ return DEFAULT; }
not 							{ return NOT; }
null 							{ return TOKEN_NULL; }
and 							{ return AND; }
or 								{ return OR; }
"!="                    		{ return NEQ; }
"<>"                    		{ return NEQ; }
">="							{ return GEQ; }
"<="							{ return LEQ; }
">"								{ return GT; }
"<"								{ return LT; }
references 						{ return REFERENCES; }
order 							{ return ORDER; }
by 								{ return BY; }
delete 							{ return DELETE; }
int 							{ return INT; }
integer                 		{ return INT; }
double 							{ return DOUBLE; }
char 							{ return CHAR; }
varchar 						{ return VARCHAR; }
bit                    			{ return BIT; }
text 							{ return TEXT; }
values 							{ return VALUES; }
auto_increment 					{ return AUTO_INCREMENT; }
asc 							{ return ASC; }
desc 							{ return DESC; }
unique                  		{ return UNIQUE; }
in                      		{ return IN; }
true                    		{ return TRUE; }
false                   		{ return FALSE; }
distinct                		{ return DISTINCT; }
set 							{ return SET;}
drop 							{ return DROP;}
alter 							{ return ALTER;}
add 							{ return ADD;}
column 							{ return COLUMN;}
\*								{ return ALL_COLUMN;}
[a-zA-Z][a-zA-Z0-9_]*   		{ return IDENTIFIER; }
[+-]?[0-9]+ 					{ return INT_LITERAL; }
[ \t\r\n]+               		{ /* ignore */ }
.                       		;

%%

int yywrap(void) {
	return 1;
}
