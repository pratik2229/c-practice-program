//wap to demonstrate strcmp()
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
 char s1[10],s2[10];
 clrscr();
 printf("\n\n Enter your first string ");
 gets(s1);
 printf("\n\n Enter second string ");
 gets(s2);
 if(strcmp(s1,s2)==0)
       printf("\n\n Both string are same ");
 else
	printf("\n\n Both string are not same ");
 getch();
 return 0;
}
}