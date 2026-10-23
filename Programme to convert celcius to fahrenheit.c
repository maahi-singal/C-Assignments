/*Programme to convert celcius to fahrenheit*/
#include <stdio.h>
void main()
{
    int celcius;
    printf("Enter Temperature in Celcius:");
    scanf("%d",&celcius);
    printf("%d Celcius=%f Farenheit\n",celcius,((9/5.0)*celcius)+32);
}