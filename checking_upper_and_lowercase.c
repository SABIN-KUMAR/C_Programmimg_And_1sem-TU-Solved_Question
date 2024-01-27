 /* C program to check whether a character is uppercase or lowercase vice-verse
 */

#include <stdio.h>

int main()
{
    char ch;

    /* Input character from user */
    printf("Enter any character: ");
    scanf("%c", &ch);


    if(ch >= 'A' && ch <= 'Z')
    {
    	ch=ch+32;
        printf("'%c' is Uppercase alphabet.", ch);
    }
    else if(ch >= 'a' && ch <= 'z')
    {    
        ch=ch-32;
        printf("'%c' is Lowercase alphabet.", ch);
    }
    else
    {
        printf("'%c' is not an alphabet.", ch);
    }

    return 0;
}
