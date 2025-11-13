#include <stdio.h>

int main()
{
    int n, i;
    long long sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum += i;
    }

    printf("The sum of the first %d natural numbers is: %lld\n", n, sum);

    return 0;
}