#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "misc.h"

static bool checkForMemLoad(char *inputBuffer, double lastSum, double *result)
{
    if (inputBuffer[0] == 'm')
        {
            *result = lastSum;
            printf("Value in memory loaded: %f\n", *result);

            return true;
        } 
        return false;
}