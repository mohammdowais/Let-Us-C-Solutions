/*
Create a structure called library to hold accession number, title of
the book, author name, price of the book, and flag indicating
whether book is issued or not. Write a menu-driven program that
implements the working of a library. The menu options should be:
1. Add book information
2. Display book information
3. List all books of given author
4. List the title of specified book
5. List the count of books in the library
6. List the books in the order of accession number
7. Exit
*/
#include<bits/stdc++.h>

using namespace std;
const int N=1e2;
struct library{
    int anum;
    string title;
    string author;
    int price;
    bool flag;
}book[N]={
    1, "Let Us C", "Yashavant Kanethkar", 258, 1,
	2, "Data Structure Through C", "Yashavant Kanethkar", 300, 1,
	3, "Let Us C++", "Yashavant Kanethkar", 220, 1,
	4, "Harry Potter : The Philosopher's Stone", "J. K. Rowling", 550, 0,
	5, "The Two Towers", "J. R. R. Tolkien", 560, 0,
	6, "The Hobbit", "J. R. R. Tolkien", 550, 1,
	7, "The Fellowship of the Ring", "J. R. R. Tolkien", 550, 0
    };
int count(){
	int j = 0;
	while (book[j].anum)
		j++;
	return j;
}
void display(library book[]){
     for(int i=0;i<count();i++){
         cout<<"Title  :"<<book[i].title<<endl;
     cout<<"Author :"<<book[i].author<<endl;
     cout<<"Price  :"<<book[i].price<<endl;
     book[i].flag==0?cout<<"Issued\n":cout<<"Not Isued\n";
     cout<<endl;
     }
}

void add(){
    int next = count();
    book[next].anum=next+1;
    cout<<"Title  :";   cin>>book[next].title;
    cout<<"Author :";   cin>>book[next].author;
    cout<<"Price  :";   cin>>book[next].price;
    book[next].flag=1;
    
}
void booklist(library book[]){
    string auth;
    cout<<"Enter authors name:";
    cin.ignore();
    getline(cin,auth);
    cout<<"\nBooks by"<<auth<<" are:\n";
    int i=0;
    while(book[i].anum){
    if(book[i].author==auth){
        cout<<book[i].title<<endl;   
    }
    i++;
    }
    
}
void specifiedbook(library book[]){
    int num;
    cout<<"Enter accession number:";
    cin>>num;
    int i=0;
    while(book[i].anum){
    if(book[i].anum==num){
        cout<<"Title  :"<<book[i].title<<endl;   
    }
    i++;
    }
    
}

int main(){
    
    x:
    cout<<"What you wanna do??\n";
    cout<<"1. Add book information\n";
    cout<<"2. Display book information\n";
    cout<<"3. List all books of given author\n";
    cout<<"4. List the title of specified book\n";
    cout<<"5. List the count of books in the library\n";
    cout<<"6. List the books in the order of accession number\n";
    cout<<"7. Exit\n";

    int ch;
    cin>>ch;
    switch(ch){
        case 1:add();break;
        case 2:display(book);    break;
        case 3:booklist(book);      break;
        case 4:specifiedbook(book);break;
        case 5:cout<<"\nNumberbooks in library"<<count();break;
        case 6:display(book);break;
        default: return 0;
    }
    goto x;
}