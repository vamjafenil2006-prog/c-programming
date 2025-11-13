#include <stdio.h>

void print_matrix(int matrix[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void add_matrices(int A[3][3], int B[3][3], int C[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void subtract_matrices(int A[3][3], int B[3][3], int C[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
}

void multiply_matrices(int A[3][3], int B[3][3], int C[3][3])
{
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            C[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main()
{
    int matrixA[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrixB[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int result[3][3];

    printf("Matrix A:\n");
    print_matrix(matrixA);
    printf("\nMatrix B:\n");
    print_matrix(matrixB);

    add_matrices(matrixA, matrixB, result);
    printf("\nResult of Addition (A + B):\n");
    print_matrix(result);

    subtract_matrices(matrixA, matrixB, result);
    printf("\nResult of Subtraction (A - B):\n");
    print_matrix(result);

    multiply_matrices(matrixA, matrixB, result);
    printf("\nResult of Multiplication (A * B):\n");
    print_matrix(result);

    return 0;
}