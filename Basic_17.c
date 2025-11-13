#include <stdio.h>
int main()
{
    float length, area, perimeter;
    printf("Enter the side length of the square: ");
    scanf("%f", &length);
    area = length * length;
    perimeter = 4 * length;
    printf("Area of Square: %.2f\n", area);
    printf("Perimeter of Square: %.2f\n", perimeter);
    return 0;
}