/*Write a menu driven program which has following options:
1. Factorial of a number
2. Prime or not
3. Odd or even
4. Exit
Once a menu item is selected the appropriate action should be
taken and once this action is finished, the menu should reappear.
Unless the user selects the ‘Exit’ option the program should
continue to run.
Hint: Make use of an infinite while and a switch statement.*/
# include <stdio.h>
#include<conio.h>
void main()
{
    int fact=1,n,choice,i=2,x;
    system("cls");
    x:
    printf("\n\nWhat you want to do?\n1. Factorial of a number\n2. Prime or not\n3. Odd or even\n4. Exit\nEnter any choice(1,2,3,4):");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:printf("\nEnter number:");
               scanf("%d",&n);
               
               while(n)
               {
                   fact*=n;
                   n-=1;
               }
               printf("\nFactorial of given nuber is: %d",fact);
        goto x;
        
        case 2:printf("\nEnter number:");
               scanf("%d",&n);
                  
               for(i=2;i<n;i++)
                {
                    if(n%i==0)
                    {
                        printf("Number is not prime");
                        break;
                    }
                    else{
                        continue;
                    }
                    
                }
                printf("Number is prime");
        goto x;

        case 3:printf("\nEnter number:");
               scanf("%d",&n);
               n%2==0?printf("\nNumber is even"):printf("Number is odd");
        goto x;

        case 4:exit (0);
        default:printf("Invalid choice");
                goto x;
        
               
    }
}
