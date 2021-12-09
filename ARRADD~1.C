#include<stdio.h>
#include<conio.h>
 main()
{
   int rs,cs,n,a[100][100],i,j,b[100][100],c[100][100];
   clrscr();
   printf("\n\n Enter row and column size");
   scanf("%d%d",&rs,&cs);
   n=rs*cs;
   if(rs==cs)
   {
      printf("\nEnter %d elements in an A Matrix:",n);
      for(i=0;i<rs;i++)
      {
	for(j=0;j<cs;j++)
	{
	  scanf("%d",&a[i][j]);
	}
      }
      printf("\n The %d elements in an A Matrix:\n",n);
      for(i=0;i<rs;i++)
      {
	for(j=0;j<cs;j++)
	{
	  printf(" %d ",a[i][j]);
	}
	printf("\n");
      }
      printf("\nEnter %d elements in an B Matrix:",n);
      for(i=0;i<rs;i++)
      {
	for(j=0;j<cs;j++)
	{
	  scanf("%d",&b[i][j]);
	}
      }
      printf("\n The %d elements in an B Matrix:\n",n);
      for(i=0;i<rs;i++)
      {
	for(j=0;j<cs;j++)
	{
	  printf(" %d ",b[i][j]);
	}
	printf("\n");
      }
      // Addition of matrix logic
      for(i=0;i<rs;i++)
      {
	for(j=0;j<cs;j++)
	{
	  c[i][j]=a[i][j]+b[i][j];
	}
      }
      printf("\n The %d elements in an C Matrix(Addition):\n",n);
      for(i=0;i<rs;i++)
      {
	for(j=0;j<cs;j++)
	{
	  printf(" %d ",c[i][j]);
	}
	printf("\n");
      }

   }
   else
   {
       printf("\n\nPlease input same row size and column size!");
   }

 getch();
  return 0;
}