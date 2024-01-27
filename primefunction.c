#include<stdio.h>
int main()
{
	int num,result;
	printf("Enter the number:");
	scanf("%d",&num);
	result=prime(num);
	if(result==2)
	{
		printf("\n %d is a prime number.",num);
	}
	else
	{
		printf("\n %d is composite number.",num);
	}
	return 0;
}
void prime(int n)
{
	int i;
	int count=0;
	printf("%d is a number from the main function.",n);
	for(i=0;i<=n;i++)
	{
		if(n%i==0)
		{
			count=count+1;	
		}	
	}
	
}

