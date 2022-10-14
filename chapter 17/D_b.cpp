/*
(b) Create a structure to specify data of customers in a bank. The data
to be stored is: Account number, Name, Balance in account.
Assume maximum of 200 customers in the bank.
(1) Write a function to print the Account number and name of
each customer with balance below Rs. 100.
(2) If a customer requests for withdrawal or deposit, the form
contains the fields:
Acct. no, amount, code (1 for deposit, 0 for withdrawal)
Write a program to give a message, “The balance is insufficient
for the specified withdrawal”, if on withdrawal the balance falls
below Rs. 100.
*/
#include<iostream>
using namespace std;
const int N=5;
struct customer{
    int acnum;
    string name;
    int balance;
};
void display(customer c[]){
    
    for(int i=0;i<N;i++){
        if(c[i].balance<100)
        cout<<c[i].name<<" "<<c[i].acnum<<endl;
    }
}
void message(int b,int c){
    if(b-c<100)  cout<<"The balance is insufficient for the specified withdrawal";
    
}
void transaction(customer c[]){
    cout<<"Enter account no.";
    int ac ;     cin>>ac;
    cout<<"Enter 1 for deposit, 0 for withdrawal"<<endl;
    int code;    cin>>code;
    cout<<"Enter amount";
    int amnt;    cin>>amnt;
    for(int i=0;i<N;i++){
        if(c[i].acnum==ac)
        {
            //int b=c[i].balance;
            if(code==0){
                message(c[i].balance,amnt);
               if(c[i].balance-amnt>100) c[i].balance-=amnt;
            }
            if(code==1) c[i].balance+=amnt;
        }
    }
}
                    
int main(){
    customer c[N]={
        1001,"tom",2020,
        1002,"som",20,
        1003,"lom",2020,
        1004,"pom",100,
        1004,"rom",2019,
    };
    display(c);
    transaction(c);
}