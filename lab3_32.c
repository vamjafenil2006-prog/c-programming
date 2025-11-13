#include <stdio.h>

int main()
 {
    int num, i, flag,count=0;

    printf("Prime numbers between 1 and 500 are:\n");

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
            count++;

    }
    printf("Total prime numbers are: %d",count);
    return 0;
}