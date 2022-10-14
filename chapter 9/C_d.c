/*Given three variables x, y, z write a function to circularly shift their
values to right. In other words if x = 5, y = 8, z = 10, after circular
shift y = 5, z = 8, x =10. Call the function with variables a, b, c to
circularly shift values.*/
#include<stdio.h>
void shift(int,int,int);
void main()
{
    int a,b,c;
    printf("Enter the values of a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    printf("Before shifting\na=%d\tb=%d\tc=%d",a,b,c); 
    shift(a,b,c);
}
void shift(int x,int y,int z)
{
    int temp;
    temp=x;
    x=y;
    y=z;
    z=temp;
    printf("\nAfter shifting\na=%d\tb=%d\tc=%d",x,y,z);
}