//wap to print addition of two numbers without argument with return.
//return----> it is nothing but a keyword in c language which is used to specify which type of value it provide us.
//return(expression)-----> it is an instruction which type of value it should provide us and where it is kept.

#include<stdio.h>
#include<conio.h>
int sum();
main()
{

   printf("\n\n Addition of two numbers is: %d",sum());
   getch();
   return 0;

}
 int sum()
 {
     int x,y,z;
     printf("\n\n Enter the value of x and y");
     scanf("%d%d",&x,&y);
     z=x+y;
     return(z);
 }
