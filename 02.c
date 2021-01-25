//Write a program to input a number and check it to be even or odd using switch statement.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter an integer:");
    scanf("%d",&a);
    switch(a%2==0)
    {
        case 1:
        printf("even");
        break;
        case 0:
        printf("odd");
        break;
    }
    return 0;
}
