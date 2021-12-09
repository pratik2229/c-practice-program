#include<stdio.h>
#include<conio.h>
main()
{
   char name[10];
   clrscr();
   printf("\n\n Enter your first name");
   scanf("%s",&name);
   printf("\n\n Your name is %s",name);
   getch();
   return 0;
}