#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,a=6;
	for(i=6;i>=1;i--)
	{
		for(j=6;j>=i;j--)
		{
			a=a--;
			printf("%d",j);
			
		}
		printf("\n");
	}
}
	
