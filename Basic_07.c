#include <stdio.h>
int main()
{
    float minutes, hours;
    printf("Enter minutes: ");
    scanf("%f", &minutes);
    hours = minutes / 60;
    printf("%.2f minutes is equal to %.2f hours\n", minutes, hours);
    return 0;
}