//Wap to swap two numbers using function and with using third variable without arguments without return.

#include<stdio.h>
#include<conio.h>
void swap();
main()
{
  swap();
  getch();
  return 0;
}
  void swap()
{
  int a,b,x;
  printf("\n\n Enter values of a and b  ");
  scanf("%d%d",&a,&b);
  x=a;
  a=b;
  b=x;
  printf("\n\n a=%d",a);
  printf("\n\n b=%d",b);
}
