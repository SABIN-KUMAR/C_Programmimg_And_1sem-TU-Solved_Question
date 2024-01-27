


/*WAP to input integer valuas in an array and display it */

#include<stdio.h>
int main()
{
	int a[10]={2,3,4,5,6,7,81,3,22,21},i;
    for(i=0 ;i<=9 ;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	printf("\n\n the address allocated for array element are:\n");
	
	for(i=0 ;i<=9 ;i++)
	{
		printf("\n address of a [%d] = %d ,i,&a[i]");
	}
	printf("\n the size of array is %d bytes",sizeof(a));
	return 0;
}
