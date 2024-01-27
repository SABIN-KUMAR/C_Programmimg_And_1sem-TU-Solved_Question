#include<stdio.h>
int sum(int);
int main()
{
	int num;
	printf("Enter the number is:");
	scanf("%d",&num);
	num=sum(num);
	printf("The recurse sum of program is %d",num);
}
int sum(int add)

{
	int s=0;
	if(add==1)
	return add;
	else
	{
		s=add+sum(add-1);
		return s;
	}
}
