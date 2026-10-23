/*Programme to convert Rs to Dollar*/
#include <stdio.h>
void main()
{
    int rs;
    printf("Enter amount in Rs:");
    scanf("%d",&rs);
    printf("%d Rs=%f Dollar\n",rs,rs/48.0);
}