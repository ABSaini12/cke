//Write a program to input a number and check it to be even or odd using bitwise operator.
#include<stdio.h>
void main()
{
   int a;
   scanf("%d",&a);
   if ( a & 1 == 1 )
      printf("Odd\n");
   else
      printf("Even\n");
   return 0;
}
