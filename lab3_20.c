#include <stdio.h>

int main()
{
    int i;
    int sum = 0;

    printf("Calculating the sum of all integers from 1 to 100 divisible by 3.\n");

    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            sum += i;
        }
    }

    printf("The required sum is: %d\n", sum);

    return 0;
}