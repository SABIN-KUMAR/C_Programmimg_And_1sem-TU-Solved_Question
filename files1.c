/*
	Name:Sabin kumar chaudhary
	Roll no:ACE078BEI039
	Faculty:Electronic,Communication and Information Engineering[BEI]
	Date:2079-05-09
	Description: DATA FILE.....  
*/
/*
    1.write character into a file (filec.txt).The set of character are read from
    the keyboard until an enter key is pressed (use putc() and getc() funtion)
*/
//SOURCRE CODE..
#include<stdio.h>
int main()
{
	char ch;
	FILE *fptr;
	fptr=fopen("filec.txt","w");
	if(fptr==NULL)
	{
		printf("Files doesn`t exist !!!!...");
	}
	printf("Enter the character to stop press enter key:");
	do
	{
		ch= getchar();
		fputc(ch,fptr);
	}
	while(ch!='\n');//where '\n' denote the enter key here...
	printf("\n");
	fclose(fptr);
	fptr=fopen("filec.txt","r");
	if(fptr==NULL)
	{
		printf("\nFiles doesn`t exist !!!!...");
	}
	printf("\nThe files saved as filec.txt is:");
	while((ch=fgetc(fptr))!=EOF)
	{
		putchar(ch);
	}
     printf("\n");
	fclose(fptr);
}

/*OUTPUT

Enter the character to stop press enter key:chaudhary sabin is studying engineering at ACEM.....



The files saved as filec.txt is:chaudhary sabin is studying engineering at ACEM.....



--------------------------------
Process exited after 50.06 seconds with return value 0
Press any key to continue . . .
*/



