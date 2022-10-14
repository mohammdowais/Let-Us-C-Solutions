/*
There is a structure called employee that holds information like
employee code, name and date of joining. Write a program to
create an array of structures and enter some data into it. Then ask
the user to enter current date. Display the names of those
employees whose tenure is greater than equal to 3 years.
*/
#include<iostream>
using namespace std;
struct employee{
    int code;
    string name;
    int doj[3];
};
void display(employee e){
    cout<<"\nName"<<e.name<<endl;
}
int main(){
    employee e[]={
    001, "Shahnawaz", 13, 1,2006,
	004, "Amit Puri", 21, 6,2008,
	102, "Irfan Moin", 12, 5, 2019,
	131, "Shabnam", 16, 1, 2018
    };
    int d,m,y;
    cout<<"Enter current date (DD MM YYYY)";
    cin>>d>>m>>y;
    for(int i=0;i<4;i++){
       if (y - e[i].doj[2] > 3)
			display(e[i]);
		else if (y - e[i].doj[2] == 3)
		{
			if (m - e[i].doj[1] > 0)
				display(e[i]);
			else if (e[i].doj[1] == d)
			{
				if ((d - e[i].doj[0]) >= 0)
					display(e[i]);

			}
		}
    }
}