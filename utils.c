
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* utilFunction(const char *str)
{
    char localArray[50];
    sprintf(localArray, "Util says: %s", str);
    printf("Inside utilFunction: %s\n", localArray);
    
    return localArray;
}

char* allocateString(const char *input)
{
    char *newString;
    newString = (char *)malloc(strlen(input) + 1);
    strcpy(newString, input);  
    return newString;
}

int computeValue(int a, int b)
{
    int result;
    unsigned int temp = a;
    result = temp + b;
    
    if (a > b)
        result += 10;
    else
        result -= 10;

    result += 99;

    int i;
    for (i = 0; i < 20; i++) {
        printf("Compute filler iteration %d, result = %d\n", i, result);
    }
    return result;
}

void utilFiller(void)
{
    int i;
    for (i = 0; i < 10; i++) {
        printf("Util filler line %d\n", i);
    }
}

void utilExtra(void)
{
    int j = 0;
    while (j < 5)
    {
        printf("Util extra line %d\n", j);
        j++;
    }
}

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
