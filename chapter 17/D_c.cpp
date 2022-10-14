/*
(c) An automobile company has serial number for engine parts starting
from AA0 to FF9. The other characteristics of parts are year of
manufacture, material and quantity manufactured.
(1) Specify a structure to store information corresponding to a
part.
(2) Write a program to retrieve information on parts with serial
numbers between BB1 and CC6.
*/
#include<iostream>
using namespace std;
const int N=10;
struct engine{
    string srnum;
    int yom;
    string mat;
    int qty;
};
void display(engine e[],string start,string end){
   
    
}
int main()
{
    engine e[N]={
        "AA0",2019,"iron",14,
        "AA2",2018,"steel",12,
        "BB1",2019,"aluminium",10,
        "BB2",2017,"iron",14,
        "BB3",2017,"steel",3,
        "BB4",2018,"iron",12,
        "CC1",2019,"iron",10,
        "CC2",2020,"steel",3,
        "CC3",2019,"iron",15,
        "CC6",2021,"aluminium",12,
    };
    display(e,"BB1","CC6");
    eng_info(e)

}
