#include<stdio.h>

int main()
{
	int i,j,n1,n2;
	printf("enter the number n1 and n2:\n");
	scanf("%d %d",&n1,&n2);
	printf("the prime number is :\n");
	for(i=n1;i<=n2;i++)
	{
		for(j=2;j<=i;j++)
		{
			if(i%j==0)
			break;
		}
		if(j==i)
		{
			printf("\t %d",i);
		}
	}
	return 0;
}
