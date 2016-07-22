enum
{
    none,
    err_unknown,
    err_fileExists,
    err_helpGiven,
    err_licenseGiven,
};

typedef enum
{
    arg_help,
    arg_log,
    arg_license,
    arg_newlineTerminates,
    arg_out,
    arg_overwrite,
    arg_in,
} arg;

typedef enum
{
    false,
    true,
    neither,
} bool;
