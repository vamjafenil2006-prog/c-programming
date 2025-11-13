#include <stdio.h>
#include <limits.h>

int main()
{
    int matrix[3][3] = {
        {10, 5, 20},
        {1, 15, 3},
        {8, 2, 99}};
    
    int size = 9;
    int *ptr = (int *)matrix;
    int i;
    int largest = INT_MIN;
    int smallest = INT_MAX;

    printf("The 3x3 Matrix is:\n");
    for (i = 0; i < 9; i++)
    {
        printf("%4d", *(ptr + i));
        if ((i + 1) % 3 == 0)
        {
            printf("\n");
        }
    }

    for (i = 0; i < size; i++)
    {
        if (*(ptr + i) > largest)
        {
            largest = *(ptr + i);
        }
        if (*(ptr + i) < smallest)
        {
            smallest = *(ptr + i);
        }
    }

    printf("\nUsing Pointers:\n");
    printf("Largest number in the matrix: %d\n", largest);
    printf("Smallest number in the matrix: %d\n", smallest);

    return 0;
}