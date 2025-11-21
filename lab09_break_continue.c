/* This program illustrates how break and continue work in loop
							Gang Qu
							Oct. 25, 2011
							Tudor Dumitras
							Apr. 12, 2014
 1. Rewrite the two for loops with while loops, then with do-while loops.
 2. What will be the output if you remove the first '\n' in the second and fourth printf() statements?
 3. What will be the output if we use each of the following statements to replace the for loop:
    for (x=1;x<10; x++)
        (a) for (x=1; x<10; x=x+2)
        (b) for (x=2; x<10; x=x+2)
        (c) for (x=1; x!=10; x=x+2)
        (d) for (x=2; x!=10; x=x+2)
 */

#include <stdio.h>

int main(void)
{
    //Starter code:
    printf("Using for loops");
	int x, y;

	for (x=1; x<10; x++) {
		if (x == 5)
			break;
		printf("%2d", x);
	}

	printf("\nx=%2d\n",x);

	for (y=1;y<10; y++) {
		if (y == 5)
			continue;
		printf("%2d", y);
	}

	printf("\ny=%2d\n",y);

    //Rewrite with while loops:
    printf("Writing with while loops:");

    x = 1;
    while (x<10) {
        if (x == 5)
            break;
        printf("%2d", x);
        x++;
    }

    printf("\nx=%2d\n",x);

    y = 0;
    while (y<9) {
        y++;
        if (y == 5)
            continue;
        printf("%2d", y);
    }

    printf("\ny=%2d\n",y);

    //Do-while
    printf("Writing with do-while loops\n");

    x = 1;
    do{
        if (x == 5)
            break;
        printf("%2d", x);
        x++;
    } while (x<10);

    printf("\nx=%2d\n",x);

    y = 0;
    do{
        y++;
        if (y == 5)
            continue;
        printf("%2d", y);
    } while (y<9);


    printf("\ny=%2d\n",y);
	return 0;
}
