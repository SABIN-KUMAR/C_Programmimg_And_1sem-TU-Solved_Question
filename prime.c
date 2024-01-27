#include<stdio.h>
int main()
{
	int num,i;
	int  prime=1;
	printf("Enter the numbers:");
	scanf("%d",&num);
	for(i=2;i*i<=num;i++)
	{
		if(num%i==0)
		{
			prime=0;
		}
	}
	if(prime)
	{
		printf("The number %d is prime number.",num);
	}
	else
	{
		printf("The number %d is not prime number.",num);
	}
	
	return 0;
}
