#include<stdio.h>
#include<conio.h>

void main()
{
    int *p,sum,i;
    int x[5]={5,9,6,3,7};

    clrscr();

    i=0;
    p=x;

    printf("Element value address \n");

    while(i<5)
    {
        printf("x[%d] %d %u \n",i,*p,p);
        sum=sum+*p;		//Accessing array element
        i++;
        p++;
    }

    printf("\n sum=%d \n",sum);
    printf("\n &x[0]=%u \n",&x[0]);
    printf("\n p=%u \n",p);

    getch();
}
