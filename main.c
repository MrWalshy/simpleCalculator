#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include "mathfunc.h"
#include "misc.h"

char inputBuffer[14];
double lastSumMemory = 0;

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
            case '+':
                printf("Type a number & press enter, repeat to keep adding.\n");
                lastSumMemory = addition(inputBuffer, lastSumMemory);
                printf("Result is %f\n\n", lastSumMemory);
                pressEnterToContinue();
                break;
            case '-':
                printf("subtraction\n");
                break;
            case '*':
                printf("multiplication\n");
                break;
            case '/':
                printf("division\n");
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

void printMenu()
{
    printf("-------------------------\n");
    printf("|                       |\n");
    printf("| simpleCalculator in C |\n");
    printf("|                       |\n");
    printf("-------------------------\n");

    printf("| Addition          |'+'|\n");
    printf("| Subtraction       |'-'| (Coming soon)\n");
    printf("| Multiplication    |'*'| (Coming soon)\n");
    printf("| Division          |'/'| (Coming soon)\n");
    printf("| Help              |'h'|\n");
    printf("| Quit              |'q'|\n");
    printf("| Clear screen      |'c'|\n");
}

void instructions()
{
    printf("--------- Main Menu Screen ---------\n");
    printf("| Enter a operator and/or menu     |\n");
    printf("| option to proceed.               |\n");
    printf("------------------------------------\n");

    printf("---------  In Calculation  ---------\n");
    printf("| '=' returns the result.          |\n");
    printf("|----------------------------------|\n");
    printf("| 'm' returns value in memory      |\n");
    printf("------------------------------------\n");
}