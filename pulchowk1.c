#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	char a[8]={"PULCHOWK"};
	for(i=0;i<=7;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(i%2==0 && j%2!=0)
			printf("%c",a[j]+32);
			else if(i==1 && j==1 || i==6 && j==0)
			printf("%c",a[j]+32);
			else
			printf("%c",a[j]);
		}
		printf("\n");
	}
}
