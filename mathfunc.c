#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "misc.h"

double addition(char *inputBuffer, double lastSum)
{   
    double result = 0;

    while (inputBuffer[0] != '=')
    {
        if (inputBuffer[0] == 'm')
        {
            result = lastSum;
            printf("Value in memory loaded: %f\n", lastSum);
            printf("Enter a number to add to the retrieved value\n");
            getInput(inputBuffer);
        } 
        else
        {
            getInput(inputBuffer);
        }
        result += atof(inputBuffer);
    }
    
    system("clear");
    return result;
}