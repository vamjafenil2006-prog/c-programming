#include <stdio.h>

void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    int n;
    char direction;

    printf("Original array: ");
    print_array(arr, size);

    printf("Enter number of positions to shift (N): ");
    scanf("%d", &n);
    printf("Enter direction ('L' for Left, 'R' for Right): ");
    scanf(" %c", &direction);

    n = n % size;

    if (n == 0)
    {
        printf("No shift performed.\n");
        return 0;
    }

    if (direction == 'L' || direction == 'l')
    {
        printf("Performing Left Shift by %d positions...\n", n);
        int temp[n];
        int i;
        for (i = 0; i < n; i++)
        {
            temp[i] = arr[i];
        }

        for (i = n; i < size; i++)
        {
            arr[i - n] = arr[i];
        }

        for (i = 0; i < n; i++)
        {
            arr[size - n + i] = 0;
        }
    }
    else if (direction == 'R' || direction == 'r')
    {
        printf("Performing Right Shift by %d positions...\n", n);
        int temp[n];
        int i;
        for (i = 0; i < n; i++)
        {
            temp[i] = arr[size - n + i];
        }

        for (i = size - 1; i >= n; i--)
        {
            arr[i] = arr[i - n];
        }

        for (i = 0; i < n; i++)
        {
            arr[i] = 0;
        }
    }
    else
    {
        printf("Invalid direction.\n");
        return 0;
    }

    printf("Shifted array (padded with 0s): ");
    print_array(arr, size);

    return 0;
}