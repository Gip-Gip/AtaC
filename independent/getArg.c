/* getArg - checks the string to see if it's an argument

ARGUMENTS:

char *str - the string being compared

VARIABLES:

int index - used for going through the argument array

*/

#include <getArg.h>

arg getArg(char *str)
{
    int index = 0;

    while(args[index])
    {
        if(!strcmp(args[index + ARGS_SHRTDPTH], str) |
           !strcmp(args[index + ARGS_LONGDPTH], str))
           return index / ARGS_ENTRYDPTH;

        index += ARGS_ENTRYDPTH;
    }

    return index;
}
