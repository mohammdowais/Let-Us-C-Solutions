/*Write a program for a matchstick game being played between the
computer and a user. Your program should ensure that the
computer always wins. Rules for the game are as follows:
 There are 21 matchsticks.
 The computer asks the player to pick 1, 2, 3, or 4 matchsticks.
 After the person picks, the computer does its picking.
 Whoever is forced to pick up the last matchstick loses the game.*/
#include<stdio.h>
void main()
{
    int cu,cc,mstk=21;
    system("cls");
    printf("\tMatchstick Game");
    printf("\n\nThere are 21 matchsticks.\nThe computer asks the player to pick 1, 2, 3, or 4 matchsticks. \nAfter the person picks, the computer does its picking.\nWhoever is forced to pick up the last matchstick loses the game");
    printf("\n\nHow many matchstick you want top pick(1,2,3 or 4)?:");
    while(mstk!=1)
    {
    scanf("%d",&cu);
        if(cu<1||cu>4)
        {
            printf("\nYou can only pick 1, 2, 3, or 4 matchsticks.\n\tPick again.");
            continue;
        }
        mstk=mstk-cu;
        printf("\nMatchstick left = %d",mstk);
       cc=5-cu;
        printf("\nComputer picks %d matchsticks.",cc);
        mstk=mstk-cc;
        printf("\nMatchstick left = %d",mstk);
        if(mstk==1)
        {
        printf("\n\tYou chose the last matchstick you loose");
        break;
        }
        printf("\nYour turn:");
       
    }
   
}