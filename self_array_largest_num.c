#include<stdio.h>
int main()
{
	int array[5]={1,22,3,44,5};
	int i,max;
	for(i=0;i<5;i++)
	{
		if(array[i]>max)
		{
			max=array[i];
		}
	}
	
	printf("The largest number is %d",max);
	return 0;
}
