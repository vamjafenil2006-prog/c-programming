#include <stdio.h>
int main()
{
    float num1, num2, quotient;
    printf("Enter dividend: ");
    scanf("%f", &num1);
    printf("Enter divisor: ");
    scanf("%f", &num2);
    quotient = num1 / num2;
    printf("Quotient is: %.2f\n", quotient);
    return 0;
}