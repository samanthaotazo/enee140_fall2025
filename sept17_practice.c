/*Created 19 September 2025 by Samantha Otazo*/
#include <stdio.h>


/*Use getchar to take in some input from the CLion terminal. Make sure to keep getting characters until EOF is reached.
* As you go, print any uppercase letter back to the output. Use a while loop. */
int main() {
   int c;
  
   //while loop, to keep taking in characters until EOF is reached
   while ((c = getchar()) != EOF){
       //Check if uppercase
       if (c >= 'A' && c <= 'Z'){ //How can I do this with isupper?
           //I can print using putchar or printf... how do I do it both ways?
           //Method 1
           //putchar(c);
           //Method 2
           printf("%c", c);
       }
   }
   return 0;
}

/* If you finish early... change your while loop to a for loop */

