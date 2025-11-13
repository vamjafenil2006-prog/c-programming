#include <stdio.h>
#include <limits.h>

int main()
{
    int i, value;
    int largest = INT_MIN;
    int smallest = INT_MAX;
    const int count = 100;

    printf("Enter 100 integer values to find the largest and smallest:\n");

    for (i = 1; i <= count; i++)
    {
        printf("Enter value %d: ", i);
        scanf("%d", &value);

        if (value > largest)
        {
            largest = value;
        }

        if (value < smallest)
        {
            smallest = value;
        }
    }

    printf("\nAnalysis Complete:\n");
    printf("The largest value entered is: %d\n", largest);
    printf("The smallest value entered is: %d\n", smallest);

    return 0;
}