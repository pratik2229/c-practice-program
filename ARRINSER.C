#include<stdio.h>
#include<conio.h>
 main()
{
  int i,x[100],n,pos,num;
  clrscr();
  printf("\n\n Enter no. of elements ");
  scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     scanf("%d",&x[i]);
   }
   printf("\n\n Entered elements are: ");
   for(i=0;i<n;i++)
   {
     printf("x[%d] = %d\n",i,x[i]);
   }
   printf("\n\n Enter the number you want insert in an array ");
   scanf("%d",&num);
   printf("\n\n Enter the position where you want to insert element  ");
   scanf("%d",&pos);
   for(i=n-1;i>=pos;i--)
   {
     x[i+1]=x[i];
   }
   n=n+1;
   x[pos]=num;
   printf("\n\n After inserting new element\n ");
   for(i=0;i<n;i++)
   {
    printf("\n x[%d] = %d\n",i,x[i]);
   }
  getch();
  return 0;
}
