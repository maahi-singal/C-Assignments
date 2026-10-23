/*Programme to calculate area and perimeter of a rectangle*/
#include <stdio.h>
void main()
{
    int length,width;
    printf("Enter Length of rectangle:");
    scanf("%d",&length);
    printf("Enter Width of rectangle:");
    scanf("%d",&width);
    printf("Area=%d\nPerimeter=%d",length*width,2*(length+width));
}
