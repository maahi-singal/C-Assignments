/*Programme to print 1st n odd nos.*/
#include <stdio.h>
void main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int i;
    for(i=1;i<2*n;i+=2)
    printf("%d\n",i);
}