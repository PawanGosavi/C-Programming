#include<stdio.h>
#include<conio.h>

void main()

{
      int a,b,c,d,e,h,n,p,q,r,s,t;
      int z=100,y;
      float f;

clrscr();

//Example of Arithmetic and Assignment Operators
      
      a=10,b=5,c=7,d=8,e=3,h=5;

      a+=10;
      b-=2;
      c*=3;
      d/=2;
      f=(a+b)/2;

      printf("The value of f is:%f",f);

//Example of Relational and Logical Operators

     if(a<=b && c<d)
         {
           printf("\n Both conditions are true");
         }
     
     if(a>b || c>=d)
         {
           printf("\n May be one Condition is true");
         }

     if((a==b) && !(c<d))
         {
           printf(" \n May be true");
         }

//Examples of Bitwise Operators

     n=(e&h);
     p=(e|h);
     q=(e^h);
     r=(~e);
     s=e>>1;
     t=h<<1;

     printf("\n The value of n is %d",n);
     printf("\n The value of p is %d",p);
     printf("\n The value of q is %d",q);
     printf("\n The value of r is %d",r);
     printf("\n The value of s is %d",s);
     printf("\n The value of t is %d",t);

//Example of Conditional Operator

     y=(z>120?4:5);
     
     printf("\n The value of y is %d",y);

//Example of increment & Decrement operator

     y=y++;

     printf("\n The value of y is %d",y);
     
     y=y--;

     printf("\n The value of y is %d",y);

getch();

} 
