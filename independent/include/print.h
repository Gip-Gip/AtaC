#include <stdio.h>
#include <stdarg.h>

extern FILE *logFile;

#define LPUTS(str) fputs(str, stderr); if(logFile) fputs(str, logFile);
#define LPUTC(chr) fputc(chr, stderr); if(logFile) fputc(chr, logFile);

#define PRINT_STYLDELM '%'
#define PRINT_STYLSTR 's'
