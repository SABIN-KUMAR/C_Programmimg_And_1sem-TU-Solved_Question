#include<stdio.h>
#include<conio.h>
struct student
{
char name[50];
int roll;
float marks[5];
}s[20];
int main()
{
struct student s[2];
int i,j,sum[2];
for(i=0;i<2;i++)
{
fflush(stdin);
printf("Enter name:");
scanf("%s",s[i].name);
printf("Enter roll:");
scanf("%d",&s[i].roll);
sum[i]=0;
//total[i]=0;
for(j=0;j<5;j++)
{
printf("Enter marks[%d]=",j+1);
scanf("%f",&s[i].marks[j]);
sum[i]=sum[i]+s[i].marks[j];
//total[i]=sum[i];
}
}
for(i=0;i<2;i++)
{
printf("Name=%s\nRoll=%d\nSum=%f\n",s[i].name,s[i].roll,sum[i]);
}
getch();
return 0;
}
