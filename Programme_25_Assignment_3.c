/*Programme to check if the given number is palindrome or not*/
#include <stdio.h>
void main()
{
    int num,rev=0,original;
    printf("Enter the number:");
    scanf("%d",&num);
    original=num;
    while(num!=0)
    {
        rev=rev*10+num%10;
        num=num/10;
    }
    if(original==rev)
    printf("Palindrome");
    else
    printf("Not a Palindrome");
}