#include<stdio.h>
#include<conio.h>
main()
{
int n,i,f=1;
clrscr();
printf("\n\n enter any number ");
scanf("%d",&n);
for(i=1;i<=n;i++);
{
  f=f*i;
}
printf("\n\n factorial of %d is: %d",n,f);
getch();
return 0;
}
