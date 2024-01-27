//With using strlen() function
#include<stdio.h>
#include<string.h>
int main()
{
char sabin[50],length;
printf("Enter the sentence:");
gets(sabin);
length=strlen(sabin);
printf("Length of string is %d.",length);
return 0;
}
