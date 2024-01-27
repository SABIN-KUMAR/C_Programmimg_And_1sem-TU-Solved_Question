#include<stdio.h>
#include<conio.h>
struct student
{
char name[50];
int age;
int roll;
float marks[5];
};
int main()
{
struct student s;
int i,sum=0;
printf("Enter name : ");
//gets(s.name);
scanf("%s",s.name);
printf("Enter roll: ");
scanf("%d",&s.roll);
printf("Enter age: ");
scanf("%d",&s.age);
for(i=0;i<5;i++)
{
printf("Enter marks:");
scanf("%f",&s.marks[i]);
sum=sum+s.marks[i];
}
printf("Name=%s\nRoll=%d\nAge=%d\nSum=%d",s.name,s.roll,s.age,sum);
getch();
return 0;
}
