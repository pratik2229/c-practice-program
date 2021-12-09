`//wap to print addition of two numbers without argument without return.

#include<stdio.h>
#include<conio.h>
void sum();
main()
{
 sum();
 getch();
 return 0;
}
 void sum()
 {
     int x,y;
     printf("\n\n Enter the value of x and y");
     scanf("%d%d",&x,&y);
     printf("\n\n Addition of two number is: %d",(x+y));
 }
