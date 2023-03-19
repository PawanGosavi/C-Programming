#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,*p1,*p2,x,y,z;
    
    clrscr();

    a=12;
    b=4;

    p1=&a;
    p2=&b;

    x=*p1**p2-6;
    y=4*-*p2 / *p1+10;

    printf("Address of a=%u \n",p1);
    printf("Address of b=%u \n",p2);

    printf("\n");

    printf("a=%d,b=%d\n",a,b);
    printf("x=%d,y=%d\n",x,y);

    getch();
}
