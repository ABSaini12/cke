//Write a program to input numbers from user till 0 is pressed and check every given number to be even or odd.
#include<stdio.h>
#include<process.h>
void main()
{
    int i,n;
    for(;;)
    {
        scanf("%d",&n);
        if(n==0){exit(0);}
        else if(n%2){printf("odd \n");}
        else{printf("even \n");}
    }
}
