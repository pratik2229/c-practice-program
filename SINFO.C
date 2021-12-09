#include<stdio.h>
#include<conio.h>
struct student
{
char name[10];
char address[10];
char college[10];
int mobile;
float per;
};
main()
{
     struct student s;
     clrscr();
     printf("\n\n Enter the name of a student ");
     scanf("%d",&s.name);
     printf("\n\n Enter the age of a student ");
     scanf("%d",&s.age);
     printf("\n\n Enter the address of a student ");
     scanf("%s",&s.address);
     printf("\n\n Enter the college of a student ");
     scanf("%s",&s.college);
     printf("\n\n Enter the mobile no. of a student ");
     scanf("%d",&s.mobile);
     printf("\n\n Enter the percent of a student ");
     scanf("%f",&s.per);


     printf("\n\n Name : %s",s.name);
     printf("\n\n Age : %d",s.age);
     printf("\n\n percentage : %f",s.address);
     printf("\n\n college : %s",s.college);
     printf("\n\n Mobile No.: %d",s.mobile);
     printf("\n\n percentage : %f",s.per);
     getch();
     return 0;
}
