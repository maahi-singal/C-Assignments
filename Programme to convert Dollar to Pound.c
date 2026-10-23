/*Programme to convert Dollar to Pound*/
#include <stdio.h>
void main()
{
    int dollar;
    printf("Enter amount in Dollar:");
    scanf("%d",&dollar);
    printf("%d Dollar=%f Pound\n",dollar,(48.0/70)*dollar);
}