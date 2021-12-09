#include<stdio.h>
#include<conio.h>
struct employee
{
char name[10];
float sal;
};
main()
{
     struct employee p={"pratik",50000}; //structure initialisation
     clrscr();
     printf("\n\n name of employee: %s",p.name);
     printf("\n\n salary of the employee is: %f",p.sal);
     getch();
     return 0;
}
