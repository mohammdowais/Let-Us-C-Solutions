/*Write a program that generates and prints the Fibonacci words of
order 0 through 5. If f(0) = "a", f(1) = "b", f(2) = "ba", f(3) = "bab",
f(4) = "babba", etc.*/
#include<stdio.h>
#include<string.h>
void main()
{
    char t1[10]="a",t2[10]="b",t3[10];
    for(int i=0;i<5;i++)
    {
        printf("%s\t",t1);
        strcpy(t3,t1);
        strcpy(t1,t2);
        strcat(t2,t3);
    }
    
}
