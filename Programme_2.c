/*Programme to accept 10 values and print 4th, 7th and 9th value*/
#include <stdio.h>
void main()
{
    int arr[10];
    for(int i=0;i<10;i++)
    {
        printf("Enter an integer value:");
        scanf("%d",&arr[i]);
    }
    printf("%d\n",arr[3]);
    printf("%d\n",arr[6]);
    printf("%d\n",arr[8]);
}