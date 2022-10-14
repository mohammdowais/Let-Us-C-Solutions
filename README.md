# Solutions to the excersise problems in <a href="https://www.amazon.in/Let-Us-16TH-Yashavant-Kanetkar/dp/9387284492/ref=sr_1_3?crid=2RPYOH2VHW2ZX&keywords=let+us+c&qid=1665759415&qu=eyJxc2MiOiIyLjU3IiwicXNhIjoiMS45OSIsInFzcCI6IjEuNzgifQ%3D%3D&s=books&sprefix=let+us+%2Cstripbooks%2C579&sr=1-3">'Let Us C'</a>
## How to run a C program
- Create a c file (filename.c example hello.c)
- Write some code 
```
    #include<stdio.h>

    int main()
    {
        printf("Hello, world");
        return 0;
    }
```
- Execute in Terminal
```
    $ gcc -o hello hello.c
    $./hello
```
    syntax: $ gcc -o <filename(whatever you can give)> filename.c
    example $ gcc -o hii hello.c
            $ ./hii

