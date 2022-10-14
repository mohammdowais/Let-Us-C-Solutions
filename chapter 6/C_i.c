/*Write a program to generate all Pythogorean Triplets with side
length less than or equal to 30.*/
#include<stdio.h>
void main()
{
    int i,j,k;
    printf("Pythagoren triplet  with side length less than or equal to 30 are:\n");
for(i=1;i<30;i++)
    for(j=1;j<30;j++)
        for(k=1;k<30;k++){
        if(i*i==j*j+k*k||i*i+j*j==k*k||j*j==i*i+k*k)
            {
                printf("%d %d %d\n",i,j,k);
                i=i+2;
                j=j+2;
                k=k+2;
                
            }
        continue;    
        }
}
//??????????????????clear some how???????????