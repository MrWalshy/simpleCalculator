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