#include <stdio.h>

int main()
 {
    int num, sq, temp, mul = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    sq = num * num;
    temp = num;


    while (temp > 0)
        {
        mul = mul * 10;
        temp = temp / 10;
    }


    if (sq % mul == num)
        printf("%d is an Automorphic Number.\n", num);
    else
        printf("%d is not an Automorphic Number.\n", num);

    return 0;
}
