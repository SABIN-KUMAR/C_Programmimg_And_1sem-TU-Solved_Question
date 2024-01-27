#include<stdio.h>
int main()
{
	int a[10]={1,3,5,7,9,15,13,2,11,4};
	int i;
	int sum=0;
	float avg;
	for(i=0;i<10;i++)
	{
		sum=sum+a[i];
		avg=sum/10;
	}
	{
		printf("sum=%d \n",sum);
		printf("average=%f \n",avg);
		return 0;
	}
}
