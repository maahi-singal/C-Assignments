/*Programme to calculate simple interest*/
#include <stdio.h>
void main()
{
    int principal,rate,time;
    printf("Enter Principal Amount:");
    scanf("%d",&principal);
    printf("Enter Rate of Interest:");
    scanf("%d",&rate);
    printf("Enter Time Period:");
    scanf("%d",&time);
    printf("Interest=%f",principal*rate*time/100.0);
}