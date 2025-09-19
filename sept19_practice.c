/*Created 19 September 2025 by Samantha Otazo*/
#include <stdio.h>

int main(void) {
    //Question 1
    /*Write a for loop that prints a statement
     * ("Hello World") four times. */
    /*
    int i;
    for (i = 0;i < 4; i++){
        //Do something here...in our case we want to print
        printf("Hello World\n");
    }*/

    //Question 2
    /*Write a for loop that sums the numbers 1 through 5 (ie.
     * adds 1 + 2 + 3 + 4 + 5. Print the answer outside of the loop. */
    //We declare some variables
    /*int sum = 0; //sum will store our result
    int a; // a will track our position in the loop/ through 1 to 5

    for (a = 1;a <= 5; a++){
        sum = sum + a;
    }
    printf("Result is %d", sum);
    */

    //Question 3
    /* Convert question 1 to a while loop */
    int i = 0;
    while(i <= 3){
        printf("Hello World\n");
        i++;
    }
    return 0;
}
