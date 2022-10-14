/*A positive integer is entered through the keyboard, write a program
to obtain the prime factors of the number. Modify the function
suitably to obtain the prime factors recursively.*/
#include<stdio.h>
void primefactor(int);
void rec_primefactor(int ,int);
void main()
{
    int num;
    printf("Enter any number");
    scanf("%d",&num);
    rec_primefactor(num,2);
}
void primefactor(int x)//without recursion
{
    int i,j;
    for(i=2;i<=x;i++)
    {
        if(x%i==0)
        {
           int check=1;
           for(j=2;j<=i;j++)
            {
                if(i%j==0)
                {
                   check++ ;
                }
                else
               continue;
            }
            if(check<=2)
            printf(" %d ",i);
        }
    }
}
void pfactors(int num)  //simpler function without recursion
{  
    int count;  
  
    for(count = 2; (num > 1); count++)  
    {  
        while(num % count == 0)  
        {  
            printf("%d\n", count);  
            num = num / count;  
        }  
    }  
    printf("\n");  
}
void rec_primefactor(int n,int i)//code with recurion
{
    int j=2;
    if(i<=n)
    {
        
        if(n%i==0)
        {
            printf("%d ",i);
            rec_primefactor(n/i,i);
        }    
        else
        {
            rec_primefactor(n,i+1);           
        }
    }
}
    
