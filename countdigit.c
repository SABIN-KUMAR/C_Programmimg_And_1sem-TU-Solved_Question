/*counting the digits of number given by user..*/
#include<stdio.h>
int number_digit(int);
int main()
{
	int num,r;
	printf("Enter the number:");
	scanf("%d",&num);
	r=number_digit(num);
	printf("\n%d has %d digit",num,r);
}
int number_digit(int n)
{
   	int count=0;   
	while(n!=0)
	{
		n=n/10;
		count=count+1;
	}
	return count;

}
