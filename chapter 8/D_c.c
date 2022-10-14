/*Write a general-purpose function to convert any given year into its
Roman equivalent. Use these Roman equivalents for decimal
numbers: 1 – I, 5 – V, 10 – X, 50 – L, 100 – C, 500 – D, 1000 – M.
Example:
Roman equivalent of 1988 is mdcccclxxxviii.
Roman equivalent of 1525 is mdxxv.*/
#include<stdio.h>
void roman1(int);
void roman2(int);
void main()
{
    int deci;
    printf("Enter any year:");
    scanf("%d",&deci);
    roman2(deci);
    getch();
}
void roman1(int x)
{
    while(x)
    {
        if(x>=1000)
        {
            printf("M");
            x=x-1000;
        }
        else if(x>=500)
        {
            printf("D");
            x=x-500;
        }
        else if(x>=100)
        {
            printf("C");
            x=x-100;
        }
        else if(x>=50)
        {
            printf("L");
            x=x-50;
        }
        else if(x>=10)
        {
            printf("X");
            x=x-10;
        }
        else if(x>=5)
        {
            printf("V");
            x=x-5;
        }
        else if(x>=1)
        {
            printf("I");
            x=x-1;
        }
    }


}
//above code is simple but not valid for years like 2009 2004 etc
void roman2(int n)
{
    char roman[] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
int decimal[] = {1, 5, 10, 50, 100, 500, 1000};


	int  beg, end, d;

	/*//input
	printf("Enter n: ");
	scanf("%d", &n);*/

	if(n<0){
		printf("You entered a negative number!\n");
	}else if(n == 0){
		printf("You entered Zero or Nulla!\n");
	}else if(n >= 4000){
		printf("This code has a limit from 1 to 3999.\n");
	}else{

		while(n>0){
			//find limit
			for(beg = 6; beg > 0; beg--){
				if(n >= decimal[beg]){
					break;
				}
			}

			for(end = 0; end < 7; end++){
				if(n <= decimal[end]){
					break;
				}
			}

			//get left most digit in n
			d = n;
			while(d != 0){
				d /= 10;
				if(d < 10){
					break;
				}
			}

			//print roman numeral
			if(n<10 && n==4){
				printf("%c%c", roman[beg], roman[end]);
				n=0;
			}else if(n>10 && d==4){
				printf("%c%c", roman[beg], roman[end]);
				n -= (decimal[end] - decimal[beg]);
			}else if(n<10 && n==9){
				printf("%c%c", roman[beg - 1], roman[end]);
				n=0;
			}else if(n>10 && d==9){
				printf("%c%c", roman[beg - 1], roman[end]);
				n -= (decimal[end] - decimal[beg - 1]);
			}else{
				printf("%c", roman[beg]);
				n -= decimal[beg];
			}
		}
	}
	
}
//not undersdant this one completely