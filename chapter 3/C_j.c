/*Given three points (x1, y1), (x2, y2) and (x3, y3), write a program
to check if all the three points fall on one straight line*/
#include<stdio.h>
void main()
{
    int x1,x2,x3,y1,y2,y3,a;
    printf("Enter x1,y1");
    scanf("%d%d",&x1,&y1);
    printf("Enter x2,y2");
    scanf("%d%d",&x2,&y2);
    printf("Enter x3,y3");
    scanf("%d%d",&x3,&y3);
    a=x1*(y2-y3)+
      x2*(y3-y1)+
      x3*(y1-y2);
      if(a==0)
      printf("\nThree points form a straight line");
      else
      printf("\nThree points don't form a line  ");
}