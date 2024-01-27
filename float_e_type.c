//source code for the float(%e) type data type..
#include<stdio.h>
int main()
{
	float num=123.456789;
	printf("\n case 0:%e",num);
	printf("\n case 1:%20e",num);
	printf("\n case 2:%20.4e",num);
	printf("\n case 3:%020.4e",num);
	printf("\n case 4:%-20.4e",num);
	printf("\n case 5:%+20.4e",num);
	return 0;
}
