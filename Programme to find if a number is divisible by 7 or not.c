/*Programme to find if a number is divisible by 7 or not*/
#include <stdio.h>
void main()
{
    int num;
    printf("Enter a Number:");
    scanf("%d",&num);
    if(num%7==0)
    printf("Number is divisible by 7\n");
    else
    printf("Number is not divisible by 7\n");
}