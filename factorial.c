#include<stdio.h>
int main()
{
	int num,i;
	long fact=1;
	printf("Enter the number for factorial.");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("%d",fact);
	return 0;
}
