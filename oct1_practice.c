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

    printf("\nUser types here (one integer, one float): ");
    scanf("%d %f ", &a, &b);
    printf("\nOur arguments match, we scanned %d, %f\n", a, b);
    //More specifiers than variables
    /*printf("\nUser types here (one integer, one float): ");
    scanf("%d %f ", &a);
    printf("\nOur arguments match, we scanned %d, %f\n", a, b);*/

    //More variables than specifiers
    /*printf("\nUser types here (one integer, one float): ");
    scanf("%d ", &a, &b);
    printf("\nOur arguments match, we scanned %d, %f\n", a, b);*/

    //Practice with computer arithmetic
    /*Compute first in your head, then write a program to verify your answer:
     * Q1: INT_MIN + 1 and assign the result to an int
     * Q1A: INT_MAX + 1 will overflow
     * Q2: 2.0/4.0 and assign the result to a float
     *          float b = 2.0/4.0;
     * Q3: 2/4 and assign the result to a float
     * Q4: (float)2/4 and assign the result to a float
     * Q4A: (float)(2/4)
     * Q5: 7 % 2, assign the result to an int. What does this do, qualitatively?
     * Q6: 100 % 10, assign the result to an int. Now, what if it was 100.5 % 10?
     * Q7: UINT_MAX + 1, assign the result to an unsigned integer
     * Q8: UINT_MAX + 1, assign the result to an int
     * Q9: For a = 3, evaluate a++ and ++a and note the difference (hint: use a printf statement)
     * */

    //Q1: We predict this will be INT_MIN + 1, not a special value
    //Q1A: We will see INT_MAX + 1 "wraps around" to become INT_MIN
    //Q2: When we compute 2.0/4.0, we get 0.5. This is then assigned to floating point b, and is still 0.5.
    //Q3: When we compute 2/4, we get 0. The result is then assigned to floating point variable and is
    //implicitly cast to a float, so the final result is 0.0
    //Q4: We predict that we will compute 2.0/4, which is floating point division and returns 0.5. When this is assigned
    //to a float, it already a float so result is 0.5.
    //2/4 would evaluate to 0, then explicitly cast to float, and assigned to float for 0.00 as answer
    //Q5: This is 1, since 7/2 is 6 Remainder 1. This qualitatively tells us it is odd.
    //Q6: Remainder is 0, type matches int.
    return 0;
}
