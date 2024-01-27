#include<stdio.h>
#include<conio.h>
int main()
{
int  i, j;
//printf("Enter the number of rows: ");
//scanf("%d",&n);
for(i = 6; i >= 1; i--)
{
printf(" ");

for(j = 1; j <= i; j++)
{
printf("%d",j);
}printf(" ");
printf("\n");
}
return 0;
}
