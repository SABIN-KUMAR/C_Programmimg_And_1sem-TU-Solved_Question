#include<stdio.h>
#include<conio.h>
int main()
{

    int num;
	int a,b;
	printf("Enter the two numbers:");
	scanf("%d %d",&a,&b);
	switch(num)
	{
		case'+':printf("%d+%d=%d",a,b,a+b);
		break;
		case'-':printf("%d-%d=%d",a,b,a-b);
		break;		
        case'*':printf("%d*%d=%d",a,b,a*b);
		break;
		case'/':printf("%d/%d=%d",a,b,a/b);
		break;
		default:printf("invalid input:");
		
	}
	return 0;		
}
