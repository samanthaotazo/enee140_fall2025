#include <stdio.h>

int main() {
    //Problem 1
    /*Use print to print some variable age of type int. You must first declare your variable then
     * assign some value to it. Write a printf statement that uses both the variable and some text.
     * For example, print the statement "Your age is 9" to the screen where 9 is stored in the variable age."*/
    /*int age;

    age = 9;

    printf("Your age is %d", age);*/

    //Problem 2
    /*Create a variable of floating point type and call it grade. Store some number 99-100 with decimal places
     * (ex. 99.47389) into the variable. Print it to two decimal places. Shift it some amount to the right. */
    float grade = 99.157;
    
    //We can use %6 for spacing
    printf("\n%6.2f\n",grade);
    
    //Or use \t
    //printf("\n\t%.2f\n", grade);

    //Problem 3
    /*Create two floating point variables called a and b and store the values 2.0 and 4.0 to them. Compute
     * 2.0/4.0 and print the result to 1 decimal place. Bonus: What happens if you assign this to an integer? */
    float a, b;
    a = 2.0;
    b = 4.0;
    
    //Solution 1
    /*float answer = a/b;
    
    printf("Answer is %.1f", answer);*/
    
    //Solution 2
    printf("Answer is %.1f", a/b);

    //Problem 4
    /*Check if 1 is equal to 2 and assign that result to a variable of type int, called test. Print the variable.
     * What is its value? Now overwrite that value and see if 1 < 2. Print the variable. What is its value? */
    int test;
    
    test = (1 == 2); 
    
    printf("Test is (1 == 2), test has value %d\n", test);

    test = (1 < 2);

    printf("Test is (1 < 2), test has value %d\n", test);
    return 0;
}
