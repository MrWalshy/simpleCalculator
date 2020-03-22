#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool getInput(char *input)
{
    printf("--> ");
        
    if (fgets(input, sizeof input, stdin) == NULL)
    {
        printf("Input Error.\n");
        exit(1);
    }
}

void pressEnterToContinue()
{
    printf("Press ENTER to return to the menu...\n");
    getchar();
    system("clear");
}

void printMenu()
{
    printf("-------------------------\n");
    printf("|                       |\n");
    printf("| simpleCalculator in C |\n");
    printf("|                       |\n");
    printf("-------------------------\n");

    printf("| Open Calculator   |'o'|\n");
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