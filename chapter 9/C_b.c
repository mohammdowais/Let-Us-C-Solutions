/*Write a function that receives marks received by a student in 3
subjects and returns the average and percentage of these marks.
Call this function from main( ) and print the results in main( ).*/
#include<stdio.h>
void result(int,int,int);
void main()
{
    int s1,s2,s3;
    printf("Enter marks in 3 subjects:");
    scanf("%d%d%d",&s1,&s2,&s3);
    result(s1,s2,s3);
}
void result(int x,int y,int z)
{
    float avg,per;
    avg=(x+y+z)/3;
    
    printf("Average:%f\nPertcentage:%f",avg,avg);
}