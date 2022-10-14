/*Write a function to compute the distance between two points and
use it to develop another function that will compute the area of the
triangle whose vertices are A(x1, y1), B(x2, y2), and C(x3, y3). Use
these functions to develop a function which returns a value 1 if the
point (x, y) lines inside the triangle ABC, otherwise returns a value
0.*/
#include<stdio.h>
#include<math.h>
float distance(int,int,int,int);
float area(int,int,int,int,int,int);
int point(int,int,int,int,int,int,int,int);
void main()
{
    int x1,x2,y1,y2,x3,y3,r,s,check;
    float d,a2;
    
    printf("Enter coordinates of to points a(x1,y1) and b(x2,y2):");
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    d=distance(x1,y1,x2,y2);
    printf("Distance betwen entered coordinates area:%f",d);
    
    printf("\nEnter coordinates of vertics of triangle:");
    scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
    a2=area(x1,y1,x2,y2,x3,y3);
    printf("\nArea of given triangle is:%f",a2);
    
    printf("\nEnter any coordinate of any point:");
    scanf("%d%d",&r,&s);
    check=point(r,s,x1,y1,x2,y2,x3,y3);
    if(check==a2)
    printf("\nThe point lies inside above triangle.");
    else
    printf("\nThe point does not lies inside above triangle.");

}
float distance(int a,int b,int c,int d)
{
    float l,temp;
    l=sqrt((a-c)*(a-c)+(b-d)*(b-d));
    return l;
}
float area(int p1,int q1,int p2,int q2,int p3,int q3)
{
    float l1,l2,l3,s,ar1,temp;
    l1=distance(p1,q1,p2,q2);
    l2=distance(p1,q1,p3,q3);
    l3=distance(p3,q3,p2,q2);
    s=(l1+l2+l3)/2;
    temp=s*(s-l1)*(s-l2)*(s-l3);
    ar1=sqrt(temp);
    return ar1;
}
int point(int x,int y,int m1,int n1,int m2,int n2,int m3,int n3)
{
    float are1,are2,are3,sum;
    are1=area(x,y,m2,n2,m3,n3);
    are2=area(m1,n1,x,y,m3,n3);
    are3=area(m1,n1,m2,n2,x,y);
    sum=are1+are2+are3;
    return sum;
}