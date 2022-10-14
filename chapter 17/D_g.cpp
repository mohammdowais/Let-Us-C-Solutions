/*
Write a function that compares two given dates. To store a date use
a structure that contains three members namely day, month and
year. If the dates are equal the function should return 0, otherwise
it should return 1.
*/
#include<iostream>
using namespace std;
struct date{
    int d;
    int m;
    int y;
};
int comp(  date &d1,date &d2){
    if(d1.d==d2.d && d1.m==d2.m && d1.y==d2.y) return 0;
    return 1;
    
}
int main(){
    date d1={26,6,2019},d2={26,6,2018};
    cout<<comp(d1,d2);
}