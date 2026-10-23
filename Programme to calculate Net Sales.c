/*Programme to calculate Net Sales*/
#include <stdio.h>
void main()
{
    float gross,discount;
    printf("Enter Gross Sales");
    scanf("%f",&gross);
    if(gross>20000)
        discount=(15/100.0)*gross;
    else if(gross>10000)
        discount=(10/100.0)*gross;
    else
        discount=(5/100.0)*gross;
    printf("Net Sales=%f\n",gross-discount);
}