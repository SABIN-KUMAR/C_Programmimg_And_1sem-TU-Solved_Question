#include<stdio.h>
#include<math.h>
#define PI 3.14
void main()
{
	int r;
	float pia,area;
	printf("Enter the radius of circle:");
	scanf("%d",&r);
	//pia=3.14;
	area=PI*pow(r,2);
	printf("Area of circle=%f",area);
	

}
