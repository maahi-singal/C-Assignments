/*Programme to calculate net salary*/
#include <stdio.h>
void main()
{
    float gross,allowance,deduction,net;
    printf("Enter Gross Salary");
    scanf("%f",&gross);
    if(gross>10000)
        {
            allowance=(10/100.0)*gross;
            deduction=(3/100.0)*gross;
        }
    else if(gross>5000)
        {
            allowance=(7/100.0)*gross;
            deduction=(2/100.0)*gross;
        }
    else
        {
            allowance=0;
            deduction=0;
        }
    net=gross+allowance-deduction;
    printf("Net Salary=%f\n",net);
}