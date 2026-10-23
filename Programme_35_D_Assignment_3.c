/*Programme to print series using nested loop(D)*/
#include <stdio.h>
void main()
{
    for(int i=5;i>=3;i--)
    {
        for(int j=1;j<=2;j++)
        printf("%d %d\n",i,j);
    }
}