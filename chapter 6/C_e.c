/*A machine is purchased which will produce earning of Rs. 1000 per
year while it lasts. The machine costs Rs. 6000 and will have a
salvage value of Rs. 2000 when it is condemned. If 9 percent per
annum can be earned on alternate investments, write a program to
determine what will be the minimum life of the machine to make it
a more attractive investment compared to alternative investment?*/
/*#include<stdio.h>
void main()
{
    int invest,alt,year=0;
    while(alt>invest)
    {
        year++;
        alt=90*year;
        invest=1000*year-4000;
        
    }
    printf("life of the machine to make it a more attractive investmen=%d",year);
}*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int year=0, invest, alternate;

    while(alternate>invest)
    {
        year++;  //year = year + 1;

        // yearly produce income form alternate solution
        // 9 % of 1000 = 90
        alternate = year * 90;

        // yearly produced income from machine
        // 1000 per year - [6000(machine cost) - 2000(salvage or scrap value of machine)]
        // 1000 * year - [6000-2000]
         invest = (1000*year) - 4000;

    }

    printf("The Life of Machine: %d years", year);

}