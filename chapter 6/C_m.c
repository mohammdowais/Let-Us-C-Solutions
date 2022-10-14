/*Write a program to produce the following output:
            1
        2        3
    4       5       6
7       8       9       10*/
#include<stdio.h>
void main()
{
 int i,j,k=1,s;
  for(i=1;i<=4;i++)
  {
      for(s=1;s<=5-i;s++)
      printf(" ");
        for(j=1;j<=i;j++,k++)
        printf("%d ",k);
        printf("\n");
  }
}
//????????????all clear????????????