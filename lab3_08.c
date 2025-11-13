
#include <stdio.h>

int main()
{
    int n, i;
    long long sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        sum += (2 * i + 1);
    }

    printf("The sum of the first %d odd numbers is: %lld\n", n, sum);

    return 0;
}