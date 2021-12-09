//wap to demonstrate strrev()
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
 char fname[30];
 clrscr();
 printf("\n\n Enter your first name ");
 gets(fname);
 puts(strrev(fname));
 getch();
 return 0;
}