#include<stdio.h>
int main()
{
	int num1,num2,num,i;
	printf("Enter the two number.");
	scanf("%d %d",&num1,&num2);
	printf("\nAll prime number of series.\n");
	for(num=num1;num<=num2;num++)
	{
		for(i=2;i<num;i++)
		{
			if(num%i==0)
	         break;
	    }
		if(i==num)
			{
				printf("\t%d",num);
			}
		}
	}
	getch();
	return 0;
		
}
