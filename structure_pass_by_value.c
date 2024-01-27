/*1. Pass by value
It involves passing a copy of the entire structure to the called function. Any changes to the
structure members within the function is not reflected in the original structure (in the calling
function). Therefore, it becomes necessary for the function to return entire structure back to the
calling function.
Example:*/
#include<stdio.h>
#include<conio.h>
struct student
{
char name[50];
int roll;
int age;
float marks;
} ;
void display(struct student);
int main()
{
struct student s1;
printf("Enter name of student:");
gets(s1.name);
printf("Enter roll number:");
scanf("%d",&s1.roll);
printf("Enter marks:");
scanf("%f",&s1.marks);
printf("Enter age:");
scanf("%d",&s1.age);
display(s1);
getch();
return 0;
}
void display(struct student st)
{
printf("Name=%s\nRoll=%d\nMarks=%f\nAge=%d",st.name,st.roll,st.marks,st.age);
//return display;
}
