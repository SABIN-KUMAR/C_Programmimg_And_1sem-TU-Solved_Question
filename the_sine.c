#include<stdio.h>
#include<conio.h>
#define pi 3.1428
#define n 20
int main()
{
	float x,sum,term,x_degree;
	int i;
	printf("Enter the value of x in degree:\t");
	scanf("%f",&x);
	x_degree=x;
	x=x*pi/180;
	sum=x;
	term=x;
	for(i=1;i<=n;i++)
	{
		term=-1*term*x*x/(2*i*(2*i+1));
		sum=sum+term;
	}
	
	printf("\nThe sin(%.2f)=%.3f",x_degree,sum);
	getch();
	return 0;
}
