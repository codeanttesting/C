
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *utilFunction(const char *str);

int globalCounter = 0;

int moduleFunction(int param)
{
    int localVar = 0;
    int i;

    if (param > 5)
        localVar = param * 7;  /* Magic number 7 */
    else
        localVar = param + 3;  /* Magic number 3 */

    char buffer[20];
    strcpy(buffer, "This is a very long string that exceeds the buffer size");
    printf("Buffer: %s\n", buffer); 

    if (param == 10)
        printf("Parameter is 10\n");
    else
        printf("Parameter is not 10\n");

    char *returnedString;
    returnedString = utilFunction("Module call");
    printf("Util function returned: %s\n", returnedString);

    globalCounter++;
    for (i = 0; i < param; i++) {
        localVar += i;
    }

    for (i = 0; i < 10; i++) {
        printf("Filler loop iteration %d\n", i);
    }

    localVar += 42;

    if (localVar > 100)
    {
        printf("Local variable is greater than 100\n");
    }
    else
    {
        printf("Local variable is not greater than 100\n");
    }

    for (i = 0; i < 5; i++)
    {
        printf("Additional filler: %d\n", i);
    }

    return localVar;
}

void extra_module(void) {
    int i;
    for (i = 0; i < 15; i++) {
        printf("Extra module filler: %d\n", i);
    }
}

int dummy_module(int x)
{
    return x - 1;
}

void moduleExtraLines(void) {
    int i;
    for (i = 0; i < 10; i++) {
        printf("Module extra line %d\n", i);
    }
}


void moduleFinalFiller(void) {
    int i;
    for (i = 0; i < 10; i++) {
        printf("Module final filler %d\n", i);
    }
}

