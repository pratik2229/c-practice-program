#include<stdio.h>
#include<conio.h>
int a,b;
main()
{
   clrscr();
   printf("\n\n Enter values of a and b  ");
   scanf("%d%d",&a,&b);

    if(a>b)
   {
      printf("\n\n %d is greater",a);
   }
   else
   {
      printf("\n\n %d is greater",b);
   }
   getch();
   return 0;
}
