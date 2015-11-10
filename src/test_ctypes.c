#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "test_ctypes.h"

int
msg (char *buffer, int size)
{
    printf("msg: %s\t%i\n", buffer, size);
    return 0;
}

int
reset ()
{
    printf("reset\n");
    char *buffer = MSG;
    msg (buffer, 1);
    return 0;
}