/*Multiply two 2D array and store the result in the 3rd 2D-array*/
#include <stdio.h>
int main()
{
    int rows,column;
    printf("Enter Number of rows:");
    scanf("%d",&rows);
    printf("Enter Number of column:");
    scanf("%d",&column);
    int arr1[rows][column],arr2[rows][column],arr3[rows][column];
    printf("Enter Values for Matrix 1\n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("Enter value for %d,%d position of Matrix:",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter Values for Matrix 2\n");
    for(int k=0;k<rows;k++)
    {
        for(int l=0;l<column;l++)
        {
            printf("Enter value for %d,%d position of Matrix:",k,l);
            scanf("%d",&arr2[k][l]);
        } 
    }
    printf("Multiplication of the Two Matrices Gives:");
    for(int a=0;a<rows;a++)
    {
        for(int b=0;b<column;b++)
        {
            int c=0,d=0;
            arr3[a][b]=0;
            while(c<rows && d<column)
            {
                arr3[a][b]+=arr1[a][d]*arr2[c][b];
                c++;
                d++;
            }
            c=0;
            d=0;
        }
    }
    for(int x=0;x<rows;x++)
    {
        printf("\n");
        for(int y=0;y<column;y++)
        {
            printf("%d\t",arr3[x][y]);
        }
    }
    return 0;
}
