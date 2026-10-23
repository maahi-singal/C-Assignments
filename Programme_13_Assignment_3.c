/*Programme to print sum of numbers divisible by 13 in 1-100*/
#include <stdio.h>
void main()
{
    int i,sum=0;
    for(i=1;i<=100;i++)
    {
        if(i%13==0)
        sum+=i;
    }
    printf("Sum=%d\n",sum);
}