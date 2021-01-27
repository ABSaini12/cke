//Write a program to create an array of 10 integers, input the data and show all even numbers in given numbers.
#include<stdio.h>
void main()
{
    int n[10],i;
    for(i=0;i<=9;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<=9;i++)
    {
        if(n[i]%2){}
        else{printf("%d", n[i]);}
    }

}
