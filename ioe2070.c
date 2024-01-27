#include<stdio.h>
int main()
{
	int a=2,b=3,c;
	a=(b++)+(++b)+a;
	c=a>b?a:b;
		b=(a++)+(b--)+a;
		c=c++*b--;
	printf("a=%d , b=%d , c=%d");
	return 0;
}
