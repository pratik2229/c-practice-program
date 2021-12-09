#include <stdio.h>
#include<conio.h>
int armstrong(int);
main()
{
  int n;
  printf("\n\n Enter any number ");
  scanf("%d",&n);

  if(armstrong(n)==n)
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
int armstrong(int n)
{
    if(n==0)
        return 0;
    else
        return((pow(n%10,3))+ armstrong(n/10));
}
