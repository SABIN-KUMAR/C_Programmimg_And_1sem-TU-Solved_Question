#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
char str1[50],str2[50];
printf("\nEnter the lower string first:");
gets(str1);
printf("\nEnter the upper string second:");
gets(str2);
strupr(str1);
strlwr(str2);
printf("\nString in upper case is %s", str1);
printf("\nString in lower case is %s",str2);
return 0;
}
