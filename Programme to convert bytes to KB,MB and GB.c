/*Programme to convert bytes to KB,MB and GB*/
#include <stdio.h>
void main()
{
    int bytes;
    printf("Enter Bytes:");
    scanf("%d",&bytes);
    printf("%d bytes=%f KB\n",bytes,bytes/1024.0);
    printf("%d bytes=%f MB\n",bytes,(bytes/(1024.0*1024.0)));
    printf("%d bytes=%f GB\n",bytes,(bytes/(1024.0*1024.0*1024.0)));
}