#include<stdio.h>
#include<conio.h>
#include<math.h>
 
void main()
{
   float radius, area;

   clrscr();
 
   printf("Enter the radius of circle\n");
 
   scanf("%f",&radius);
 
   /* M_PI (pi) is a constant in math.h header file */
 
   area = M_PI*radius*radius;  
 
   printf("Area of circle = %.2f\n", area);
 
   getch();
}