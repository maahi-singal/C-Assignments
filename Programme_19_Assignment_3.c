/*Programme to print all integers from 1-100 divisible by 5*/
#include <stdio.h>
void main()
{
    for(int i=1;i<=100;i++)
    {
        if(i%5==0)
        printf("%d\n",i);
    }
}