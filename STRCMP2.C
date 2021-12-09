//wap to demonstrate without using strcmp()
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
 char s1[10],s2[10];
 int i,j;
 clrscr();
 printf("\n\n Enter your first string ");
 gets(s1);
 printf("\n\n Enter second string ");
 gets(s2);
 for(i=0;s1[i]!='\0';i++)
{
    for(j=0;s2[j]!='\0';j++)
    {
       s1[i]=s2[j];
    }
}
 if(s1[i]==s2[j])
       printf("\n\n Both string are same ");
 else
	printf("\n\n Both string are not same ");
 getch();
 return 0;
}
