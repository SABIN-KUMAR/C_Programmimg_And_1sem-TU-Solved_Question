#include<stdio.h>
void prime_num(int);
int main()
{
	int num,result_1;
	printf("Enter the number from the user:");
	scanf("%d",&num);
	result_1=prime_num(num);
	printf("The number is prime..",result_1);
	printf("The number is composite..",result_2);
	getch();
	return 0;
	
}
void prime_num(int x)
{
	int prime;
	int composite_num;
	int i,count=0;
	for(i=1;i<=prime;i++)
	{
		if(prime%i==0)
		{
			count=count+1;
		}
		else
		{
			composite_num=i;	
		}
	}

}
