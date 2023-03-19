#include<stdio.h>
#include<conio.h>

void main()

{

//Examples of If statement

     int a,b,c;

     clrscr();

     printf("Enter three numbers:\t");

     scanf("%d%d%d",&a,&b,&c);

     if(((a*a)==(b*b)+(c*c))||((b*b)==(c*c)+(a*a))||((c*c)==(a*a)+(b*b)))
          {
              printf("\nNumbers are Pythagorean triplates");
          }
     else
          {
              printf("\nNumbers are not pythagorean triplates");
          }

getch();

}
