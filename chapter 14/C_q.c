/*The X and Y coordinates of 10 different points are entered through
the keyboard. Write a program to find the distance of last point
from the first point (sum of distances between consecutive points).*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float x[10], y[10], dis = 0;
	int i, j;
	printf("Enter the coordinates of 10 points ~ \n\n");
	
	for (i = 0; i<10; i++)
		scanf("%f%f", &x[i], &y[i]);

	for (i = 0; i<10; i++)
		dis = dis + sqrt(pow((x[i + 1] - x[i]), 2) + pow((y[i + 1] - y[i]), 2));

	printf("The total distance between first and last point is %f", dis);

	_getch();
	return 0;
}