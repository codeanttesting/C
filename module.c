/* module.c */
/* Example module that intentionally violates MISRA C standards */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Forward declaration of function from utils.c */
char *utilFunction(const char *str);

/* Global variable (non-static) – MISRA guidelines recommend minimizing globals */
int globalCounter = 0;

int moduleFunction(int param)
{
    int localVar = 0;
    int i;

    /* Using magic numbers directly (violates MISRA rules) */
    if (param > 5)
        localVar = param * 7;  /* Magic number 7 */
    else
        localVar = param + 3;  /* Magic number 3 */

    /* Unsafe use of strcpy on a too-small buffer (risk of overflow) */
    char buffer[20];
    strcpy(buffer, "This is a very long string that exceeds the buffer size");
    printf("Buffer: %s\n", buffer);  /* Potential buffer overflow */

    /* Unbraced if-else statement (MISRA violation) */
    if (param == 10)
        printf("Parameter is 10\n");
    else
        printf("Parameter is not 10\n");

    /* Call utility function from utils.c */
    char *returnedString;
    returnedString = utilFunction("Module call");
    printf("Util function returned: %s\n", returnedString);

    /* Modify global variable without protection */
    globalCounter++;
    for (i = 0; i < param; i++) {
        localVar += i;
    }

    /* Additional filler loop */
    for (i = 0; i < 10; i++) {
        printf("Filler loop iteration %d\n", i);
    }

    /* Another magic number usage */
    localVar += 42;

    if (localVar > 100)
    {
        printf("Local variable is greater than 100\n");
    }
    else
    {
        printf("Local variable is not greater than 100\n");
    }

    /* More filler loops */
    for (i = 0; i < 5; i++)
    {
        printf("Additional filler: %d\n", i);
    }

    return localVar;
}

/* Extra function to increase line count */
void extra_module(void) {
    int i;
    for (i = 0; i < 15; i++) {
        printf("Extra module filler: %d\n", i);
    }
}

/* Dummy function for module */
int dummy_module(int x)
{
    return x - 1;
}

/* More filler functions */
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

/* End of module.c */
