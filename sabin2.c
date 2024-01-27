#include<stdio.h>
int main()
{
	int i,j,a,n,num[30];
	printf("Please enter the number you like?\n");
	scanf("%d",&n);
//	printf("enter the numbers\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	for(j=i+1;j<n;j++)
	{
		if(num[i>num[j]])
		{
			a=num[i];
			num[i]=num[j];
			num[j]=a;
		}
	}
}
printf("The numbers arranged in ascending orders are :\n");
for(i=0;i<n;i++)
{
	printf("%d \t",num[i]);
}
return 0;
}

