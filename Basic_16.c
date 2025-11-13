#include <stdio.h>
int main()
{
    float principal, rate, time, interest;
    printf("Enter Principal amount (P): ");
    scanf("%f", &principal);
    printf("Enter Rate of Interest (R): ");
    scanf("%f", &rate);
    printf("Enter Time in years (N): ");
    scanf("%f", &time);
    interest = (principal * rate * time) / 100.0;
    printf("Simple Interest (I) is: %.2f\n", interest);
    return 0;
}