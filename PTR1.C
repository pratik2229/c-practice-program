#include<stdio.h>
#include<conio.h>
main()
{
   int x,*pt;
   clrscr();
   printf("\n\n Enter a value ");
   scanf("%d",&x);
   pt=&x;
   printf("\n\n Value of x is %d \n\n Address of x is %u \n\n Address of pt is %u \n\n Value of pt is %d \n\n Value point by pt is %d",x,x,pt,pt,*pt);
   getch();
   return 0;
}