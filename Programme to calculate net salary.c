/*Programme to calculate net salary*/
#include <stdio.h>
void main()
{
    float gross,allowance,deduction,net;
    printf("Enter Gross Salary");
    scanf("%f",&gross);
    allowance=(10/100.0)*gross;
    deduction=(3/100.0)*gross;
    net=gross+allowance-deduction;
    printf("Net Salary=%f",net);
}