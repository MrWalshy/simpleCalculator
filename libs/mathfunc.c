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

double addition(char *inputBuffer, double lastSum)
{   
    double result = 0; // Initialise result to be returned

    printf("Enter starting value\n");
    getInput(inputBuffer);
    if (!checkForMemLoad(inputBuffer, lastSum, &result)) result = atof(inputBuffer);

    // Check for exit condition
    while (inputBuffer[0] != '=')
    {
        getInput(inputBuffer);
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
    if (!checkForMemLoad(inputBuffer, lastSum, &result)) result = atof(inputBuffer);

    while (inputBuffer[0] != '=')
    {
        getInput(inputBuffer);
        result -= atof(inputBuffer);
    }
    
    system("clear");
    return result;
}

double factorial(char *inputBuffer, double lastSum)
{
    double result;
    int i;
    printf("Enter the whole number you wish to find the factorial of\n");
    getInput(inputBuffer);
    result = atof(inputBuffer);
    i = result;

    for (i; i > 1; i--)
    {
        result = result * (i - 1);
    }

    return result;
}