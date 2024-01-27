#include<stdio.h>
int main()
{
	int i,num;
	printf("\nEnter the number:");
	scanf("%d",&num);
	printf("\nThe even number from 2 to %d\n",num);
	for(i=0;i<=num;i++)
	{
		if(i%2!=0)
		continue;
		//printf("\nThe even number from 2 to %d",num);
		printf("\t%d",i);
	}
	printf("\nThe odd number from 2 to %d\n",num);
	for(i=0;i<=num;i++)
	{
		if(i%2==0)
		continue;
		//printf("\nThe even number from 2 to %d\n",num);
		printf("\t%d",i);
	}
	
return 0;	
}
