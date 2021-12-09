#include<stdio.h>
#include<conio.h>
#include"arithmat.h"
main()
{
   double a,b;
   clrscr();
   printf("\n\n Enter two values ");
   scanf("%lf%lf",&a,&b);
   printf("\n\n Addition of two numbers is: %lf",add(a,b));
   printf("\n\n Substraction of two numbers is: %lf",sub(a,b));
   printf("\n\n Multilpication of two numbers is: %lf",mul(a,b));
   printf("\n\n Division of two numbers is: %lf",div(a,b));
   printf("\n\n Modules of two numbers is: %lf",mod(a,b));
   getch();
   return 0;

}