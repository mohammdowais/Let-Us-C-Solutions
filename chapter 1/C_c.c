/*If the marks obtained by a student in five different subjects are
input through the keyboard, write a program to find out the
aggregate marks and percentage marks obtained by the student.
Assume that the maximum marks that can be obtained by a student
in each subject is 100.*/
#include<stdio.h>
void main()
{
    int s1,s2,s3,s4,s5,sum,per;
    system("cls");
    printf("Enter m,arks in  5 subjects");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    sum=s1+s2+s3+s4+s5;
    per=sum*100/500;
    printf("Sum opf marks=%d \npercentage of marks=%d",sum,per);
}