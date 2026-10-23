/*Programme to count the digits of a given number*/
#include <stdio.h>
void main()
{
    int num,count=0;
    printf("Enter the number:");
    scanf("%d",&num);
    do
    {
        num=num/10;
        count++;
    }
    while(num!=0);
    printf("Number of Digits=%d",count);
}
