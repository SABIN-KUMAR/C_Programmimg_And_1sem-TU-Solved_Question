#include<stdio.h>
#define MAX '5'
int main()
{
	 int ar[MAX]={2,3,4,3,10};
	int i,sum=0;
	float average;
	for(i=0;i<MAX;i++)
	{
		printf("case %d=%3.2d\\n",i,ar[i]);
		sum+=ar[i];
	}
	average=sum/MAX;
	printf("%06.2f",average);
	return 0;
}
