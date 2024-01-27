#include<stdio.h>
int main()
{
	int age;
	printf("Enter the age of person:");
	scanf("%d",&age);
	if(age>=18)
	{
	  printf("The person is eligible for voting.");
	}
	else
	{
		printf("Not eligible for voting");
	}
	
	return 0;
}
