#include<stdio.h>
#include<conio.h>
main()
{
   char ch;
   clrscr();
   printf("\n\n Enter any character  ");
   scanf("%c",&ch);
   switch(ch)
   {
     case 'A': printf("\n\n Exelent");
	 break;
     case 'B': printf("\n\n Keep it up");
	 break;
     case 'C': printf("\n\n Well done");
	 break;
     case 'D': printf("\n\n You passed");
	 break;
     case 'F': printf("\n\n  Better luck next time");
	 break;
     default: printf("\n\n Invalid");
   }

   getch();
   return 0;

}