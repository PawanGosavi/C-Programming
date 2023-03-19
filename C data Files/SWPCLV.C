#include<stdio.h>
#include<conio.h>

    void swap(int a,int b);		//function prototype

void main()
{
    int m=22,n=44;

    clrscr();

    printf("Values before swap m=%d & n=%d",m,n);
    swap(m,n);				//function calling
    
    getch();
}

    void swap(int a,int b)		//function def
{
    int tmp;
    tmp=a;
    a=b;
    b=tmp;
    printf("\n values after swap m=%d & n=%d",a,b);
}
