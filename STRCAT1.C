//wap to join two strings using strcat()
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
 strcat(s1,s2);
 printf("\n\n Joined string is:%s ",s1);
// puts(s1);
 getch();
 return 0;
}