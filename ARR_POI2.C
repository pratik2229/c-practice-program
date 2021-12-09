#include<stdio.h>
#include<conio.h>
void main()
{
   int x[5],i,sum=0,*p;
   clrscr();
   p=x;
   printf("\n\nEnter 5 Elements in an array:");
   for(i=0;i<5;i++)
   {
      scanf("%d",(p+i));
   }
   printf("\n\nThe 5 Elements in an array are:\n");
   for(i=0;i<5;i++)
   {
      printf(" %d ",*(p+i));
      sum = sum + *(p+i);
   }
   printf("\n\nSum of array element is %d",sum);
   getch();
}