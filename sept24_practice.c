#include <stdio.h>

int add2 (int input);
int add2andprint(int input);
float divideby2(float input);
int main(void) {
    int mynumber = 10;
    float myfloat = 5.0;
    int result;
    float floatresult;
    //Part 1: Practice with functions


    //Question 1:
    /*Write a function that adds 2 to an integer
     * input and returns the value as an integer. Print the value. */
    //Option 1: print the value without storing it anywhere. Now try storing it
    // then printing it
    //printf("Result is %d", add2(mynumber));
    //Option 2:
    //Store the result in a variable
    /*result = add2(mynumber);
    printf("Result is %d", result);*/

    //Question 2:
    /* Write a function that takes in an integer, adds 2 to the number,
     * prints the value, then returns the value 1 as an integer. */
    //result = add2andprint(mynumber);
    //printf("Result is %d", result);
    //Question 3
    /* Write a function that takes in a float, divides it by 2,
     * then returns the result as a float. Print the result */
    floatresult = divideby2(myfloat);
    printf("result is %.2f", floatresult);




    //Part 2: Practice with scanf
    //Question 1
    //Prompt the user to enter a number between 1 and 10, using a printf statement
    //Scan in the number
    //Print "Your number is _."
    int userinput;
    printf("\nEnter a number between 1 and 10: ");
    scanf("%d", &userinput);
    printf("\nYour number is %d", userinput);

    //Question 2
    //Prompt the user to enter the first letter of their name
    //Scan it in as a character
    //Print the statement: "Nice to meet you, _"
    return 0;
}
int add2 (int input){
    return input + 2;
}
int add2andprint(int input){
    printf("Inside the function we get %d\n", input + 2);
    return 1;
}
float divideby2(float input){
    return input/2.0;
}
