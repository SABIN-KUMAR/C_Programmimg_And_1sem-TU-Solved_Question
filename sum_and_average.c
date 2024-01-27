//wap the program to calculate the sum of the 10 number given by the user and average too...
#include<stdio.h>
int main()
{
	int num,sum=0,i;
	float average;
	printf("Enter the number:");
	
	   for(i=0;i<10;i++)
	   {
	   scanf("%d",&num);
	   sum=sum+num;
	   }
    
    printf("\nThe sum is %d",sum);
    average=sum/10;
    printf("\nThe average is %f",average);
    return 0;
}
