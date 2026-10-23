/*Programme to check if the given number is automorphic or not*/
#include <stdio.h>
void main()
{
    int num,square,temp,digits=0,divisor=1;
    printf("Enter the number:");
    scanf("%d",&num);
    square=num*num;
    temp=num;
    while(temp!=0)
    {
        digits++;
        temp=temp/10;
    }
    for(int i=0;i<digits;i++)
    divisor*=10;
    if(square%divisor==num)
    printf("Automorphic");
    else
    printf("Not Automorphic");
}
