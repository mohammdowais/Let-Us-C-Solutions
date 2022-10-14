/*
(a) Create a structure to specify data on students given below:
Roll number, Name, Department, Course, Year of joining
Assume that there are not more than 450 students in the college.
(1) Write a function to print names of all students who joined in a
particular year.
(2) Write a function to print the data of a student whose roll
number is received by the function.
*/
#include<iostream>
using namespace std;
const int N=5;
struct students{
    int rnum;
    string name;
    string dept;
    string  course;
    int yoj;
};
void display(students stu[]){
    int yr;
    cin>>yr;
    for(int i=0;i<N;i++){
        if(stu[i].yoj==yr)
        cout<<stu[i].name<<endl;
    }
}
void display2(students stu[]){
    int rn;
    cin>>rn;
    for(int i=0;i<N;i++){
        if(stu[i].rnum==rn){
        cout<<stu[i].name<<" ";
        cout<<stu[i].dept<<" ";
        cout<<stu[i].course<<" ";
        cout<<stu[i].yoj<<" ";
        }
    }
}
int main(){
    students s[N]={
        1001,"tom","CS","ai ml",2020,
        1002,"som","CS","ai ml",2021,
        1003,"lom","IT","cse",2020,
        1004,"pom","IT","cse",2021,
        1004,"rom","CS","ai ml",2019,
    };
    display(s);
    display2(s);

}