#include<stdio.h>
#include<conio.h>
main()
{
   int n=50,*p;
   clrscr();
   p=&n;
   printf("\n\n The address of n is %u ",&n);
   printf("\n\n The value of p is %u ",p);
   printf("\n\n The value of p is %d ",*p);
   getch();
   return 0;
}

