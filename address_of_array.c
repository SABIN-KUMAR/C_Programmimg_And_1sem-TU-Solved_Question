/* Program to display the address of each block of allocated memory space for a float
type of array. (address may vary from one computer to another)*/
#include<stdio.h>
#include<conio.h>
int main()
{
float marks[5];
int i;
for(i=0;i<5;i++)
{
printf("Address of %d block is %d\n",i,&marks[i]);
}
getch();
return 0;
}
