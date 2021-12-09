#include<stdio.h>
#include<conio.h>
int swap(int *, int *);
main()
{
   int a,b;
   clrscr();
   printf("\n\n Enter values of a and b");
   scanf("%d%d",&a,&b);
   swap(&a,&b);
   getch();
   return 0;
}
  int swap(int *a, int *b)
  {
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
    printf("\n\n a=%d  b=%d",*a,*b);
  }
