#include <stdio.h>

int main()
{
    int arr[6] = {10, 20, 30, 40, 50};
    int size = 5;
    int new_value, i;

    printf("Original array (size %d): ", size);
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the number to insert at the last position: ");
    scanf("%d", &new_value);

    if (size < 6)
    {
        arr[size] = new_value;
        size++;

        printf("Array after insertion (size %d): ", size);
        for (i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    else
    {
        printf("Array is full. Insertion failed.\n");
    }

    return 0;
}