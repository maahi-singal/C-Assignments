/*Programme to calculate Average of 3 subjects along with their total*/
#include <stdio.h>
void main()
{
    int sub1,sub2,sub3;
    printf("Enter Marks in Subject 1:");
    scanf("%d",&sub1);
    printf("Enter Marks in Subject 2:");
    scanf("%d",&sub2);
    printf("Enter Marks in Subject 3:");
    scanf("%d",&sub3);
    printf("Average Marks=%f\n",(sub1+sub2+sub3)/3.0);
    printf("Total Marks=%d\n",(sub1+sub2+sub3));
}