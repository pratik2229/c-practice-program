//wap to print length of string without using strlen()
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
 char fname[30];
 int i;
 clrscr();
 printf("\n\n Enter your first name ");
 gets(fname);
 for(i=0;fname[i]!='\0';i++);
 printf("\n\n student first name is ");
 puts(fname);
 printf("\n\n Total no of  character in the string %d",i);
 getch();
 return 0;
}