/*2. Passing by reference
It uses the concept of pointer to pass structure as an argument. The address location of the
structure is passed to the called function. The function can access indirectly the entire structure
and work on it. This method is more efficient than the first one. Structure pointer operator is used
to access the member.
Example:*/
#include<stdio.h>
#include<conio.h>
struct student
{
char name[50];
int roll;
float marks;
} ;
void display(struct student *);
int main()
{
struct student s;
printf("Enter name of student:");
scanf("%s",s.name);
printf("Enter roll number:");
scanf("%d",&s.roll);
printf("Enter marks:");
scanf("%f",&s.marks);
display(&s);
getch();
return 0;
}
void display(struct student *st)
{
printf("Name=%s\nRoll=%d\nMarks=%f",st->name,st->roll,st->marks);
}
