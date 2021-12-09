//wap to copy string using strcpy()
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
 char s1[30],s2[30];
 clrscr();
 printf("\n\n Enter first string ");
 gets(s1);
 printf("\n\n Enter second string ");
 gets(s2);
 printf("\n\n First string is: ");
 puts(s1);
 printf("\n\n Second string is: ");
 puts(s2);
 strcpy(s1,s2);
 printf("\n\n Copied string is: %s ",s1);
 getch();
 return 0;
}