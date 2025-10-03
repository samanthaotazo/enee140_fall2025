#include <stdio.h>
#include <limits.h>

int main(void) {
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
     * Q6: 100 % 10, assign the result to an int. Q6a: Now, what if it was 100.5 % 10?
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


    //To write our program, we include limits.h which allows us to grab INT_MAX and INT_MIN values

    //Question 1
    printf("To test our limits.h library...INT_MIN is %d\n", INT_MIN);
    printf("The answer to question 1 is: %d\n", INT_MIN + 1);
    printf("The answer to question 1A is %d\n", INT_MIN - 1); //this overflows to INT_MAX

    //Question 2
    float b = 2.0/4.0;
    printf("The answer to question 2 is: %.2f\n", b);
    //Question 3
    float c = 2/4;
    printf("The answer to question 3 is: %.2f\n", c);

    //Question 4
    float d = (float)2/4;
    printf("The answer to question 4 is: %.2f\n", d);


    //Question 4a
    float e = (float)(2/4);
    printf("The answer to question 4a is: %.2f\n", e);


    //Question 5
    int q5 = 7 % 2;
    printf("The answer to question 5 is: %d\n", q5); //qualitatively, this gives 1 or 0 for odd or even, respectively

    //Question 6
    int q6 = 100 % 10;
    printf("The answer to question 6 is: %d\n", q6);  // 100.5 % 10 will give error

    //Question 7
    unsigned q7 = UINT_MAX + 1;
    printf("The answer to question 6 is: %u\n", q7);

    //Question 8
    int q8 = UINT_MAX + 1;
    printf("The answer to question 6 is: %d\n", q8);

    //Question 9: Compare a++ and ++a
    int x = 3;
    int y = 3;

    printf("x++ is %d and ++y is %d\n", x++, ++y);
    printf("The new values of a and b are %d and %d, respectively\n", x, y);
    return 0;
}
