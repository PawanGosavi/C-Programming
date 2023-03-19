#include<stdio.h>
#include<conio.h>

     void swap(int *a,int *b);		//function prototype

void main()
{
    int m=22,n=44;

    clrscr();

    printf("Values before swap m=%d & n=%d",m,n);
    swap(&m,&n);			//function calling by reference

    getch();
}

    void swap(int *a,int *b)		//function defination
{
    int tmp;
    tmp=*a;
    *a=*b;
    *b=tmp;
    printf("\n Values after swap a=%d & b=%d",*a,*b);
}
