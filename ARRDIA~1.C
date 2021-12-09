#include<stdio.h>
#include<conio.h>
 main()
{
  int x[3][3],i,j;
  clrscr();
   printf("\n Enter 9 elements  in an array");
   for(i=0;i<3;i++)
   {
      for(j=0;j<3;j++)
     {
        scanf("%d",&x[i][j]);
     }
   }
   printf("\n\n Array elements in an matrix form is: \t");
    for(i=0;i<3;i++)
   {
      for(j=0;j<3;j++)
    {
       printf(" %d ",x[i][j]);
    }
   }

   for(i=0;i<3;i++)
   {
      for(j=0;j<3;j++)
    {
       if (i==j)
     {
       printf("\n\n diagonal elements is %d ",x[i][j]);
     }
    }
   }


  getch();
  return 0;
}
