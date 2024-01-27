#include<stdio.h>
int main()
{
	int year;
	printf("Enter the year:");
	scanf("%d",&year);
	
		if(year%100==0 && year%400==0)
		{
			printf("the year leap year",year);
			
		}
	
	else
	{
		printf("the year is not leap year");
	}
	
	return 0;
	
}
