#include<stdio.h>
int main()
{
   int num1,num2,num3;
   
   //input any three integer numbers
   printf("\nEnter value of num1, num2 and num3:");
   //Store input values
   scanf("%d %d %d",&num1,&num2,&num3);

   if((num1>num2)&&(num1>num3))
      printf("\n Number1 is greatest");
   else if((num2>num3)&&(num2>num1))
      printf("\n Number2 is greatest");
   else
      printf("\n Number3 is greatest");
   return 0;
}
