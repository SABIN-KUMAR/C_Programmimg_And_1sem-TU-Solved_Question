//Without using strlen() function
#include<stdio.h>
int stringlength(char []);
int main()
{
char str[50] = "BEI Classes";
int length;
length = stringlength(str);
printf("Length of string is %d .",length);
return 0;
getch();
}
int stringlength(char str[])
{
int len;
while(str[len]!='\0')
{
len++;
}
return len;
}
//Output : Length of string is 11.
