/*

ARGUMENTS:

VARIABLES:

char *args[] - holds all the arguments

*/

#include <ataX.h>

char *args[] =
{
    "-h", "--help", "displays this message and exits",
    "-l", "--log", "sets the log file",
    "-L", "--license", "displays the license and exits",
    "-n", "--newline-terminates", "treats newlines as semicolons",
    "-o", "--out", "sets the output file",
    "-y", "--overwrite", "overwrites files without asking",
    NULL,
};
