#include <stdio.h>

int main()
{
    int number;

    printf("Enter an integer to check divisibility by 7: ");
    scanf("%d", &number);

    if (number % 7 == 0)
    {
        printf("The number %d is divisible by 7.\n", number);
    }
    else
    {
        printf("The number %d is not divisible by 7. Remainder is %d.\n", number, number % 7);
    }

    return 0;
}