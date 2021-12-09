#include<stdio.h>
#include<conio.h>
main()
{
 int a,b,x;
 printf("\n\n Enter values of a and b");
 scanf("%d%d",&a,&b);
 printf("\n\n Before swapping");
 x=a;
 a=b;
 b=x;
 printf("\n\n After swapping");
 printf("\n\n a=%d",a);
 printf("\n\n b=%d",b);
 getch();
 return 0;
}
