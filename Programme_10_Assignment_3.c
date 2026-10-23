/*Programme to print Factorial of a given number*/
#include <stdio.h>
void main()
{
    int n,fact=1;
    printf("Enter the Number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    fact*=i;
    printf("Factorial=%d\n",fact);
}
