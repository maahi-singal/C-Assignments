/*Programme to calculate area and perimeter of a square*/
#include <stdio.h>
void main()
{
    int side;
    printf("Enter Side Length of Square:");
    scanf("%d",&side);
    printf("Area=%d\nPerimeter=%d",side*side,side*4);
}
