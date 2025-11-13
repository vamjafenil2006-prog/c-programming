#include <stdio.h>

int main()
{
    int arr[10] = {10, 20, 40, 50, 60};
    int size = 5;
    int new_value, position, i;

    printf("Original array (size %d): ", size);
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the number to insert: ");
    scanf("%d", &new_value);
    printf("Enter the position (1 to %d) for insertion: ", size + 1);
    scanf("%d", &position);

    if (position < 1 || position > size + 1)
    {
        printf("Invalid position.\n");
        return 1;
    }

    int index = position - 1;

    for (i = size; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[index] = new_value;
    size++;

    printf("Array after insertion (size %d): ", size);
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}