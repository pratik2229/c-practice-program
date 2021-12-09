//wap to print percentage of a student without argument without return.

#include<stdio.h>
#include<conio.h>
double percent();
main()
{
 percent();
 getch();
 return 0;
}
 double percent()
 {
     double ob,tm,per;
     printf("\n\n Enter marks of a student");
     scanf("%lf%lf",&ob,&tm);
     per=((ob/tm)*100);
     printf("\n\n Percentage of a student is: %lf",per);
 }
