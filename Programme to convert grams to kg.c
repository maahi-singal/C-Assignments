/*Programme to convert grams to kg*/
#include <stdio.h>
void main()
{
    int grams;
    printf("Enter quantity in Grams:");
    scanf("%d",&grams);
    printf("%d Grams=%f Kgs\n",grams,grams/1000.0);
}