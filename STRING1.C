#include<stdio.h>
#include<conio.h>
main()
{
 char fname[30];
 int len;
 clrscr();
 printf("\n\n Enter your first name ");
 gets(fname);
 len=strlen(fname);
 printf("\n\n student first name is ");
 puts(fname);
 printf("\n\n Total no of  character in the string %d",len );
 getch();
 return 0;
}