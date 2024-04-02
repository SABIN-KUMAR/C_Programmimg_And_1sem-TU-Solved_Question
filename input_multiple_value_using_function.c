#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

//this is the function to input nth number of input or multiple input using functon

void inputValues(int arr[], int n) 
{
    printf("Enter %d values separated by spaces:\n",n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d",&arr[i]);
    }
}

int main() 
{
    int n;
    printf("Enter the number of values: ");
    scanf("%d", &n);

    int values[n];
    
    // Call the function to input values
    inputValues(values, n);
    
    printf("To display the entered values:\n ");

    printf("| SN |    Value   |\n");
    printf( "--------------------\n");
    for (int i = 0; i < n; i++) 
    {
        printf(" | %d  | %d      | \n",i+1, values[i]);
    }
    printf("\n");
    getch();
    return 0;
}
