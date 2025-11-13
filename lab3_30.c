#include <stdio.h>

int main()
 {
    int num, i, flag;

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
            printf("%d ", num);
    }

    return 0;
}