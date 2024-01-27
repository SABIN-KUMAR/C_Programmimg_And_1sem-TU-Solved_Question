#include<stdio.h>
int main()
{
	int a=5,b=6,c=7;
	//printf("Enter value a b c number:");
	//scanf("%d %d %d",&a,&b,&c);
	if(a>b || a>c)
	{
	printf("1.%d is greater",a);
	}
    else if(b>c || b>a)
	{
	printf("2.%d is greater",b);
	}
	else
	printf("3.%d is greater",c);
	//return 0;
}
