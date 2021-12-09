#include<stdio.h>
#include<conio.h>
struct student
{
int age;
float per;
};
main()
{
     struct student s;
     clrscr();
     printf("\n\n enter the age and percent of student ");
     scanf("%d%f",&s.age,&s.per);
     printf("\n\n Age of student: %d",s.age);
     printf("\n\n Percentage of student is: %f",s.per);
     getch();
     return 0;
}