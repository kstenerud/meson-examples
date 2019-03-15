#include <stdio.h>
#include <mylib.h>
#include <headeronly.h>

#define QUOTE(str) #str
#define EXPAND_AND_QUOTE(str) QUOTE(str)

int main(int argc, char **argv) {
    if(argc != 1) {
        printf("%s takes no arguments.\n", argv[0]);
        return 1;
    }
    printf("This is project %s, version %s.\n", EXPAND_AND_QUOTE(PROJECT_NAME), EXPAND_AND_QUOTE(PROJECT_VERSION));
    printf("mylib_func_returning_0() returns %d\n", mylib_func_returning_0());
    printf("headeronly_func_returning_99() returns %d\n", headeronly_func_returning_99());
    return 0;
}
