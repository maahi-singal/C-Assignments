/*Programme to check if the given numvber is prime or not*/
#include <stdio.h>
void main()
{
    int num,counter=0;
    printf("Enter the number:");
    scanf("%d",&num);
    for(int i=1;i<=num/2;i++)
    {
        if(num%i==0)
        counter++;
    }
    if(counter==1 && num>1)
    printf("Prime");
    else
    printf("Not Prime");
}