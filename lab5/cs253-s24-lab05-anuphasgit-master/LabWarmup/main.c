/**
 * Author : Luke Hindman and CS-253
 * Date : Sun 11 Feb 2024 01:54:03 PM MST
 * Description : This program prompts the user to input a character and a triangle height and prints a triangular 
 * pattern using the input.
*/
#include <stdio.h>

int main(void) {
   char triangleChar;
   int triangleHeight;

   printf("Enter a character:\n");
   scanf("%c", &triangleChar);
   
   printf("Enter triangle height:\n");
   scanf("%d", &triangleHeight);
   printf("\n");
       
   for (int i = 0; i < triangleHeight; i++){
      for(int j = 0; j < i + 1; j++){
         printf("%c ", triangleChar);
      }
      printf("\n");
   }
   
   return 0;
}