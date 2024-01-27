/*Program to find average of number entered by user.*/
#include<stdio.h>
#include<conio.h>
int main()
{
int array[10],i,sum=0;
float average;
for(i=0;i<10;i++)
{
printf("Enter number:");
scanf("%d",&array[i]);
sum=sum+array[i];
}

//Compiled By : Deepak Kr. Singh, Pradip Khanal

average=sum/10;
printf("Average=%f",average);
getch();
return 0;
}
