/*Write a program that extracts part of the given string from the
specified position. For example, if the sting is "Working with strings
is fun", then if from position 4, 4 characters are to be extracted
then the program should return string as "king". If the number of
characters to be extracted is 0 then the program should extract
entire string from the specified position*/
#include<stdio.h>
#include<string.h>
void main()
{
    char str[]="Working with strings is fun";
    int i,j=0,l,n;
    puts(str);
    printf("\nFrom which position would you like to extract string?");
    scanf("%d",&i);
    i--;
    printf("\nHow many characters do you want to extract");
    scanf("%d",&n);
    if(n==0)
    puts(str+i);
    else
    while(j<n){
        printf("%c",str[i]);
        j++;
        i++;
    }
    
    
}