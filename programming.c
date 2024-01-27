#include<stdio.h>

int main()
{
 int i,j;
 char str[] = "Programming";
 printf("Original String : %s\n",str);  //printing the original string
 for(i=0;i< 6;i++)
 {
  for(j=i;j< 11-i;j++)
  {
   putchar(str[j]);
  }
  putchar('\n');
 }

 return 0;
}
