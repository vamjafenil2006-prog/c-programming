#include <stdio.h>

int main()
{
    int a, b, c, largest, smallest;

    printf("Enter the first value (A): ");
    scanf("%d", &a);
    printf("Enter the second value (B): ");
    scanf("%d", &b);
    printf("Enter the third value (C): ");
    scanf("%d", &c);

    if (a >= b && a >= c)
    {
        largest = a;
    }
    else if (b >= a && b >= c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }

    if (a <= b && a <= c)
    {
        smallest = a;
    }
    else if (b <= a && b <= c)
    {
        smallest = b;
    }
    else
    {
        smallest = c;
    }

    printf("The largest value is: %d\n", largest);
    printf("The smallest value is: %d\n", smallest);

    return 0;
}