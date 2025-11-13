#include <stdio.h>

int main()
{
    int n, i;
    long long sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum += (2 * i);
    }

    printf("The sum of the first %d even numbers is: %lld\n", n, sum);

    return 0;
}