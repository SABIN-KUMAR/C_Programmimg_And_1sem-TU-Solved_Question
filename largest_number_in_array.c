/*Program to find the largest element of an array.*/
#include<stdio.h>
#include<conio.h>
int main()
{
float marks[5],max;
int i;
for(i=0;i<5;i++)
   {
      printf("Enter marks[%d]=",i); 
      scanf("%f",&marks[i]);
    }
   max=marks[i];
   for(i=0;i<5;i++)
       {
          if(marks[i]>max)
            {
                max=marks[i];
            }
        }
printf("The largest element is %f",max);
getch();
return 0;
}
