/* Programme to convert minutes to hours*/
#include <stdio.h>
void main()
{
    int minutes;
    printf("Enter Number of Minutes");
    scanf("%d",&minutes);
    printf("%d Minutes=%f Hours\n",minutes,minutes/60.0);
}