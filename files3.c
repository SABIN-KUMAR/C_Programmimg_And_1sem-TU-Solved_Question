/*
	Name:Sabin kumar chaudhary
	Roll no:ACE078BEI039
	Faculty:ELectronic,Communication and Information Engineering[BEI]
	Date:2079-05-09
	Description: DATA FILE.....  
*/
/* 
  3.Write a program to input and save record like name,roll,address and obtained marks of 48 students
  in a binary file and search and display the record of a student whose obtained marks in highest.
  The information should be organised in a structure.....
*/
//SOURCE CODE..
#include<stdio.h>
typedef struct 
{
	char name[20],address[50];
	int marks,roll;
	
}stud;
int main()
{   
    stud s[48],hi;
	int i;
	FILE *fptr;
	fptr=fopen("STUDENT.DAT","wb");
	if(fptr==NULL)
	{
		printf("Files doesn`t exist !!!!...");
	}
	printf("Enter the data of 4 student insist of 48 students:");
	for(i=0;i<4;i++)
	{
		fflush(stdin);
		printf("\nEnter the name of student:");
	    scanf("%s",s[i].name);
	    printf("Enter the Roll number of the student:");
	    scanf("%d",&s[i].roll);
	    printf("Enter the marks of the student:");
	    scanf("%d",&s[i].marks);
	    printf("Enter the address of student:");
	    scanf("%s",s[i].address);
	    fflush(stdin);
	    fprintf(fptr,"\nName=%s\t\tRoll No=%d\t\tMarks=%s\n\t\tAddress=%s\n",s[i].name,s[i].roll,s[i].marks,s[i].address);
	}
	for(i=0;i<4;i++)
	{
		if(s[i+1].marks>s[i].marks)
		{
			hi=s[i+1];
		}
	}
	fclose(fptr);
	fptr=fopen("STUDENT.DAT","rb");
	if(fptr==NULL)
	{
		printf("\nFiles doesn`t exist !!!!...");
	}
	printf("\nThe record of the student whose obtained marks is highest among all: ");
    printf("\nNAME=%s\t\tROLL NO=%d\t\tOBTAINED MARKS=%d\t\tADDRESS=%s\n",hi.name,hi.roll,hi.marks,hi.address);
    printf("\n");
	fclose(fptr);
	return 0;
}











