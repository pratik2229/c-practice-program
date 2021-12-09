//Wap to swap two numbers using function and without using third variable with arguments without return.
#include<stdio.h>
#include<conio.h>
int swap();
main()
{
   int a,b;
   printf("\n\n Enter values of a and b");
   scanf("%d%d",&a,&b);
   swap(a,b);
   getch();
   return 0;
}
  int swap(int a, int b)
  {
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n\n a=%d  b=%d",a,b);
  }
