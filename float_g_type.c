//source code for the float(%g) type data type..
#include<stdio.h>
int main()
{
	float num=123.456789;
	printf("\n case 0:%g",num);
	printf("\n case 1:%20g",num);
	printf("\n case 2:%20.4g",num);
	printf("\n case 3:%020.4g",num);
	printf("\n case 4:%-20.4g",num);
	printf("\n case 5:%+20.4g",num);
	return 0;
}
