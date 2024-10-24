#include <stdio.h>

int main(void) {
   int userNum;
   int nextNum;
   
   printf("Enter integer:\n");
   scanf("%d", &userNum);
   printf("You enterned: %d\n", userNum);
   printf("%d squared is %d\n", userNum , userNum * userNum);
   printf("And %d cubed is %d!!\n", userNum , userNum*userNum*userNum);
   printf("Enter another integer:\n");
   scanf("%d", &nextNum);
   printf("%d + %d is %d\n", userNum, nextNum, userNum + nextNum);
   printf("%d * %d is %d\n", userNum , nextNum, userNum * nextNum);
   return 0;
}