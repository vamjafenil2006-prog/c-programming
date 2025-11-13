#include <stdio.h>

int main() {
    int num, i, flag;
    long long sum = 0;

    for (num = 2; num <= 500; num++)
        {
        flag = 0;

        for (i = 2; i <= num/2; i++)
            {
            if (num % i == 0)
             {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            {
            sum = sum + num;
        }
    }

    printf("Summation of all prime numbers between 1 and 500 = %lld\n", sum);

    return 0;
}
