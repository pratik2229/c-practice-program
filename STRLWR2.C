//wap to demonstrate string without using strlwr()
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
   char s[30];
   int i;
   clrscr();
   printf("\n\n Enter first string ");
   gets(s);
   i=0;
   while(s[i]!='/0')
   {
     if(s[i] > 64 && s[i] < 91)
     {
       s[i] =s[i]+32;
     }
     i++;
   }
    printf("\n\n converted string is: %s",s);
    getch();
    return 0;
}