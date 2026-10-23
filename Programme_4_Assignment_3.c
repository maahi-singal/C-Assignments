/*Programme to print 1st n natural nos.*/
#include <stdio.h>
void main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++)
    printf("%d\n",i);
}