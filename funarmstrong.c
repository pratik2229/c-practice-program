#include <stdio.h>
#include<conio.h>
int armstrong(int);
main()
{
  int n,ans;
  printf("\n\n Enter any number ");
  scanf("%d",&n);

   ans=armstrong(n);
   if(ans==n)
   {
       printf("%d is armstrong number",n);
   }
   else
   {
       printf("%d is not a armstrong number",n);
   }

getch();
return 0;
}
int armstrong(int x)
{
 int p,sum=0;
   while(x>0)
  {
     p = x%10;
     sum = sum + p * p * p;
     x = x/10;
  }
  return(sum);
}
