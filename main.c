#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

// Function Prototype Declarations
void addition();
void subtraction();
void multiplication();
void division();

char inputBuffer[256];

static bool getInput(void)
{
    printf("--> ");
        
    if (fgets(inputBuffer, sizeof inputBuffer, stdin) == NULL)
    {
        printf("Input Error.\n");
        exit(1);
    }
}

int main()
{
    char operator;
    int running = true;

    while (running)
    {
        getInput(); 
        operator = inputBuffer[0];

        switch(operator)
        {
            case '+':
                printf("addition\n");
                addition();
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
                printf("Quitting\n");
                running = false;
                break;
            case 'c':
                system("clear");
                break;
            default:
                system("clear");

                printf("Unavailable Operation\n");
                printf("Please enter a valid option: ");
                break;
        }
    }
}

void addition()
{
    int numsToAdd, i;
    float total = 0, temp;

    printf("Enter the number of elements you wish to add:\n");
    getInput();
    numsToAdd = atof(inputBuffer);

    for (i = 0; i < numsToAdd; i++) {
        printf("Enter the number you wish to add:\n");
        getInput();
        temp = atof(inputBuffer);
        total += temp;
        printf("Total so far: %lf\n", total);
    }

    system("clear");
    printf("The total of your sum is %lf\n", total);
}