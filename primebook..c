#include<stdio.h>
void main()
{
	int i,j,n1,n2;
	printf("Enter n1 and n2(range) where n1<n2:\n");
	scanf("%d %d",&n1,&n2);
	printf("\nThe prime number are:");
	for(i=n1;i<=n2;i++)
	{
		for(j=2;j<=i;j++)
		{
			if(i%j==0)
			break;
		}
		if(j==i)
		{
			printf("\t%d",i);
		}
		//printf("\n The prime number are:");
	}
	
}
