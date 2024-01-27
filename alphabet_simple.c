#include<stdio.h>
int main()
{
	char input,alphabet='A';
	int i;
	printf("Enter the alphabet:");
	scanf("%c",&input);
	for(i=0;i<(input-'A');i++)
	{
		printf("%c",alphabet);
		++alphabet;
		printf("\n");
		//printf("%c",alphabet);
	}
	//printf("\n");
	printf("%c",alphabet);
}
