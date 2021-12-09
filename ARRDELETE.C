#include<stdio.h>
#include<conio.h>
 main()
{
  int i,x[100],n,pos;
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
   printf("\n\n Enter the position from which element has to be deleted ");
   scanf("%d",&pos);
   for(i=pos;i<n;i++)
   {
     x[i]=x[i+1];
   }
   n=n-1;
   printf("\n\n After deletion ");
   for(i=0;i<n;i++)
   {
    printf("\n x[%d] = %d\n",i,x[i]);
   }
  getch();
  return 0;
}
