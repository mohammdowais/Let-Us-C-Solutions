//puzzle box//donno
#include<stdio.h>
#include<windows.h>
#include<conio.h>
void gotoxy ( short col, short row )
{
HANDLE h = GetStdHandle ( STD_OUTPUT_HANDLE ) ;
COORD position = { col, row } ;
SetConsoleCursorPosition ( h, position ) ;
}
int getkey( )
{
int ch ;
ch = getch( ) ;
if ( ch == 0 )
{
ch = getch( ) ;
return ch ;
}
return ch ;
}
void display()
{
    int i,j,a[4][4]={
        
            {1, 4, 15, 7},
            {8, 10, 2 ,11},
            {14, 3, 6 ,13},
            {12 ,9 ,5,},
            };

    for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
            {    
            printf("%d ",a[i][j]);
            }
        printf("\n");
        }
}
void main()
{
    display();
    getkey();
    gotoxy( );
}