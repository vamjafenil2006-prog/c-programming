#include <stdio.h>
#define SIZE 4

int main()
{
    int matrix[SIZE][SIZE] = {
        {16, 5, 9, 12},
        {1, 15, 6, 11},
        {14, 2, 10, 7},
        {4, 13, 8, 3}};
    int sorted_array[SIZE * SIZE];
    int i, j, k;
    int array_size = SIZE * SIZE;
    int temp;

    printf("Original 4x4 Matrix:\n");
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }

    k = 0;
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            sorted_array[k++] = matrix[i][j];
        }
    }

    for (i = 0; i < array_size - 1; i++)
    {
        for (j = 0; j < array_size - i - 1; j++)
        {
            if (sorted_array[j] > sorted_array[j + 1])
            {
                temp = sorted_array[j];
                sorted_array[j] = sorted_array[j + 1];
                sorted_array[j + 1] = temp;
            }
        }
    }

    printf("\nSorted elements in a single-dimension array:\n");
    for (i = 0; i < array_size; i++)
    {
        printf("%d ", sorted_array[i]);
    }
    printf("\n");

    return 0;
}