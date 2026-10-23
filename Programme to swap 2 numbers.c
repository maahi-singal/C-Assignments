/*Programme to swap 2 numbers*/
#include <stdio.h>
void main()
{
    int num1,num2;
    printf("Enter First Number:");
    scanf("%d",&num1);
    printf("Enter Second Number:");
    scanf("%d",&num2);
    num2=num1+num2;
    num1=num2-num1;
    num2=num2-num1;
    printf("After Swapping:\nNumber 1=%d\nNumber 2=%d",num1,num2);
}