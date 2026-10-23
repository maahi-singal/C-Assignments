/*Programme to convert fahrenheit to celcius*/
#include <stdio.h>
void main()
{
    int fahrenheit;
    printf("Enter Temperature in Fahrenheit:");
    scanf("%d",&fahrenheit);
    printf("%d Fahrenheit=%f celcius\n",fahrenheit,(5/9.0)*(fahrenheit-32));
}