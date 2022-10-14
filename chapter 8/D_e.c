/*A positive integer is entered through the keyboard. Write a function
to obtain the prime factors of this number.
For example, prime factors of 24 are 2, 2, 2 and 3, whereas prime
factors of 35 are 5 and 7.*/
#include<stdio.h>
void factor(int);
void main()
{
    int num;
    printf("Enter any number");
    scanf("%d",&num);
    factor(num);
}
void factor(int x)
{
    int i,j,temp=1;
    printf("Prime factor of %d are:",x);
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            if(i==2)
            printf("2");
        
            else{
                for(j=2;j<i;j++)
                {
                    if(i%j==0){
                        temp++;
                        break;
                    }
                    else{
                        continue;
                    }
                }
                if(temp==1)    
        printf(" %d ",i);
            }
            
        }
        
    }

}
