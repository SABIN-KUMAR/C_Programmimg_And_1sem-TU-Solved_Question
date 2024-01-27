/*print the pattern of pulchowk in c programming..*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	char a[8]={"pulchowk"};
	for(i=0;i<=7;i++)
	{
		for(j=0;j<=7;j++)
		{
			if(i+j<7)
			putchar(' ');
			else
			putchar(a[j]);
		}
		putchar ('\n');
	}	
}
