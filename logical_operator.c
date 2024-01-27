/*Write a program to find the output of logical operators*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int num1=11,num2=22,num3=33;
	//int num1,num2,num3;
	printf("Taking three numbers to check the relation betweeen logical operators:\n");
	//scanf("%d %d %d ",&num1,&num2,&num3);
	printf("num1=11,num2=22,num3=11");
	printf("\n1.num1<num2 && num1<num3-%d",num1<num2 && num1<num3);
	printf("\n2.num1>num2 && num2<num3-%d",num1>num2 && num2<num3);
	printf("\n3.num1<num2 || num1<num3-%d",num1<num2 || num1<num3);
	printf("\n4.num1>num2 || num2<num3-%d",num1>num2 || num2<num3);
	printf("\n5.num1>num3 || num2>num3-%d",num1>num3 || num2>num3);
	getch();
	return 0;
}
