//wap to joined two string without using strcat()
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
   char s1[30],s2[30];
   int i,j;
   clrscr();
   printf("\n\n Enter first string ");
   gets(s1);
   printf("\n\n Enter second string ");
   gets(s2);
   i=strlen(s1);
   for(j=0;s2[j]!='\0';j++,i++)
   {
     s1[i]=s2[j];
   }
   printf("\n\n joined string is: %s",s1);
   getch();
   return 0;
}