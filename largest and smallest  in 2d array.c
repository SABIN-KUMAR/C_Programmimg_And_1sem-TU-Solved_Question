#include<stdio.h>

int main()
{
	int mat[10][10], m, n, i, j, largest, smallest;
	printf("Enter the value of rows and columns:\t");
	scanf("%d %d", &m, &n);
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("Enter mat[%d][%d]:\t", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	largest=mat[0][0];
	smallest=mat[0][0];
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			if(largest<mat[i][j])
			{
				largest = mat[i][j];
			}
			if(smallest>mat[i][j])
			{
				smallest = mat[i][j];
			}	
		}	
	}
	printf("Largest number = %d\n", largest);
	printf("Smallest number = %d\n", smallest);
	return 0;
}
