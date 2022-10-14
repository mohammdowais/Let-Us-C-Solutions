/*Write a program to find the grace marks for a student using switch.
The user should enter the class obtained by the student and the
number of subjects he has failed in. Use the following logic:

 If the student gets first class and the number of subjects he
failed in is greater than 3, then he does not get any grace.
Otherwise the grace is of 5 marks per subject.

 If the student gets second class and the number of subjects he
failed in is greater than 2, then he does not get any grace.
Otherwise the grace is of 4 marks per subject.

 If the student gets third class and the number of subjects he
failed in is greater than 1, then he does not get any grace.
Otherwise the grace is of 5 marks.*/
#include<stdio.h>
void main()
{
    int class,fail,grace;
    printf("Enter class obtained (1,2,3):");
    scanf("%d",&class);
    printf("\nEnter how many subjects have students failed(out of 5 subjects):");
    scanf("%d",&fail);
    switch(class)
    {
        case 1:if(fail>3)
                grace=0;
                else
                grace=5;
                break;

        case 2:if(fail>2)
                grace=0;
                else
                grace=4;
                break;

        case 3:if(fail>1)
                grace=0;
                else
                grace=5; 
                break;       
               
    }
    printf("\nGrace marks obtained by students:%d",grace*5);
}