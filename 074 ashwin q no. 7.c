#include<stdio.h>
struct complex
{
	int x, y;
};

int main()
{
	struct complex first, second;
	int real, img;
	printf("Enter the real and imaginary value for first complex:\t");
	scanf("%d %d", &first.x, &first.y);
	printf("Enter the real and imaginary value for second complex:\t");
	scanf("%d %d", &second.x, &second.y);
	real = first.x*second.x - first.y*second.y;
	img = first.x*second.y + first.y*second.x;
	if(img>0)
	{
		printf("multiplication:%d+%di", real, img);
	}
	else
	{
		printf("%d%di", real, img);
	}
	return 0;
}
