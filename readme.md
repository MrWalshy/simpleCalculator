# --- Calculator (C) ---
This CLI calculator is written in 'C', a procedural programming language.

## Functionality
- Addition
- Subtraction
- Factorial
- Hold result of last equation in memory

## Todos
- Multiplication
- Division
- Write tests as I make functions (in progress)
- Write some documentation (in progress)
- Add conditionals to catch errors (no in-built error handling in C --> what is errno?)

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

### double addition(char *inputBuffer, double lastSum)
- Takes a pointer to a global input buffer string, and the value of the last sum stored in memory as arguments.
- Returns the result of an addition sum, as a double.
- Repeatedly adds entered numbers until exit parameter is met.
- Relies on getInput(), atof(), checkForMemLoad().

        lastSumMemory = addition(inputBuffer, lastSumMemory);

### double subtraction(char *inputBuffer, double lastSum)
- Takes a pointer to a global input buffer string, and the value of the last sum stored in memory as arguments.
- Gets an initial starting value from the user, this can be overwritten by the value in memory
- Returns the result of a subtraction sum, as a double.
- Repeatedly subtracts entered numbers until exit parameter is met.
- Relies on getInput(), atof() & checkForMemLoad().

        lastSumMemory = subtraction(inputBuffer, lastSumMemory);

### double factorial(char *inputBuffer, double lastSum)
- Takes a pointer to a global input buffer string, and the value of the last sum stored in memory as arguments.
- Gets the number from the user to find a factorial of
- Returns the factorial of the number specified
- Relies on getInput(), atof() & checkForMemLoad().
- The index for the loop is implicitly typecasted from a double to an integer

        lastSumMemory = factorial(inputBuffer, lastSumMemory);

## Miscellaneous Functions (misc.c)
### bool getInput(char *input)
- Takes a pointer to an input buffer string
- Stores input from user in the input buffer pointed at, else returns '1'

        getInput(inputBuffer);

### void pressEnterToContinue()
- Returns nothing
- Waits for the user to press the enter key before continuing execution

        pressEnterToContinue()