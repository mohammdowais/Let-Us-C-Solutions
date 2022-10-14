/*For the following set of point given by (x, y) fit a straight line given
by y = a + bx
where,
a=ybar - b*xbar and 
b=formula in book
x        Y
3.0     1.5
4.5     2.0
5.5     3.5
6.5     5.0
7.5     6.0
8.5     7.5
8.0     9.0
9.0     10.5
9.5     12.0
10.0    14.0*/
#include<stdio.h>
float calc_b(float x[],float y[],int n){
    float sigmayx=0,sigmax=0,sigmay=0,sigmax2=0;
    for(int i=0;i<n;i++){
        sigmayx +=x[i]*y[i];
        sigmax  +=x[i];
        sigmay  +=y[i];
        sigmax2 +=x[i]*x[i];
    }
    int temp=(n*sigmayx-sigmax*sigmay)/(n*sigmax2-sigmax*sigmax);
    return (temp);
}
float calc_a(float x[],float y[],int n,int b){
    float sumx=0,sumy=0,ybar,xbar;
    for(int i=0;i<n;i++)
    {
        sumx+=x[i];
        sumy+=y[i];
    }
    ybar=sumy/n;
    xbar=sumx/n;
    return (ybar - b*xbar);

}
void main()
{
    float a,b,x[]={3.0 ,4.5 ,5.5 ,6.5 ,7.5 ,8.5 ,8.0 ,9.0 ,9.5 ,10.0},
          y[]={1.5,2.0,3.5,5.0,6.0,7.5,9.0,10.5,12.0,14.0};
    int n;
    n=sizeof(y)/sizeof(y[0]);
    printf("%d",n);
    b=calc_b(x,y,n);
    a=calc_a(x,y,n,b);
    printf("\nThe required straight line is : y = %f + %fx ",a,b);
}