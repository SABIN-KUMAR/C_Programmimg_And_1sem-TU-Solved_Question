#include <stdio.h>

int main()
{
    int n, i;
    int largest, smallest;
//n term number taken below.
    printf("Enter the number of terms: ");
    scanf("%d", &n);
//enter the first number and also initialize largest is equal to smallest.
    printf("Enter the first number: ");
    scanf("%d", &largest);
    smallest = largest;
// for loop to take number and check smallest and largest number.
    for(i = 0; i <= n; i++)
    {
        int num;
        printf("Enter the next number: ");
        scanf("%d", &num);

        if(num > largest)
            largest = num;
        else if(num < smallest)
            smallest = num;
    }

    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);

    return 0;
}

