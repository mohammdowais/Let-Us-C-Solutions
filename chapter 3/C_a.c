/*If cost price and selling price of an item are input through the
keyboard, write a program to determine whether the seller has
made profit or incurred loss. Also determine how much profit he
made or loss he incurred.*/
#include<stdio.h>
void main()
{
    int cp,sp;
    printf("Enter selling price an cost price");
    scanf("%d%d",sp,cp);
    if(sp>cp)
    printf("Profit");
    else if(cp>sp)
    printf("Loss");

}