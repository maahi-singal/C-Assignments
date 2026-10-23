/*Programme to print the sum of 1st n even nos.*/
#include <stdio.h>
void main()
{
    int n,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int i;
    for(i=2;i<=2*n;i+=2)
    sum+=i;
    printf("Sum=%d\n",sum);
}