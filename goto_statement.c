/*Write a program to ask two numbers.Display messages "Either number is negative" if either number is negative;o
otherwise display messages"Both numbers are positive"*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int num1,num2;
	printf("Enter the first number:");
	scanf("%d",&num1);
	if(num1<0)
	    goto negative;
    printf("Enter the second number:");
    scanf("%d",&num2);
    if(num2<0)
        goto negative;
    printf("The both number are positive:");
    getch();
    return 0;
    negative:
    	printf("Either number is negative:");
    getch();
    return 0;	
}
