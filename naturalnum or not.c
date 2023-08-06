/*
Write a program to check if a given number is natural number.
*/

#include <stdio.h>

int main()
{
   int num=1;
   printf("enter a number \n");
   scanf("%d",&num);
   if (num >= 1){
       printf("natural number");
   } else{ 
       printf(" not a natural number");
   }
   return 0;
}
/*
enter a number 
2
natural number
*/