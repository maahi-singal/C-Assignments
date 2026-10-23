/*Programme to print min and max of 5 numbers*/
#include <stdio.h>
void main()
{
    int num,max,min,i;
    for(i=0;i<5;i++)
    {
        printf("Enter a number:");
        scanf("%d",&num);
        if(i==0)
        min=max=num;

        if(num>max)
        max=num;

        if(num<min)
        min=num;
    }
    printf("Max is%d\n",max);
    printf("Min is:%d\n",min);
}