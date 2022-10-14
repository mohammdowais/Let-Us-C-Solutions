/*Write a program to produce the following output:
        1
     1     1 
   1    2     1
  1   3    3    1
1   4    6   4   1
*/
#include<stdio.h>
void main()
{
    int i,j,s;
    for(i=1;i<=5;i++)
        for(j=1;j<=5-i;j++)
        printf("R");
}