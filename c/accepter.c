#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <regex.h>


int main(int argc, char const *argv[])
{
    char input[1000];
    regex_t re;
    gets(input);
    
    regex_t re_create;
    regcomp(&re_create, "create" , REG_ICASE | REG_NEWLINE);
    regex_t re_table;
    regcomp(&re_table, "table" , REG_ICASE | REG_NEWLINE);
    regex_t re_insert;
    regcomp(&re_insert, "insert" , REG_ICASE | REG_NEWLINE);
    regex_t re_into;
    regcomp(&re_into, "into" , REG_ICASE | REG_NEWLINE);
    regex_t re_select;
    regcomp(&re_select, "select" , REG_ICASE | REG_NEWLINE);
    regex_t re_from;
    regcomp(&re_from, "from" , REG_ICASE | REG_NEWLINE);
    regex_t re_where;
    regcomp(&re_where, "where" , REG_ICASE | REG_NEWLINE);
    regex_t re_primary;
    regcomp(&re_primary, "primary" , REG_ICASE | REG_NEWLINE);
    regex_t re_foreign;
    regcomp(&re_foreign, "foreign" , REG_ICASE | REG_NEWLINE);
    regex_t re_key;
    regcomp(&re_key, "key" , REG_ICASE | REG_NEWLINE);
    regex_t re_default;
    regcomp(&re_default, "default" , REG_ICASE | REG_NEWLINE);
    regex_t re_not;
    regcomp(&re_not, "not" , REG_ICASE | REG_NEWLINE);
    regex_t re_token_null;
    regcomp(&re_token_null, "null" , REG_ICASE | REG_NEWLINE);
    regex_t re_and;
    regcomp(&re_and, "and" , REG_ICASE | REG_NEWLINE);
    regex_t re_or;
    regcomp(&re_or, "or" , REG_ICASE | REG_NEWLINE);
    regex_t re_neq;
    regcomp(&re_neq, "!=" , REG_ICASE | REG_NEWLINE);
    regex_t re_geq;
    regcomp(&re_geq, ">=" , REG_ICASE | REG_NEWLINE);
    regex_t re_leq;
    regcomp(&re_leq, "<=" , REG_ICASE | REG_NEWLINE);
    regex_t re_gt;
    regcomp(&re_gt, ">" , REG_ICASE | REG_NEWLINE);
    regex_t re_lt;
    regcomp(&re_lt, "<" , REG_ICASE | REG_NEWLINE);
    regex_t re_references;
    regcomp(&re_references, "references" , REG_ICASE | REG_NEWLINE);
    regex_t re_order;
    regcomp(&re_order, "order" , REG_ICASE | REG_NEWLINE);
    regex_t re_by;
    regcomp(&re_by, "by" , REG_ICASE | REG_NEWLINE);
    regex_t re_delete;
    regcomp(&re_delete, "delete" , REG_ICASE | REG_NEWLINE);
    regex_t re_int;
    regcomp(&re_int, "integer" , REG_ICASE | REG_NEWLINE);
    regex_t re_double;
    regcomp(&re_double, "double" , REG_ICASE | REG_NEWLINE);
    regex_t re_char;
    regcomp(&re_char, "char" , REG_ICASE | REG_NEWLINE);
    regex_t re_varchar;
    regcomp(&re_varchar, "varchar" , REG_ICASE | REG_NEWLINE);
    regex_t re_bit;
    regcomp(&re_bit, "bit" , REG_ICASE | REG_NEWLINE);
    regex_t re_text;
    regcomp(&re_text, "text" , REG_ICASE | REG_NEWLINE);
    regex_t re_values;
    regcomp(&re_values, "values" , REG_ICASE | REG_NEWLINE);
    regex_t re_auto_increment;
    regcomp(&re_auto_increment, "auto_increment" , REG_ICASE | REG_NEWLINE);
    regex_t re_asc;
    regcomp(&re_asc, "asc" , REG_ICASE | REG_NEWLINE);
    regex_t re_desc;
    regcomp(&re_desc, "desc" , REG_ICASE | REG_NEWLINE);
    regex_t re_unique;
    regcomp(&re_unique, "unique" , REG_ICASE | REG_NEWLINE);
    regex_t re_in;
    regcomp(&re_in, "in" , REG_ICASE | REG_NEWLINE);
    regex_t re_true;
    regcomp(&re_true, "true" , REG_ICASE | REG_NEWLINE);
    regex_t re_false;
    regcomp(&re_false, "false" , REG_ICASE | REG_NEWLINE);
    regex_t re_distinct;
    regcomp(&re_distinct, "distinct" , REG_ICASE | REG_NEWLINE);
    regex_t re_set;
    regcomp(&re_set, "set" , REG_ICASE | REG_NEWLINE);
    regex_t re_drop;
    regcomp(&re_drop, "drop" , REG_ICASE | REG_NEWLINE);
    regex_t re_alter;
    regcomp(&re_alter, "alter" , REG_ICASE | REG_NEWLINE);
    regex_t re_add;
    regcomp(&re_add, "add" , REG_ICASE | REG_NEWLINE);
    regex_t re_column;
    regcomp(&re_column, "column" , REG_ICASE | REG_NEWLINE);
    regex_t re_all_column;
    regcomp(&re_all_column, "\*" , REG_ICASE | REG_NEWLINE);
    regex_t re_identifier;
    regcomp(&re_identifier, "[a-zA-Z][a-zA-Z0-9_]*" , REG_ICASE | REG_NEWLINE);
    regex_t re_int_literal;
    regcomp(&re_int_literal, "[+-]?[0-9]+" , REG_ICASE | REG_NEWLINE);
    regex_t re_int_literal;
    regcomp(&re_int_literal, "\"[+-]?[0-9]+\"" , REG_ICASE | REG_NEWLINE);


    while(1)
    {
        for(i=0;i<sizeof(re)/sizeof(re[0]);i++)
        {
            if(regexec(&re[i], pattern, 0, NULL, 0))
            {
                printf("%s\n", names[i]);
                
            }
        }
    }


    regcomp(&re, "a\d*", REG_ICASE | REG_NEWLINE);
    if(regexec(&re, "A666666666", 0, NULL, 0) == 0)
        printf("Yo\n"); 
    else
        printf("No\n");
    return 0;
}