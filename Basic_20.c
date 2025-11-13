#include <stdio.h>
int main()
{
    float height, base, area;
    printf("Enter the height of the triangle (H): ");
    scanf("%f", &height);
    printf("Enter the base length of the triangle (L): ");
    scanf("%f", &base);
    area = height * base / 2.0;
    printf("Area of Triangle: %.2f\n", area);
    return 0;
}