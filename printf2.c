#include <stdio.h>

int
main()
{
    int a = 5;
    double b = 3.14159265;
    char c = 'A';

    printf("\nNumber of variables and format specifiers do not match: \n");
    //printf("a = %d,\t b = %f \t\t (the last variable is ignored)\n\n", a, b, c);
    //printf("a = %d, \t b = %f, \t c = %d \t (the last number gets a 'random' value from the memory)\n\n", a, b);

    //printf("a = %d, \t b = %f, \t c = %c \
	(the last number gets a random value of its type)\n\n", a, b);
    /* Note the use of \ for a string spanning multiple lines
     * in the above statement */

    /*printf("a = %d, \t b = %f, \t c = %f \
	(the last number gets a random value of its type, pay attention to the 0's after the decimal point)\n\n", a, b);
*/
    printf("Using correct format specifiers: a = %d, \t b = %f\n", a, b);
    printf("Using WRONG format specifiers: a = %f, \t b = %d\n", a, b);

    return 0;
}
