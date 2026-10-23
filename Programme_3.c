/*Programme to accept 5 values and sort the array in either ascending or descending order.*/
#include <stdio.h>
int main()
{
    int arr[5],temp_des,temp_asc;
    for(int i=0;i<5;i++)
    {
        printf("Enter an integer value:");
        scanf("%d",&arr[i]);
    }
    printf("Descending Order:\n");
    for(int j=0;j<5;j++)
    {
        for(int k=j+1;k<5;k++)
        {
            if(arr[k]>arr[j])
            {
                temp_des=arr[j];
                arr[j]=arr[k];
                arr[k]=temp_des;
            }
        }
    }
    for(int l=0;l<5;l++)
    {
        printf("%d\n",arr[l]);
    }
    printf("Ascending Order:\n");
    for(int a=0;a<5;a++)
    {
        for(int b=a+1;b<5;b++)
        {
            if(arr[a]>arr[b])
            {
                temp_asc=arr[a];
                arr[a]=arr[b];
                arr[b]=temp_asc;
            }
        }
    }
    for(int c=0;c<5;c++)
    {
        printf("%d\n",arr[c]);
    }
    return 0;
}