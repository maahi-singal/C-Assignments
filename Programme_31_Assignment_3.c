/*Programme to print sum of prime numbers between 1-500*/
#include <stdio.h>
void main()
{
    int counter=0,sum=0;
    for(int i=2;i<=500;i++)
    {
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            counter++;
        }
        if(counter==0)
        sum+=i;
        counter=0;
    }
    printf("Sum is:%d",sum);
}