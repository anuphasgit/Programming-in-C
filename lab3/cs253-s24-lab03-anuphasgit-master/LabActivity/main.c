/**
 * Author: Anup Bhattarai
 * Date: Sunday 28 Jan
 * This program calculates the area of a wall, amount of paint needed in gallons, and number
 * of 1 gallon cans needed to paint the wall based on user's input of wall height and width.
*/
#include <stdio.h>
#include <math.h>                  

int main(void) {
   double wallHeight;
   double wallWidth;
   double wallArea;
   double paintNeeded;
   double cansNeeded;
   const double GALLON_COVERAGE = 350;

   printf("Enter wall height (feet):\n");
   scanf("%lf", &wallHeight);
   
   printf("Enter wall width (feet):\n");
   scanf("%lf", &wallWidth);

   // Calculate and output wall area
   wallArea = wallHeight * wallWidth;                 
   printf("Wall area: %.2f square feet.\n ", wallArea);        
   
   // FIXME (2): Calculate and output the amount of paint in gallons needed to paint the wall
   paintNeeded = wallArea/GALLON_COVERAGE;
   printf("Paint needed : %.2f gallons\n", paintNeeded);

   // FIXME (3): Calculate and output the number of 1 gallon cans needed to paint the wall, rounded up to nearest integer
   cansNeeded = (int)ceil(paintNeeded);
   printf("Cans needed: %.0f can(s)\n", cansNeeded);

   return 0;
}