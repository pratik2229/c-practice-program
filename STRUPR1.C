//wap to demonstrate strupr()
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
 char fname[30];
 clrscr();
 printf("\n\n Enter your first name ");
 gets(fname);
 printf("\n\n strig is: ");
 puts(strupr(fname));
 getch();
 return 0;
}