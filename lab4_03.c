#include <stdio.h>

int main()
{
    int arr[5];
    int i, j, temp;

    printf("Please enter 5 integer values to be sorted:\n");

    for (i = 0; i < 5; i++)
    {
        printf("Value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nThe array sorted in ascending order is:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}