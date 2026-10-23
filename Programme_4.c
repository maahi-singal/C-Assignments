/*Print minimum no. of notes required.
Notes given are 1, 2, 5, 10, 20, 50, 100, 200 & 500.
e.g if value is 1256, then answer is 2 notes of 500 Rs., 1 note of 200 Rs., 1 note of 50 Rs., 1 note of 5 Rs., and 1 note of 1 Rupee.*/
#include <stdio.h>
int main()
{
    int notes[]={500,200,100,50,20,10,5,2,1},money,count[9];
    printf("Enter an integer value:");
    scanf("%d",&money);
    for(int i=0;i<9;i++)
    {
        count[i]=money/notes[i];
        money%=notes[i];
    }
    for(int j=0;j<9;j++)
    {
        if(count[j]!=0)
        printf("%d notes of %d rs\n",count[j],notes[j]);
    }
}