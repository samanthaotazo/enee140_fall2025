 #include <stdio.h>
#include <time.h> //this is for time
#include <stdlib.h> //this is for rand

int main(void) {
    //From Lab07 handout
    /*int x,y;
    scanf("%d %d", &x, &y);
    if (x > 0)
        if (y > 0)
            printf("Both positive.\n");
    else
        printf("x negative, y ignored.\n");
    */

    //Test cases:
    /*
     * 1. x = 2, y = 1 //Output is "Both positive." as predicted
     * 2. x = 2, y = -1 //Output is "x negative, y ignored."
     * 3. x = -2, y = -1 //Output is ""
     * 4. x = -2, y = 1 //Output is ""
     * We learn that indentation does not affect which if gets paired to which else. */
    /*int a = 5;
    if (a = 0) {
        printf("a=0 is true. \n");
    }
    else {
        printf("a=0 is not true.\n");
    }
    if (a==0) {
        printf("a==0 is true. \n");
    }
    else {
        printf("a==0 is not true.\n");
    }*/
    //We see that a = 0 is successfully assigned, but what happens in a = 0?
    //Consider order of operations or return value of assignment.
    //We will use two printf statements to determine which is the cause

    //initialize a to 5
    /*a = 5;
    //If this prints zero, we've returned the assigned value:
    printf("%d\n", (a = 0));

    //If this prints 5, we have returned the assigned value:
    printf("%d\n", (a = 5));
    */
    //Write a C program that generates 6 random even numbers between 2 and 20 (including both 2 and
    //20) and prints them out.
    srand(time(NULL));
    unsigned number;
    int count = 0;
    int min = 2; //given by the handout
    int range = 10; //there are 9 numbers we want to print, + 1

    for (count = 0; count < 6 ; count ++) {
        number = min + 2*(rand() % range);
        printf("Our random result is %u\n", number);
    }

    return 0;
}
