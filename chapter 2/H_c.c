/*If lengths of three sides of a triangle are input through the
keyboard, write a program to find the area of the triangle.*/
#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    float ar,s,temp;
    printf("Enter three sides of any triangle:");
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2;
    printf("s=%f",s);
    temp=s*(s-a)*(s-b)*(s-c);
    printf("temp=%f",temp);
    ar=sqrt(temp);
    printf("Area=%f",ar);
}