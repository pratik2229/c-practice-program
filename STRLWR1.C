//wap to demonstrate strlwr()
#include<stdio.h>
#include<conio.h>
main()
{
 char fname[30];
 clrscr();
 printf("\n\n Enter your first name ");
 gets(fname);
 printf("\n\n strig is: ");
 puts(strlwr(fname));
 getch();
 return 0;
}