/*Programme to print series using nested loop(C)*/
#include <stdio.h>
void main()
{
    for(int i=1;i<3;i++)
    {
        for(int j=1;j<3;j++)
        {
            for(int k=1;k<=2;k++)
            printf("%d %d %d\n",i,j,k);
        }
    }
}