/*Programme to calculate Net Sales*/
#include <stdio.h>
void main()
{
    float gross,discount;
    printf("Enter Gross Sales");
    scanf("%f",&gross);
    discount=(10/100.0)*gross;
    printf("Net Sales=%f",gross-discount);
}