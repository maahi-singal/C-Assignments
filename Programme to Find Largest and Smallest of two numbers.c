/*Programme to Find Largest and Smallest of two numbers*/
#include <stdio.h>
void main()
{
    int num1,num2;
    printf("Enter First Number:");
    scanf("%d",&num1);
    printf("Enter Second Number:");
    scanf("%d",&num2);
    if(num1>num2)
        printf("%d is Largest\n%d is Smallest",num1,num2);
    else
        printf("%d is Largest\n%d is Smallest",num2,num1);
}