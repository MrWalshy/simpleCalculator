#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "./libs/mathfunc.h"
#include "./libs/misc.h"

char inputBuffer[14];
double lastSumMemory = 0;

void openCalculator(char *inputBuffer);
void printMenu();
void instructions();

int main()
{
    char operator;
    int running = true;

    while (running)
    {
        printMenu();
        getInput(inputBuffer);
        system("clear");
        printf("Enter '=' to finish, or 'm' to use the number in memory\n"); 
        operator = inputBuffer[0];

        switch(operator)
        {
            case 'o':
                system("clear");
                openCalculator(inputBuffer);
                break;
            case 'q':
                system("clear");
                printf("Quitting\n");
                running = false;
                break;
            case 'c':
                system("clear");
                break;
            case 'h':
                system("clear");
                instructions();
                pressEnterToContinue();
                break;
            default:
                system("clear");
                printf("Unavailable Operation\n");
                printf("Please enter a valid option: ");
                break;
        }
    }
}

void openCalculator(char *inputBuffer)
{
    float result = 0, tmp = 0, tmp2 = 0;
    char operator;

    // Get & parse input
    while(inputBuffer[0] != '=')
    {
        printf("%f\n", result);
        getInput(inputBuffer);
        operator = inputBuffer[0];

        if (operator == '+' ||
            operator == '-' ||
            operator == '*' ||
            operator == '/' ||
            operator == 'r')
        {
            switch(operator)
            {
                case '+':
                    getInput(inputBuffer);
                    tmp = atof(inputBuffer);
                    result += tmp;
                    // printf("result: %f ", result);
                    break;
                case '-':
                    getInput(inputBuffer);
                    tmp = atof(inputBuffer);
                    result -= tmp;
                    break;
                case '*':
                    getInput(inputBuffer);
                    tmp = atof(inputBuffer);
                    result *= tmp;
                    break;
                case '/':
                    getInput(inputBuffer);
                    tmp = atof(inputBuffer);
                    result /= tmp;
                    break;
                case 'r':
                    result = 0;
                    break;
            }
        }    
    }
    printf("%f\n", result);
}