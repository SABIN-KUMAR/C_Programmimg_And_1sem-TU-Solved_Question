#include<stdio.h>
struct employee
{
	char name[20];
	int age;
	float salary;
};
void sort(struct employee []);
int main()
{
	struct employee s[3];
	int i;
	for(i=0; i<3; i++)
	{
		printf("Enter the name of employee:\t");
		scanf("%[^\n]", s[i].name);
		printf("Enter the age of the employee:\t");
		scanf("%d", &s[i].age);
		printf("Enter the salary of the employee:\t");
		scanf("%f", &s[i].salary);
		fflush(stdin);
	}
	sort(s);
	for(i=0; i<3; i++)
	{
		printf("%s\t\t%d\t%.2f\n", s[i].name, s[i].age, s[i].salary);
	}
	return 0;
}
void sort(struct employee s[3])
{
	struct employee temp[3];
	int i, j;
	for(i=0; i<2; i++)
	{
		for(j=i+1; j<3; j++)
		{
			if(s[i].salary>s[j].salary)
			{
				temp[i]=s[j];
				s[j] = s[i];
				s[i] = temp[i];
			}
		}
	}
	
}
