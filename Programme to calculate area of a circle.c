/*Programme to calculate area of a circle*/
#include <stdio.h>
void main()
{
    int rad;
    printf("Enter Radius of Circle:");
    scanf("%d",&rad);
    printf("Area=%f\nPerimeter=%f",(22/7.0)*rad*rad,2*(22/7.0)*rad);
}