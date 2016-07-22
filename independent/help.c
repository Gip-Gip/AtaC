/* help - prints the help message to the screen

ARGUMENTS:

VARIABLES:

index - used to go through the argument array

*/

#include <help.h>

void help()
{
    int index = 0;

    print(HELP_USAGE);

    while(args[index])
    {
        print(HELP_FORMAT);
        index += ARGS_ENTRYDPTH;
    }
}
