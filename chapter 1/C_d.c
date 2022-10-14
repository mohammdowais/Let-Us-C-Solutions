/*Temperature of a city in Fahrenheit degrees is input through the
keyboard. Write a program to convert this temperature into
Centigrade degrees.*/
#include<stdio.h>
void main()
{
    float far,cel;
    printf("Enter temperature of city in farenheit:");
    scanf("%f",&far);
    cel=(far-32)*5/9;
    printf("Temperature of city in celcius:%f",cel);
    }