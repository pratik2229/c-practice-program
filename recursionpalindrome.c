#include <stdio.h>
#include<conio.h>
int palli(int);
main()
{
  int n,ans;
  printf("\n\n Enter any number ");
  scanf("%d",&n);

  if(palli(n)==n)
   {
       printf("%d is pallindrome number",n);
   }
   else
   {
       printf("%d is not a palindrome number",n);
   }

getch();
return 0;
}
int palli(int n)
{
  int p,sum=0;

    if(n==0)
        return p;
    else

        return(((sum*10)+n%10)+palli(n/10));
}
