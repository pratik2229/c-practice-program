#include <stdio.h>
#include<conio.h>
int sum(int);
main()
{
  int n;
  printf("\n\n Enter any number ");
  scanf("%d",&n);

  printf("\n\n addition of %d digits is %d",n,sum(n));


getch();
return 0;
}
int sum(int n)
{
    if(n==0)
        return 0;
    else
        return((n%10)+ sum(n/10));
}

