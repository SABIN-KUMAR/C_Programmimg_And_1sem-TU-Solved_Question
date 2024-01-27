/*List of all students using structure...*/
#include<stdio.h>
#include<conio.h>

struct student
{
char name[50];
int age;
int roll;
float marks[5];
int year,month,day;

};
int main()
{
struct student s;
int i,sum=0;
float avg;
printf("Enter name : ");
//gets(s.name);
scanf("%s",s.name);
printf("Enter roll: ");
scanf("%d",&s.roll);
printf("Enter age: ");
scanf("%d",&s.age);
printf("Date of brith:");

scanf("%d-%d-%d",&s.year,&s.month,&s.day);
for(i=0;i<5;i++)
{
printf("Enter marks:");
scanf("%f",&s.marks[i]);
sum=sum+s.marks[i];
}
avg=sum/5;
printf("Name=%s\nRoll=%d\nAge=%d\nDate Of Birth=%d-%d-%d\nSum=%d\nAverage=%f",s.name,s.roll,s.age,s.year,s.month,s.day,sum,avg);
getch();
return 0;
}

