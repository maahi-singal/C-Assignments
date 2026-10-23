/*Programme to calculate Average of 3 subjects along with their total*/
#include <stdio.h>
void main()
{
    int sub1,sub2,sub3;
    float average;
    printf("Enter Marks in Subject 1:");
    scanf("%d",&sub1);
    printf("Enter Marks in Subject 2:");
    scanf("%d",&sub2);
    printf("Enter Marks in Subject 3:");
    scanf("%d",&sub3);
    average=(sub1+sub2+sub3)/3.0;
    printf("Average Marks=%f\n",average);
    printf("Total Marks=%d\n",(sub1+sub2+sub3));
    if(sub1<35 || sub2<35 || sub3<35)
        printf("Fail\n");
    else if(average>=70)
        printf("Distinction Class\n");
    else if(average>=60)
        printf("First Class\n");
    else if(average>=50)
        printf("Second Class\n");
    else if(average>=35)
        printf("Third Class\n");
}