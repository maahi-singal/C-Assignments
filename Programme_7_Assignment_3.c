/*Programme to print sum of 1st n natural nos.*/
#include <stdio.h>
void main()
{
    int n,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++)
    sum+=i;
    printf("Sum=%d\n",sum);
}