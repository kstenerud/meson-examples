#include <mylib.h>

#define QUOTE(str) #str
#define EXPAND_AND_QUOTE(str) QUOTE(str)


/* This function will not be exported and is not
 * directly callable by users of this library.
 */
int internal_function()
{
    return 0;
}

int mylib_func_returning_0()
{
    return internal_function();
}

const char* mylib_version()
{
    return EXPAND_AND_QUOTE(PROJECT_VERSION);
}
