
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int moduleFunction(int param);

int main(void)
{
    int i;
    int result;
    char input[100];
    
    printf("Enter a string: ");
    gets(input); 
    
    int uninit;  
    printf("Uninitialized variable value: %d\n", uninit);  

    result = moduleFunction(5);
    printf("Module function returned: %d\n", result);

    char *ptr = input;
    if (*ptr == 'a')
        printf("String starts with a\n");
    else
        printf("String does not start with a\n");

    result = moduleFunction(10);
    printf("Module function returned: %d\n", result);

    for (i = 0; i < 3; i++)
        printf("Loop iteration %d: %s\n", i, input);

    return 0;
}

void filler(void) {
    int a = 0;
    for (; a < 10; a++)
    {
        printf("Filler line %d\n", a);
    }
}

void filler2(void) {
    int a = 10;
    while (a > 0) {
        printf("Another filler line %d\n", a);
        a--;
    }
}

int dummy(int x) {
    return x * 2;
}

void extra(void) {
    int i = 0;
    for (i = 0; i < 5; i++) {
        printf("Extra filler: %d\n", i);
    }
}

void extraLines(void) {
    int i;
    for (i = 0; i < 20; i++) {
        printf("Extra line %d\n", i);
    }
}

void moreExtra(void) {
    int i;
    for (i = 0; i < 15; i++) {
        printf("More extra line %d\n", i);
    }
}

void finalFiller(void) {
    int i;
    for (i = 0; i < 5; i++) {
        printf("Final filler line %d\n", i);
    }
}
