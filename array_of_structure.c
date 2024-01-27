#include<stdio.h>
#include<conio.h>
struct student
{
char name[50];
int rollno;
int age;
float marks;
};
int main()
{
struct student s[2];
int i;
for(i=0;i<2;i++)
{
fflush(stdin);
printf("Enter name: ");
gets(s[i].name);
fflush(stdin);
printf("Enter rollno: ");
scanf("%d",&s[i].rollno);
fflush(stdin);
printf("Enter age: ");
scanf("%d",&s[i].age);
fflush(stdin);
printf("Enter marks:");
scanf("%f",&s[i].marks);
}
for(i=0;i<2;i++)
{
printf("Name=%s\nRoll=%d\nAge=%d\nMarks=%f",s[i].name,s[i].rollno,s[i].age,s[i].marks);
}
getch();
return 0;
}
