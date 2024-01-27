/* WAP to concatenate two string using user defined function concatenate(). [Don't use
string library function strcat().*/
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
char s1[50], s2[50];
printf("\nEnter string1 : ");
gets(s1);
printf("\nEnter string2 : ");
gets(s2);
strcat(s1,s2);
printf("\nConcatenated string is %s", s1);
getch();
return 0;
}
