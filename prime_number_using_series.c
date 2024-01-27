#include<stdio.h>
int main()
{
	int num,i;
	printf("Enter the number.");
	scanf("%d",&num);
	for(i=2;i<num;i++)
	{
		if(num%2==0)
		{
			printf("\Not prime.");
			break;
		}
	}
	if(i==num)
	{
		printf("\nprime number.");
	}
	return 0;
}
