/**
 * C program to check whether a word is palindrome or not
 */

#include <stdio.h>
#include<conio.h>
#include<string.h>
#define MAX_SIZE 100 // Maximum string size

int main()
{
    char str[MAX_SIZE];
    int len, startIndex, endIndex;

    /* Input string from user */
    printf("Enter any string: ");
    //scanf( "%s", &str); you can also use this for take word from the user//
    //by using the string function
    gets(str);


    /* Find length of the string */
    len = 0;
    while(str[len] != '\0')  //untill  it does not get null value it will go on looping
    len++;

    startIndex = 0;
    endIndex   = len-1;
    

    while(startIndex <= endIndex) //condition for to check the index position of the words
    {
        if(str[startIndex] != str[endIndex])
            break;

        startIndex++;
        endIndex--;
    }

    if(startIndex >= endIndex)
    {
        printf("String is Palindrome.");
    }
    else
    {
        printf("String is Not Palindrome.");
    }

    return 0;
}