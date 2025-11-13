#include <stdio.h>

int main()
{
    int arr[5];
    int i;

    printf("Please enter 5 integer values:\n");

    for (i = 0; i < 5; i++)
    {
        printf("Value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nThe 5 values you entered are:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}