/*Programme to count number of boys and girls*/
#include <stdio.h>
void main()
{
    int boys=0,girls=0,i;
    char gender;
    for(i=0;i<5;i++)
    {
        printf("Enter Gender(M/F):");
        scanf(" %c",&gender);
        if(gender=='M')
        boys++;
        else
        girls++;
    }
    printf("Total Boys=%d\n",boys);
    printf("Total  Girls=%d\n",girls);
}
