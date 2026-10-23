/*Programme to convert kg to grams*/
#include <stdio.h>
void main()
{
    int kg;
    printf("Enter quantity in Kg:");
    scanf("%d",&kg);
    printf("%d Kg=%f Grams\n",kg,kg*1000);
}