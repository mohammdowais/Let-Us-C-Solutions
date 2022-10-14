/*Write a program to print all prime numbers from 1 to 300. (Hint:
Use nested loops, break and continue)*/
#include<stdio.h>
void main()
{
    int i,n,c;
    printf("Prime numbers from 1 to 300\n2\n");
    for(i=3;i<=300;i++)
    {
        c=0;
      for(n=2;n<i;n++)
      {
      if(i%n==0){
      c=c+1;
      break;
      }
      else
      continue;
      }
      if(c==0)
    printf("%d\n",i);
    }
    
}