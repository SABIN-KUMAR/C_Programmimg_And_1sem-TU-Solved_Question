#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int num,rem,rev=0,armstrong;
	printf("Enter the number:",num);
	scanf("%d",&num);
	armstrong=num;
	while(num!=0)
	{
	rem=num%10;
	rev=rev+pow(rem,3);
	num=num/10;
    }
if(armstrong==rev)
    {
    	printf("The number is armstrong:");
   	}
	
   else
     {
	     printf("The number is not armstrong:");	
     }
    return 0;
    
}
    
    
    
    
    
