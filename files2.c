/*
	Name:Sabin kumar chaudhary
	Roll no:ACE078BEI039
	Faculty:ELectronic,Communication and Information Engineering[BEI]
	Date:2079-05-09
	Description: DATA FILE.....  
*/
/* 
   2.Write a program to write Name,Roll no and Age of 5 students
    into a disk file name"STUDENT.DAT"
*/

//SOURCE CODE..
#include<stdio.h>
int main()
{
	char name[20],ch;
	int roll;
	int age;
	int i;
	FILE *fptr;
	fptr=fopen("STUDENT.DAT","w");
	if(fptr==NULL)
	{
		printf("Files doesn`t exist !!!!...");
	}
	printf("\nEnter the data from user until loop close:");
	for(i=0;i<5;i++)
	{
		printf("\nEnter the name of student:");
	    scanf("%s",name);
	    printf("Enter the Roll number of the student:");
	    scanf("%d",&roll);
	    printf("Enter the age of student:");
	    scanf("%d",&age);
	    fprintf("\nName=%s\t\tRoll No=%d\t\tAge=%d\n",name,roll,age);
	}
	fclose(fptr);
	fptr=fopen("STUDENT.DAT","r");
	if(fptr==NULL)
	{
		printf("\nFiles doesn`t exist !!!!...");
	}
	printf("The file saved as STUDENT.DAT is: ");
	while((ch=fgetc(fptr))!=EOF)
	{
		putchar(ch);
	}
     printf("\n");
	fclose(fptr);
}

/*
   Enter the data from user until loop close:
Enter the name of student:sabin
Enter the Roll number of the student:1
Enter the age of student:21

Enter the name of student:aavash
Enter the Roll number of the student:
22
Enter the age of student:20

Enter the name of student:amit
Enter the Roll number of the student:3
Enter the age of student:22

Enter the name of student:gautam
Enter the Roll number of the student:4
Enter the age of student:18

Enter the name of student:avi
Enter the Roll number of the student:22
Enter the age of student:
22
The file saved as STUDENT.DAT is:
Name=sabin              Roll No=1               Age=21

Name=aavash             Roll No=22              Age=20

Name=amit               Roll No=3               Age=22

Name=gautam             Roll No=4               Age=18

Name=avi                Roll No=22              Age=22


--------------------------------
Process exited after 130.3 seconds with return value 0
Press any key to continue . . .
*/










