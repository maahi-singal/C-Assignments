/*Obtain transpose of a 4x4 matrix*/
#include <stdio.h>
int main()
{
    int arr1[4][4];
    printf("Enter Values for Matrix\n");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("Enter value for %d,%d position of Matrix:",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("Original Matrix\n");
    for(int x=0;x<4;x++)
    {
        printf("\n");
        for(int y=0;y<4;y++)
        {
            printf("%d\t",arr1[x][y]);
        }
    }


    for(int a=0;a<4;a++)
    {
        for(int b=a+1;b<4;b++)
        {
            int temp;
            temp=arr1[a][b];
            arr1[a][b]=arr1[b][a];
            arr1[b][a]=temp;
        }
    }
    printf("\nTransposed Matrix\n");
    for(int p=0;p<4;p++)
    {
        printf("\n");
        for(int q=0;q<4;q++)
        {
            printf("%d\t",arr1[p][q]);
        }
    }
    return 0;
}