# --- Calculator (C) ---
This CLI calculator is written in 'C', a procedural programming language.

Version 2 has been redesigned to mirror a more classical calculator usage, i.e. entering an operator then a number to operate on the result. Result starts as 0.

## Functionality
- Addition
- Subtraction
- Multiplication
- Division
- Reset result to 0 during calculation

## Todos
- Factorial
- Result in memory

# --- Documentation ---
## Global Variables
### char inputBuffer[14];
- Buffer for user input string with 14 characters

### double lastSumMemory = 0;
- Holds the value, as a double, of the last completed equation

## Math Functions (mathfunc.c)
### void checkForMemLoad(char *inputBuffer, double lastSum, double *result)
- Takes a pointer to the input buffer, value of the last sum in memory, and a pointer to the result double in the calling function
- If 'm' is entered, loads the value in memory to the 'result' var being pointed at

        checkForMemLoad(inputBuffer, lastSum, &result);
    - Notice here, the memory address of result is passed as an argument

## Miscellaneous Functions (misc.c)
### bool getInput(char *input)
- Takes a pointer to an input buffer string
- Stores input from user in the input buffer pointed at, else returns '1'

        getInput(inputBuffer);

### void pressEnterToContinue()
- Returns nothing
- Waits for the user to press the enter key before continuing execution

        pressEnterToContinue()