/*Programme to find out whether a given no. is perfect no. or not*/
#include <stdio.h>
void main()
{
    int num,sum=0;
    printf("Enter the number:");
    scanf("%d",&num);
    for(int i=1;i<=num/2;i++)
    {
        if(num%i==0)
        sum+=i;
    }
    if(sum==num)
    printf("The number is a perfect number");
    else
    printf("The number is not a perfect number");
}