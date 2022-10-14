/*Sudoku is a popular number-placement puzzle (refer Figure 14.9).
The objective is to fill a 9×9 grid with digits so that each column,
each row, and each of the nine 3×3 sub-grids that compose the grid
contains all of the digits from 1 to 9. The puzzle setter provides a
partially completed grid, which typically has a unique solution. One
such solution is given below. Write a program to check whether the
solution is correct or not.
                        {5,3,4,6,7,8,9,1,2},
                        {6,7,2,1,9,5,3,4,8},
                        {1,9,8,3,4,2,5,6,7},
                        {8,5,9,7,6,1,4,2,3},
                        {4,2,6,8,5,3,7,9,1},
                        {7,1,3,9,2,4,8,5,6},
                        {9,6,1,5,3,7,2,8,4},
                        {2,8,7,4,1,9,6,3,5},
                        {3,4,5,2,8,6,1,7,9},
    };*///wanna make it more critical
#include<stdio.h>
#include<stdlib.h>
#define n 9
static int error=0;
void checkgrid(int sd[n][n],int t)
{
    int i,j,k,l,sum=0;
    for(l=0;l<t;l+=3)//for movinng 3x3 grid down
    for(k=0;k<t;k+=3)//for movinng 3x3 grid right
    {
        sum=0;
        for(i=k;i<k+3;i++)/*Moving donw the row*/
        {
            for(j=l;j<l+3;j++)//Moving right of the row
            {
                sum+=sd[i][j];
                //printf("%d(%d,%d) ",sd[i][j],i,j);
            }
           // printf("\n");
            
            }
            if(sum!=45){
                printf("%d\n",sum);
                error+=1;
                return;

        }
        //printf("\n");
    }
}
void checkrow(int sd[n][n],int t)
{
   int i, j, sum = 0;
	for (i = 0; i <= 8; i++)/*Moving donw the row*/
	{
		sum = 0;//reinitialisation of sum
		for (j = 0; j <= 8; j++)//Moving right of the row
			sum += sd[i][j];
           
		if (sum != 45)
		{
			error += 1;//if there's error
			return;
		}

	}
}
void checkcol(int sd[n][n],int t)
{
   int i, j, sum = 0;
	for (j = 0; j <= 8; j++)//Moving right of the row
	{
		sum = 0;//reinitialisation of sum
		for (i = 0; i <= 8; i++)/*Moving donw the row*/
			sum += sd[i][j];
           
		if (sum != 45)
		{
			error += 1;//if there's error
			return;
		}

	}
}
void main()
{
    int sd[n][n]={
		5,3,4,6,7,8,9,1,2,
		6,7,2,1,9,5,3,4,8,
		1,9,8,3,4,2,5,6,7,
		8,5,9,7,6,1,4,2,3,
		4,2,6,8,5,3,7,9,1,
		7,1,3,9,2,4,8,5,6,
		9,6,1,5,3,7,2,8,4,
		2,8,7,4,1,9,6,3,5,
		3,4,5,2,8,6,1,7,9
	};
    checkrow(sd,n);
    checkcol(sd,n);
    checkgrid(sd,n);
    if(error)
    printf("Wrong");
    else
    printf("Right");

}