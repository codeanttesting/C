/* utils.c */
/* Utility functions intentionally violating MISRA C standards */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function that returns a pointer to a local variable (violation) */
char* utilFunction(const char *str)
{
    char localArray[50];
    /* Unsafe use of sprintf (should use a bounds-checked alternative) */
    sprintf(localArray, "Util says: %s", str);
    printf("Inside utilFunction: %s\n", localArray);
    
    /* Returning the address of a local array (lifetime issue) */
    return localArray;
}

/* Function that uses dynamic memory allocation unsafely */
char* allocateString(const char *input)
{
    char *newString;
    /* Violating MISRA by not checking the return value of malloc */
    newString = (char *)malloc(strlen(input) + 1);
    strcpy(newString, input);  /* Unsafe use of strcpy */
    return newString;
}

/* Another utility function with various issues */
int computeValue(int a, int b)
{
    int result;
    /* Implicit conversion between signed and unsigned (MISRA violation) */
    unsigned int temp = a;
    result = temp + b;
    
    /* Unbraced if-else statement */
    if (a > b)
        result += 10;
    else
        result -= 10;

    /* Use of a magic number */
    result += 99;

    /* Filler loop with output */
    int i;
    for (i = 0; i < 20; i++) {
        printf("Compute filler iteration %d, result = %d\n", i, result);
    }
    return result;
}

/* Additional filler function */
void utilFiller(void)
{
    int i;
    for (i = 0; i < 10; i++) {
        printf("Util filler line %d\n", i);
    }
}

/* More filler function */
void utilExtra(void)
{
    int j = 0;
    while (j < 5)
    {
        printf("Util extra line %d\n", j);
        j++;
    }
}

/* Yet another filler function */
void utilDummy(void)
{
    int k;
    for (k = 0; k < 10; k++)
    {
        printf("Util dummy line %d\n", k);
    }
}


void utilFinalFiller(void)
{
    int i;
    for (i = 0; i < 15; i++) {
        printf("Util final filler %d\n", i);
    }
}

/* End of utils.c */
