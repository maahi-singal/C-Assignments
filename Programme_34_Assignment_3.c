/*Programme to print fibonacci series upto n numbers*/
#include <stdio.h>
void main()
{
    int prev_num=0,current_num=1 ,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("%d\n",current_num);
        current_num=prev_num+current_num;
        prev_num=current_num-prev_num;
    }
}