#include<stdio.h>
int reverse_num(int);
int main()
{
	int num,result;
	printf("Enter the number:");
	scanf("%d",&num);
	result=reverse_num(num);
	printf("%d is reverse of the given number is %d",result,num);
	return 0;
}
int reverse_num(int user)
{
	int rem,rev=0;
	while(user!=0)
	{
		rem=user%10;
		rev=rev*10+rem;
		user=user/10;
	}
	return rev;
}
