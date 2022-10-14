/*Write a program to produce the following output:
        A B C D E F G F E D C B A
        A B C D E F   F E D C B A
        A B C D E       E D C B A
        A B C D           D C B A
        A B C               C B A
        A B                   B A
        A                       A        */
#include<stdio.h>
void main()

{
        int i,j,k;
for(i=7;i>=1;i--)
{
        for(j=1;j<=7;j++)
        {
        if(j<=i)
        printf("%c ",'A' + j-1);
        else
        printf("  ");
        }
        for(j=6;j>=1;j--)
        {
        if(j<=i)
        printf("%c ",'A' + j-1);
        else
        printf("  ");
        } 
        printf("\n");
	
}
}
//???????????partial clear once more try it?????????????