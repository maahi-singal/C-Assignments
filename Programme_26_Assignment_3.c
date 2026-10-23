/*Programme to find if the given number is armstrong or not*/
#include <stdio.h>
void main()
{
    int num,power_sum=0,temp,power=0,digit,temp1,temp_digit;
    printf("Enter the number:");
    scanf("%d",&num);
    temp=num;
    temp1=num;
    while(temp!=0)
    {
        power++;
        temp=temp/10;
    }
    for(int i=0;i<power;i++)
    {
        digit=temp1%10;
        temp_digit=digit;
        temp1/=10;
        for(int j=0;j<power-1;j++)
        digit*=temp_digit;
        power_sum+=digit;
    }
    if(num==power_sum)
    printf("The given number is an armstrong number");
    else
    printf("The given number is not an armstrong number");
}
