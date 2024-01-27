#include <stdio.h>
typedef struct Complex
{
float real;
float imag;
}complex;
void addNumbers(complex c1, complex c2, complex *result);
int main()
{
complex c1, c2, result;
printf("For first number,\n");
printf("Enter real part: ");
scanf("%f", &c1.real);
printf("Enter imaginary part: ");
scanf("%f", &c1.imag);
printf("For second number, \n");
printf("Enter real part: ");
scanf("%f", &c2.real);
printf("Enter imaginary part: ");
scanf("%f", &c2.imag);
addNumbers(c1, c2, &result);
printf("\nresult.real = %.1f\n", result.real);
printf("result.imag = %.1f", result.imag);
return 0;
}
void addNumbers(complex c1, complex c2, complex *result)
{
result->real = c1.real + c2.real;
result->imag = c1.imag + c2.imag;
}

/*Alternative (Return Type)
#include <stdio.h>
typedef struct complex
{
float real;
float imag;
} complex;
complex add(complex n1,complex n2);
int main()
{
complex n1, n2, temp;
printf("For 1st complex number \n");
printf("Enter real and imaginary part respectively:\n");
scanf("%f %f", &n1.real, &n1.imag);
printf("\nFor 2nd complex number \n");
printf("Enter real and imaginary part respectively:\n");
scanf("%f %f", &n2.real, &n2.imag);
temp = add(n1, n2);
printf("Sum = %.1f + %.1fi", temp.real, temp.imag);
return 0;
}
complex add(complex n1, complex n2)
{
complex temp;
temp.real = n1.real + n2.real;
temp.imag = n1.imag + n2.imag;
return(temp);
}*/
