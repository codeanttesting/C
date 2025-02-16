/* main.c */
/* Example program that intentionally violates MISRA C standards */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Forward declaration of function from module.c */
int moduleFunction(int param);

int main(void)
{
    int i;
    int result;
    char input[100];
    
    /* Using gets which is unsafe - MISRA violation */
    printf("Enter a string: ");
    gets(input);  /* MISRA violation: gets() is not allowed */
    
    /* Uninitialized variable violation */
    int uninit;  /* not initialized */
    printf("Uninitialized variable value: %d\n", uninit);  /* violation */

    result = moduleFunction(5);
    printf("Module function returned: %d\n", result);

    /* Dangerous pointer usage without validation */
    char *ptr = input;
    if (*ptr == 'a')
        printf("String starts with a\n");
    else
        printf("String does not start with a\n");

    /* Call moduleFunction with a magic number (violation) */
    result = moduleFunction(10);
    printf("Module function returned: %d\n", result);

    /* Loop using input without proper bounds checking */
    for (i = 0; i < 3; i++)
        printf("Loop iteration %d: %s\n", i, input);

    return 0;
}

/* Filler function to increase line count */
void filler(void) {
    int a = 0;
    for (; a < 10; a++)
    {
        printf("Filler line %d\n", a);
    }
}

/* Another filler function */
void filler2(void) {
    int a = 10;
    while (a > 0) {
        printf("Another filler line %d\n", a);
        a--;
    }
}

/* Dummy function for extra lines */
int dummy(int x) {
    return x * 2;
}

/* Additional filler function */
void extra(void) {
    int i = 0;
    for (i = 0; i < 5; i++) {
        printf("Extra filler: %d\n", i);
    }
}

/* More filler to ensure the file is over 50 lines */
void extraLines(void) {
    int i;
    for (i = 0; i < 20; i++) {
        printf("Extra line %d\n", i);
    }
}

/* Even more filler */
void moreExtra(void) {
    int i;
    for (i = 0; i < 15; i++) {
        printf("More extra line %d\n", i);
    }
}

/* Final filler */
void finalFiller(void) {
    int i;
    for (i = 0; i < 5; i++) {
        printf("Final filler line %d\n", i);
    }
}

/* End of main.c */
