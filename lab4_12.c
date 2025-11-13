#include <stdio.h>

int main()
{
    int arr[6] = {10, 20, 30, 40, 50};
    int size = 5;
    int new_value;
    int i;

    printf("Original array (size %d): ", size);
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the number to insert at the beginning: ");
    scanf("%d", &new_value);

    for (i = size; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[0] = new_value;
    size++;

    printf("Array after insertion (size %d): ", size);
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}