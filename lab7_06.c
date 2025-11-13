#include <stdio.h>

float add(float a, float b) { return a + b; }
float sub(float a, float b) { return a - b; }
float mul(float a, float b) { return a * b; }
float divi(float a, float b) { return (b != 0) ? a / b : 0; }

int main() {
    float a, b;
    int choice;
    printf("Enter two numbers: ");
    scanf("%f%f", &a, &b);

    printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: printf("Result = %.2f\n", add(a, b)); break;
        case 2: printf("Result = %.2f\n", sub(a, b)); break;
        case 3: printf("Result = %.2f\n", mul(a, b)); break;
        case 4: printf("Result = %.2f\n", divi(a, b)); break;
        default: printf("Invalid choice\n");
    }
    return 0;