#include<stdio.h>
#include<conio.h>
struct distance
{
int feet;
int inch;
};
main()
{
     struct distance s1,s2,sum1,sum2;
     clrscr();
     printf("\n\n First distence: ");
     printf("\n\n enter feet and inches  ");
     scanf("%d%d",&s1.feet,&s1.inch);
     printf("\n\n Second distence: ");
     printf("\n\n Enter feet and inches" );
     scanf("%d%d",&s2.feet,&s2.inch);
     sum1=s1.feet+s2.inch;
     sum2=s1.inch+s2.inch;
     printf("\n\n Addition of two distences is %d'%d",sum1,sum2);
     getch();
     return 0;
}
