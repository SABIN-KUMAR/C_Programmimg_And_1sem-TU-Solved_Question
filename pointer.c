#include <stdio.h>
int main()
{
int a, *p; // declaring the variable and pointer
a = 10;
p = &a; // initializing the pointer
printf("\n%d", *p); //this will print the value of 'a'
printf("\n%d", *&a); //this will also print the value of 'a'
printf("\n%u", &a); //this will print the address of 'a'
printf("\n%u", p); //this will also print the address of 'a'
printf("\n%u", &p); //this will print the address of 'p'
return 0;
}
