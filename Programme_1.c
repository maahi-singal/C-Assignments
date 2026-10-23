/*Programme to accept 5 values and print them later on.*/
#include <stdio.h>
void main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter an integer value:");
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<5;j++)
    {
        printf("%d\n",arr[j]);
    }
}