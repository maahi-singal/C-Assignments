/*Programme to count positive,negative and zeroes in 5 values*/
#include <stdio.h>
void main()
{
    int num,positive=0,negative=0,zero=0,i;
    for(i=0;i<5;i++)
    {
        printf("Enter a number:");
        scanf("%d",&num);
        if(num>0)
        positive++;
        else if(num<0)
        negative++;
        else
        zero++;
    }
    printf("Total Positive Numbers=%d\n",positive);
    printf("Total Negative Numbers=%d\n",negative);
    printf("Total Zeroes=%d\n",zero);
}
