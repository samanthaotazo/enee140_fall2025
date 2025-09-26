#include <stdio.h>

int add2(int input);
int main(void) {
    int x = 2;
    int result;

    result = add2(x);
    printf("Result is %d", result);

    //Both of these variables are defined in the function...
    //So it is an error if we try to access them in main
    /*printf("Input is %d", number);
    printf("Input is %d", input);*/
    //printf("variable is %d", variable);
    return 0;
}
int add2(int input){
    int variable = 3;

    //To test variable scope, we can try printing a variable in our function
    //The variable only is allowed to be printed in our function
    printf("variable is %d", variable);
    int number = input + 2;
    return number;
}
