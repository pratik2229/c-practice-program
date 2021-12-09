#include<stdio.h>
#include<conio.h>
void main()
{

   int a=10,b=20,c=30,*p[3],i;
   clrscr();
   p[0]=&a;
   p[1]=&b;
   p[2]=&b;
   for(i=0;i<3;i++)
   {
     printf("\n\n *p[%d]=%d ",i,*p[i]);
   }
      getch();
}