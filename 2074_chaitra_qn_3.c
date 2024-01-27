#include<stdio.h>
int main()
{
	float a=5.7891;
	int b=6789;
	printf("a=%4f and b=%-7d from first line.\n",a,b);
	printf("a=%7.2f and b=%-07d from second line.\n",a,b);
	printf("a=%.2f and b=%2d from third line.\n",a,b);
    return 0;
}
