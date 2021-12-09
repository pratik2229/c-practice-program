#include<stdio.h>
#include<conio.h>
struct employee
{
char name[10];
float sal;
};
main()
{
     struct employee p;
     clrscr();
     printf("\n\n enter the name and salary of a employee ");
     scanf("%d%f",&p.name,&p.sal);
     printf("\n\n Age of student: %c",p.name);
     printf("\n\n Percentage of student is: %f",p.sal);
     getch();
     return 0;
}
