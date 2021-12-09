#include <stdio.h>
#include<conio.h>
int  palindrome(int);
main()
{
  int n,ans;
  printf("\n\n Enter any number ");
  scanf("%d",&n);

   ans= palindrome(n);
   if(ans==n)
   {
       printf("%d is palindrome number",n);
   }
   else
   {
       printf("%d is not a palindrome number",n);
   }

getch();
return 0;
}
int  palindrome(int x)
{
 int p,sum=0;
   while(x>0)
  {
     p = x%10;
     sum = (sum*10) + p ;
     x = x/10;
  }
  return(sum);
}
