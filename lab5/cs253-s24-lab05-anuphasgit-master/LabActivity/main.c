/**
 * Author : Anup Bhattarai 
 * Date : Sun 11 Feb 2024 03:24:53 PM MST
 * Description : This program prompts the user to input dimensions for an arrow's base and head. It ensures 
 * the head width is greater than the base width then prints the arrow composed of a rectangular base and 
 * a right triangle head using nested loop.
 * 
*/
#include <stdio.h>

int main(void) {
   int arrowBaseHeight;
   int arrowBaseWidth;
   int arrowHeadWidth;
   
   printf("Enter arrow base height:\n");
   scanf("%d", &arrowBaseHeight);
   
   printf("Enter arrow base width:\n");
   scanf("%d", &arrowBaseWidth);
   
   printf("Enter arrow head width:\n");
   scanf("%d", &arrowHeadWidth);
   printf("\n");
   
   // Checks if arrowHeadWidth is less than or equal to the arrowBaseWidth
   if(arrowHeadWidth <= arrowBaseWidth){
      printf("Arrow head width should be larger than arrow base width. Please enter again:\n");
      scanf("%d", &arrowHeadWidth);
   }

   // Print the arrow base using nested loops
   for(int i = 0; i < arrowBaseHeight ; i++){
      for(int j = 0; j < arrowBaseWidth; j++){
         printf("*");
      }
      printf("\n");
   }

   // Print the arrow head using nested loops
   for(int i = arrowHeadWidth; i > 0; i--){
      for(int j = i; j > 0; j--){
         printf("*");
      }
      printf("\n");
   }
   
   
   return 0;
}