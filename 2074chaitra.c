#include<stdio.h>
int main()
{
	float a=5.7891;
	int b=6789;
	printf("\na=%4f and b=%-4d from first line",a,b);
	printf("\na=%-7.2f and b=%07d from second line",a,b);
	printf("\na=%.2f and b=%2d from third line",a,b);
	return 0;
}
