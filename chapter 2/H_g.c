/*If value of an angle is input through the keyboard, write a program
to print all its Trigonometric ratios.*/

#include<stdio.h>
#include<math.h>
void main()
{
    float angle;
    printf("Enter value of any angle:");
    scanf("%f",&angle);
    printf("sin%f = %f",angle,sin(angle));
    printf("\ncos%f = %f",angle,cos(angle));
    printf("\ntan%f = %f",angle,tan(angle));
}