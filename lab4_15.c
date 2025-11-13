#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int size = 5;
    int i;

    printf("Original array (size %d): ", size);
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    if (size > 0)
    {
        for (i = 0; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;

        printf("Array after deleting the first element (size %d): ", size);
        for (i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    else
    {
        printf("Array is empty. Cannot delete.\n");
    }

    return 0;
}