#include <stdio.h>

int main()
{
    int i, value;
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;
    const int count = 200;

    printf("Enter 200 integer values to count positive, negative, and zeroes:\n");

    for (i = 1; i <= count; i++)
    {
        printf("Enter value %d: ", i);
        scanf("%d", &value);

        if (value > 0)
        {
            positive_count++;
        }
        else if (value < 0)
        {
            negative_count++;
        }
        else
        {
            zero_count++;
        }
    }

    printf("\nValue Count Summary:\n");
    printf("Positive values found: %d\n", positive_count);
    printf("Negative values found: %d\n", negative_count);
    printf("Zero values found: %d\n", zero_count);

    return 0;
}