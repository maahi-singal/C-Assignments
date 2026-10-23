/*Programme to seperate the digits of a given number*/
#include <stdio.h>
void main()
{
    int num,digit;
    printf("Enter the number:");
    scanf("%d",&num);
    while(num!=0)
    {
        digit=num%(10);
        num=num/10;
        printf("%d",digit);
    }
}