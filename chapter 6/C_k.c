/*Ramanujan number is the smallest number that can be expressed
as sum of two cubes in two different ways. Write a program to print
all such numbers up to a reasonable limit.*/
#include<stdio.h>
#include<math.h>
void main()
{
// Starting from 1, check every number if
    // it is Taxicab until count reaches n.
    int i = 1, count = 0,n,j,k;
    printf ("how many taxicab numbers you want to find?");
    scanf("%d",&n);
    while (count < n)
    {
       int int_count = 0;
 
       // Try all possible pairs (j, k) whose cube
       // sums can be i.
       for ( j = 1; j <= pow(i, 1.0/3); j++)
          for ( k = j + 1; k <= pow(i, 1.0/3); k++)
             if (j*j*j + k*k*k == i)
                  int_count++;
                 
             
       // Taxicab(2) found
       if (int_count == 2)
       {
          count++;
         printf("%d. %d\n",count,i);
       }
 
       i++;
    }
}
 //?????????????clear????????????