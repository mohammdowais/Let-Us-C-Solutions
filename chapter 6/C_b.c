/*Write a program to fill the entire screen with a smiling face. The
smiling face has an ASCII value 1.*/
#include<stdio.h>
void main()
{
    int r,c;
    system("cls");
    for(r=0;r<24;r++)
    {
        for(c=0;c<79;c++)
        {
        printf("%c ",1);
        }
    }
}