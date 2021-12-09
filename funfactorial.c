#include<stdio.h>
#include<conio.h>
int fact(int);
main()
{
 int n;
 printf("\n\n mEnter value of n(<8)");
 scanf("%d",&n);
 printf("\n\n Factorial of %d is %d",n,fact(n));
 getch();
 return 0;
}
int fact(int n)
{
  if(n==0)
    return 1;
  else
    return(n*fact(n-1));

}
