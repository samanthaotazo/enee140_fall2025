#include <stdio.h>

int main(void) {
    //Lab05 handout
    /* What happens if the number of variables passed to the scanf function, and/or
     * the variable types, do not match those specified in the format string? Write
     * a simple program to verify your answer */
    int a;
    float b;
    char c;
    //Float when asking for int, int when asking for float, character when asking for int
    /*printf("User types here: ");
    scanf("%f ", &a);
    printf("When we use format specifier for float, but scan to a variable of integer type: %f", (float)a);

    printf("\nUser types here: ");
    scanf("%d ", &b);
    printf("When we use format specifer for int, but scan to a variable of float type: %f", b);

    printf("\nUser types here: ");
    scanf("%d ", &c);
    printf("When we use format specifer for float, but scan to a variable of integer type: %c", c);*/
    //For all of these, we see "garbage values".

    //Now, let's see when the number of format specifiers and variables do not match
    //More specifiers than variables
    /*printf("\nUser types here (one integer, one float): ");
    scanf("%d %f ", &a);
    printf("\nOur arguments match, we scanned %d, %f\n", a, b);*/
    //This crashes our program!

    //More variables than specifiers
    printf("\nUser types here (one integer, one float): ");
    scanf("%d ", &a, &b);
    printf("\nOur arguments match, we scanned %d, %f\n", a, b);
    //Only first value is correctly scanned
    return 0;
}
