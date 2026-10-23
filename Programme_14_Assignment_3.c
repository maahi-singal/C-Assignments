/*Programme to print the sum and mean of any 10 numbers*/
#include <stdio.h>
void main()
{
    int n,sum=0;
    for(int i=1;i<=10;i++)
    {
        printf("Enter a number:");
        scanf("%d",&n);
        sum+=n;
    }
    printf("Sum=%d\n",sum);
    printf("Mean=%f\n",sum/10.0);
}
