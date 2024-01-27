//source code for the float(%f) type data type..
#include<stdio.h>
int main()
{
	float num=123.456789;
	printf("\n case 0:%f",num);
	printf("\n case 1:%20f",num);
	printf("\n case 2:%20.4f",num);
	printf("\n case 3:%020.4f",num);
	printf("\n case 4:%-20.4f",num);
	printf("\n case 5:%+20.4f",num);
	return 0;
}
