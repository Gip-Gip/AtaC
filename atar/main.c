/* main - handles arguments and makes calls

ARGUMENTS:

int argc - the amount of arguments provided in argv

char *argv[] - an array of arguments

VARIABLES:

FILE *logFile - the file that holds log data

int argn - used to go through argv

bool overwrite - tells main to overwrite if true

*/

#include <main.h>

FILE *logFile;

int main(int argc, char *argv[])
{
    int argn = 0;
    bool overwrite = false;

    print(MSG_SPLASH);

    while(++argn < argc)
    {
        switch(getArg(argv[argn]))
        {
            case(arg_help):
                help();
                return err_helpGiven;
                break;

            case(arg_license):
                print(MSG_LICENSE);
                return err_licenseGiven;
                break;

            case(arg_newlineTerminates):
                break;

            case(arg_overwrite):
                overwrite = true;
                break;

            case(arg_log):case(arg_out):
                break;

            default:
                switch(getArg(argv[argn - ARGSZ]))
                {
                    case(arg_log):
                        if(!overwrite && fopen(argv[argn], "rb") && !errno)
                        {
                            print(MSG_FILEEXISTS);
                            return err_fileExists;
                        }

                        if(!(logFile = fopen(argv[argn], "wb")))
                        {
                            perror(MSG_PERROR);
                            return errno;
                        }
                        break;

                    case(arg_out):
                        if(!overwrite && fopen(argv[argn], "rb") && !errno)
                        {
                            print(MSG_FILEEXISTS);
                            return err_fileExists;
                        }

                        if(!freopen(argv[argn], "wb", stdout))
                        {
                            perror(MSG_PERROR);
                            return errno;
                        }
                        break;

                    default:
                        if(!freopen(argv[argn], "rb", stdin))
                        {
                            perror(MSG_PERROR);
                            return errno;
                        }
                        break;
                }
        }
    }

    return none;
}
