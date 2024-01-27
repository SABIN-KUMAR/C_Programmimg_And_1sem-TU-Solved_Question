#include<stdio.h>

int main()
{
	char *ch = "hello world", *name;
	int len;
	name = ch;
	while(*ch != '\0')
	{
	    ch++;
	}
	len = ch - name;
	printf("length of string=%d", len);
	return 0;
}
