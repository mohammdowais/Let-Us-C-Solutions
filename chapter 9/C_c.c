/*Write a C function to evaluate the series
sin(x)= x - ( x^3/ 3!)  + ( x^5/ 5!) - ( x^7/ 7!)+....
up to 10 terms.*/
#include<stdio.h>
#include<math.h>
float series(float);
void main()
{
    
    float sine, x;
    printf("Enter the value of x:");
    scanf("%f",&x);
    sine=series(x);
    printf("Sum of 10 term of series\nsin(x)= x - ( x^3/ 3!)  + ( x^5/ 5!) - ( x^7/ 7!)+....\n%f",sine);
}
float series(float a)
{
   
    float sum=0;
    int temp;
    for(int i=1;i<20;i++)
    {
        if(i%2!=0){
           
              int fact=1;
              int temp=i;
              
            while(i>=1){
                fact*=i;
                i-=1;
            }
        
        sum+=pow(a,temp)/fact;
        }
        else
        continue;
       
    }
    return (sum);
}
//??????????????????????????????????????????????????????