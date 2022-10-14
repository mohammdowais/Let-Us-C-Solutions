/*If the lengths of the sides of a triangle are denoted by a, b, and c,
then area of triangle is given by
area  S(S  a)(S  b)(S  c)
where, S = ( a + b + c ) / 2. Write a function to calculate the area of
the triangle.*/
#include<stdio.h>
#include<math.h>
float area(int,int,int);
void main()
{
    int a,b,c;
    float ar;
    printf("Enter sides of triangle");
    scanf("%d%d%d",&a,&b,&c);
    ar=area(a,b,c);
    printf("Area of triangle:%f unit square",ar);
}
float area(int x,int y,int z)
{
    float s,are,temp;
    s=(x+y+z)/2;
    temp=s*(s-x)*(s-y)*(s-z);
    are=sqrt(temp);
    return are;
}