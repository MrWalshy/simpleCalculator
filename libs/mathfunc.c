#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "misc.h"

void checkForMemLoad(char *inputBuffer, double lastSum, double *result)
{
    if (inputBuffer[0] == 'm')
        {
            *result = lastSum;
            printf("Value in memory loaded: %f\n", lastSum);
            getInput(inputBuffer);
        } 
        else
        {
            getInput(inputBuffer);
        }
}

double addition(char *inputBuffer, double lastSum)
{   
    double result = 0; // Initialise result to be returned

    // Check for exit condition
    while (inputBuffer[0] != '=')
    {
        checkForMemLoad(inputBuffer, lastSum, &result);
        result += atof(inputBuffer); // Adds inputBuffer as a float to result
    }
    
    system("clear");
    return result;
}

double subtraction(char *inputBuffer, double lastSum)
{
    // Declared result, initialise with input from user for starting value
    double result;
    printf("Enter starting value\n");
    getInput(inputBuffer);
    result = atof(inputBuffer);

    while (inputBuffer[0] != '=')
    {
        checkForMemLoad(inputBuffer, lastSum, &result);
        result -= atof(inputBuffer);
    }
    
    system("clear");
    return result;
}