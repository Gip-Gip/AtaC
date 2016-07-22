#include <ataX.h>

#define HELP_USAGE "\nUSAGE:\n\nataX in.foo [arguments]\n\n\
arguments are read left to right\n\n"
#define HELP_FORMAT "\"%s\" or \"%s\" %s\n\n", \
                    args[index + ARGS_SHRTDPTH], \
                    args[index + ARGS_LONGDPTH], \
                    args[index + ARGS_HELPDPTH]
