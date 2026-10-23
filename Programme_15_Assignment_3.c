/*Programme to print the sum and mean of n numbers*/
#include <stdio.h>
void main()
{
    int num,sum=0,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("Enter a number:");
        scanf("%d",&num);
        sum+=num;
    }
}