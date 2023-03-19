#include<stdio.h>
#include<conio.h>

	float square(float x);	//function prototype

void main()
{	
    float m,n;

    clrscr();

    printf("Enter number =");
    scanf("%f",&m);

    n=square(m);		//function calling

    printf("\n square of given number %f is %f",m,n);

    getch();
}

	float square(float x)	//function defination
{
    float p;
    p=x*x;
    return p;
}
