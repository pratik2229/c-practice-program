#include<stdio.h>
#include<conio.h>
 main()
{
  int i,x[5],sum=0;
   printf("\n Enter 5 elements  in an array");
   for(i=0;i<5;i++)
   {
     scanf("%d",&x[i]);
   }
   printf("\n\n The 5 elements in an array are: \t");
    for(i=0;i<5;i++)
   {
     printf("%d",x[i]);
   }
    for(i=0;i<5;i++)
   {
     sum=sum+x[i];
   }
   printf("\n\n Sum of array elements is  %d ",sum);
  getch();
  return 0;
}
