#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <regex.h>

int main(int argc, char const *argv[])
{
    char input[1000];
    regex_t re[50];
    gets(input);

    regcomp(&re[0] , "^create\b"                                     , REG_ICASE | REG_NEWLINE );
    regcomp(&re[0] , "^table\b"                                      , REG_ICASE | REG_NEWLINE );
    regcomp(&re[0] , "^insert\b"                                     , REG_ICASE | REG_NEWLINE );
    regcomp(&re[0] , "^into\b"                                       , REG_ICASE | REG_NEWLINE );
    regcomp(&re[0] , "^select\b"                                     , REG_ICASE | REG_NEWLINE );
    regcomp(&re[0] , "^from\b"                                       , REG_ICASE | REG_NEWLINE );
    regcomp(&re[0] , "^where\b"                                      , REG_ICASE | REG_NEWLINE );
    regcomp(&re[0] , "^primary\b"                                    , REG_ICASE | REG_NEWLINE );
    regcomp(&re[0] , "^foreign\b"                                    , REG_ICASE | REG_NEWLINE );
    regcomp(&re[0] , "^key\b"                                        , REG_ICASE | REG_NEWLINE );
    regcomp(&re[0] , "^default\b"                                    , REG_ICASE | REG_NEWLINE );
    regcomp(&re[0] , "^not\b"                                        , REG_ICASE | REG_NEWLINE );
    regcomp(&re[0] , "^null\b"                                       , REG_ICASE | REG_NEWLINE );
    regcomp(&re[0] , "^and\b"                                        , REG_ICASE | REG_NEWLINE );
    regcomp(&re[0] , "^or\b"                                         , REG_ICASE | REG_NEWLINE );
    regcomp(&re[0] , "^!=|<>|>=|<=|>|<"                              , REG_ICASE | REG_NEWLINE );
    regcomp(&re[0] , "^references\b"                                 , REG_ICASE | REG_NEWLINE );
    regcomp(&re[0] , "^order\b"                                      , REG_ICASE | REG_NEWLINE );
    regcomp(&re[0] , "^by\b"                                         , REG_ICASE | REG_NEWLINE );
    regcomp(&re[0] , "^delete\b"                                     , REG_ICASE | REG_NEWLINE );
    regcomp(&re[0] , "^(int|integer|double|char|varchar|bit|text)\b" , REG_ICASE | REG_NEWLINE );
    regcomp(&re[0] , "^values\b"                                     , REG_ICASE | REG_NEWLINE );
    regcomp(&re[0] , "^auto_increment\b"                             , REG_ICASE | REG_NEWLINE );
    regcomp(&re[0] , "^asc\b"                                        , REG_ICASE | REG_NEWLINE );
    regcomp(&re[0] , "^desc\b"                                       , REG_ICASE | REG_NEWLINE );
    regcomp(&re[0] , "^unique\b"                                     , REG_ICASE | REG_NEWLINE );
    regcomp(&re[0] , "^in\b"                                         , REG_ICASE | REG_NEWLINE );
    regcomp(&re[0] , "^true\b"                                       , REG_ICASE | REG_NEWLINE );
    regcomp(&re[0] , "^false\b"                                      , REG_ICASE | REG_NEWLINE );
    regcomp(&re[0] , "^distinct\b"                                   , REG_ICASE | REG_NEWLINE );
    regcomp(&re[0] , "^set\b"                                        , REG_ICASE | REG_NEWLINE );
    regcomp(&re[0] , "^drop\b"                                       , REG_ICASE | REG_NEWLINE );
    regcomp(&re[0] , "^alter\b"                                      , REG_ICASE | REG_NEWLINE );
    regcomp(&re[0] , "^add\b"                                        , REG_ICASE | REG_NEWLINE );
    regcomp(&re[0] , "^column\b"                                     , REG_ICASE | REG_NEWLINE );
    regcomp(&re[0] , "^\*"                                           , REG_ICASE | REG_NEWLINE );
    regcomp(&re[0] , "^\("                                           , REG_ICASE | REG_NEWLINE );
    regcomp(&re[0] , "^\)"                                           , REG_ICASE | REG_NEWLINE );
    regcomp(&re[0] , "^[a-zA-Z][a-zA-Z0-9_]*\b"                      , REG_ICASE | REG_NEWLINE );
    regcomp(&re[0] , "^[+-]?[0-9]+"                                  , REG_ICASE | REG_NEWLINE );
    regcomp(&re[0] , "^\"[^\"]\""                                    , REG_ICASE | REG_NEWLINE );
    regcomp(&re[0] , "^[ \t\r\n][ \t\r\n]*"                          , REG_ICASE | REG_NEWLINE );

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

    return 0;
}