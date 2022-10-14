/*If the ages of Ram, Shyam and Ajay are input through the keyboard,
write a program to determine the youngest of the three.*/
#include<stdio.h>
void main()
{
    int r,s,a,y;
    printf("Enter the ages of Ram Shyam and Ajay;");
    scanf("%d%d%d",&r,&s,&a);
    y=(r<s&&r<a?r:s<r&&s<a?s:a);
    if(y==r)
        printf("Ram is youngest");
    if(y==s)
        printf("Shyam is youngest");
    if(y==a)
        printf("Ajay is youngest");
}