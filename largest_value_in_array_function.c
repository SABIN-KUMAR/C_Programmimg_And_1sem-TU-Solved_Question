#include<stdio.h>
void sort(int []);

int main()
{
	int num[5], i;
	printf("Enter 5 numbers:\t");
	for(i=0; i<5; i++)
	{
		scanf("%d", &num[i]);
	}
	sort(num);
	printf("Smallest = %d\n", num[0]);
	printf("Largest = %d\n", num[4]);
	return 0;
}
void sort( int num[])
{
	int i, j, temp;
	for(i=0; i<4; i++)
	{
		for(j=i+1; j<5; j++)
		{
			if(num[i]>num[j])
			{
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	}
}
