#include<stdio.h>
#include<conio.h>
char prime(int);
int main()
{
	int num;
	char r;
	printf("Enter the number:");
	scanf("%d",&num);
	r=prime(num);
	if(r=='T')
	{
		printf("\n %d is a prime number",num);
	}
	else
	{
		printf("\n %d is not a prime number",num);
	}
	return 0;
}
 char prime(int n)
{
	int i,count=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count=count+1;
		}
	}
	if(count==2)
	{
		return 'T';
	}
	else
	{
		return 'F';
	}
getch();
}

