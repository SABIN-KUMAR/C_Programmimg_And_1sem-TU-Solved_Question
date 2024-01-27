#include<stdio.h>
#include<conio.h>
struct student
{
char name[50];
int rollno;
float marks;
}s;
int main()
{
printf("Enter name of first student : ");
gets(s.name);
printf("\nEnter roll no of first student : ");
scanf("%d",&s.rollno);
printf("\nEnter marks of first student : ");
scanf("%f", &s.marks);
printf("Name=%s\tRoll=%d\tMarks=%f\n", s.name, s.rollno, s.marks);
getch();
return 0;
}
