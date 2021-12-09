#include<stdio.h>
#include<conio.h>
 main()
{
  int x[3][2],i,j;
   printf("\n Enter 6 elements  in an array");
   for(i=0;i<3;i++)
   {
      for(j=0;j<2;j++)
     {
        scanf("%d",&x[i][j]);
     }
   }
   printf("\n\n Array elements in an matrix form is: \t");
    for(i=0;i<3;i++)
   {
      for(j=0;j<2;j++)
    {
       printf(" %d ",x[i][j]);
    }
    printf("\n");
   }
  getch();
  return 0;
}
