/*Write a program that uses an array of pointers to strings str[ ].
Receive two strings str1 and str2 and check if str1 is embedded in
any of the strings in str[ ]. If str1 is found, then replace it with str2.
char *str[ ] = {
"We will teach you how to...",
"Move a mountain",
"Level a building",
"Erase the past",
"Make a million",
"...all through C!"
} ;
For example if str1 contains "mountain" and str2 contains "car",
then the second string in str should get changed to "Move a car".*/
#include<stdio.h>
#include<string.h>
void display(char *str[])
{
    for(int i=0;i<6;i++){
    printf("%s\n",str[i]);
    
    }
}
void main()
{
    char *str[ ] = {
                    "We will teach you how to...",
                    "Move a mountain",
                    "Level a building",
                    "Erase the past",
                    "Make a million",
                    "...all through C!"};
    char str1[10],str2[10  ];                    
    
    display(str);
    printf("\nWhich letter you want to change??");;
    scanf("%s",str1);
    printf("\nWhat do you wanna write insted of %s ?",str1);;
    scanf("%s",str2);
    
    
}