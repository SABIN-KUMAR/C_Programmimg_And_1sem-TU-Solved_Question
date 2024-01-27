/*Pointer to Array
As studied above, we can use a pointer to point to an array, and then we can use that pointer to
access the array elements. Lets have an example,*/
#include <stdio.h>
int main()
{
int i;
int a[5] = {1, 2, 3, 4, 5};
int *p = a; // same as int*p = &a[0]
for (i = 0; i < 5; i++)
{
printf("\n%d",*p);
p++;
}
return 0;
}
