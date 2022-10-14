/*For the following set of n data points (x, y), compute the correlation coefficient r
x       y
39.87   100.93
34.22   102.43
41.85   97.43
43.23   97.81
40.06   98.32
53.29   98.32
53.29   100.07
54.14   97.08
49.12   91.59
40.71   94.85
55.15   94.65 
NOTE :the formula in book i correct*/
#include<stdio.h>
#include<math.h>
float cc(float x[],float y[],int n)
{
    float sigma_xy=0,sigma_x=0,sigma_y=0,sigma_x2=0,sigma_y2=0;
    for(int i=0;i<n;i++)
    {
    sigma_xy +=x[i]*y[i];
    sigma_x  +=x[i];
    sigma_y  +=y[i];
    sigma_x2 +=x[i]*x[i];
    sigma_y2 +=y[i]*y[i];
    }
    float temp=(n*sigma_x2-sigma_x*sigma_x)*(n*sigma_y2-sigma_y*sigma_y);
    float r= (n*sigma_xy-sigma_x*sigma_y)/sqrt(temp);
    return r;

}
void main()
{
    float y[]={100.93,102.43,97.43,97.81,98.32,98.32,100.07,97.08,91.59,94.85,94.65},
          x[]={39.87,34.22,41.85,43.23,40.06,53.29,53.29,54.14,49.12,40.71,55.15};
          int n;
    n=sizeof(y)/sizeof(y[0]);
    printf("\nCorrelation coefficient is %f ",cc(x,y,n));
}