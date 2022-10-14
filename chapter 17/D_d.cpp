/*
A record contains name of cricketer, his age, number of test
matches that he has played and the average runs that he has scored
in each test match. Create an array of structures to hold records of
20 such cricketers and then write a program to read these records
and arrange them in ascending order by average runs. Use the
qsort( ) standard library function.
jadeja 42 80 89
honi 48 90 95
kohli 38 91 96
raina 39 92 97
*/
#include<bits/stdc++.h>
using namespace std;
const int N=5;
struct record{
    int avg;
    string name;
    int age;
    int notm;
    
};
void read(record pt[]){
    for(int i=0;i<N;i++){
    cout<<"Enter name , age , number of test matches and average runs of player"<<i+1<<endl;
    cin>>pt[i].name>>pt[i].age>>pt[i].notm>>pt[i].avg;
    }
}
void display(record pt[]){
    cout<<"Avg Run      Name           Age    Test matchs\n";
    for(int i=0;i<N;i++){
    cout<<pt[i].avg<<"      "<<pt[i].name<<"    "<<pt[i].age<<"     "<<pt[i].notm<<endl;
    }
}
int compare(const void * a, const void * b)
{
	return (*(int*)a - *(int*)b);
}
int main(){
    record india[N]={
    122,"Sachin Tendulkar", 30, 67,
	97, "Virendra Sehwag ", 35, 56,
	66, "Irfan Pathan    ", 32, 45,
	153,"Yusuf Pathan    ", 36, 21,
	101,"Yuvaraj Singh   ", 32, 45,
    };
    //read(india);
    //display(india);
    qsort(india,5,sizeof(record),compare);
    display(india);
}
