#include<stdio.h>
int display(int);
void main()
{
	int n=3;
	display(3);
		//printf("%d",n);
}
int display(int n)
{
	if(n<1)
	return ;
	else
	{
		printf("%d",n);
		display(n-1);
	
		printf("%d",n);
	}
}
