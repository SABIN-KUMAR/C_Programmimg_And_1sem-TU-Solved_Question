#include<stdio.h>
#include<math.h>
int main()
{
	int i,a,b,c=0,n1,n2,s=0,x;
	printf("Enter the lower value:");
	scanf("%d",&n1);
	printf("Enter the lower value:");
	scanf("%d",&n2);
	//printf("The armstrong are from range %d and %d:",n1,n2);
	for(i=n1;i<=n2;i++)
	{
		a=i;
		x=i;
		while(i!=0)
		{
			c=c+1;
			i=i/10;
		}
		while(a!=0)
	    {
	    	b=a%10;
			s=s+pow(b,c);
			a=a/10;
		}
		printf("The armstrong are from range %d and %d:",n1,n2);
		if(s==x)
	    {
	    	//printf("The armstrong are from range %d and %d:",n1,n2);

	    	printf("\n%d",x);
		}
	}
}
