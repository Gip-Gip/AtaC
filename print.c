/* print - project-wide logging function

ARGUMENTS:

char *format - the format of the message being printed

VARIABLES:

va_list arglist - the variable-argument list

*/

#include <print.h>

void print(char *format, ...)
{
    va_list arglist;

    va_start(arglist, format);

    while(*format)
    {
        if(*format == PRINT_STYLDELM) switch(*(++format))
        {
            case(PRINT_STYLSTR):
                LPUTS(va_arg(arglist, char *));
                break;
        }
        else LPUTC(*format);

        format ++;
    }
}
