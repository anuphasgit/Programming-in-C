/**
 * Author: Anup Bhattarai
 * Date: Saturday 27 Jan 
 * This program asks the user to input an integer, a double, a character, and a string, then outputs those
 * values in various formats.
*/
#include <stdio.h>

int main(void) {
   int    userInt;
   double userDouble;
   char userChar;
   char userString[80];
   
   
   printf("Enter integer:\n");
   scanf("%d", &userInt);

   printf("Enter a double:\n");
   scanf("%lf", &userDouble);

   printf("Enter character:\n");
   scanf(" %c", &userChar);

   printf("Enter string:\n");
   scanf("%79s", userString);

   // FIXME (1): Finish reading other items into variables, then output the four values on a single line separated by a space
   printf("%d %lf %c %s\n", userInt, userDouble, userChar, userString);
   
   // FIXME (2): Output the four values in reverse
   printf("%s %c %lf %d\n", userString, userChar, userDouble, userInt);

   
   // FIXME (3): Cast the double to an integer, and output that integer
   printf("%lf cast to an integer is %d\n", userDouble,(int)userDouble);

   return 0;
}