#include <stdio.h>

int main()
{
    int arr[10];
    int i;

    printf("Please enter 10 integer values:\n");

    for (i = 0; i < 10; i++)
    {
        printf("Value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nPrinting 4th, 7th, and 9th values (0-indexed):\n");
    printf("4th value (index 3): %d\n", arr[3]);
    printf("7th value (index 6): %d\n", arr[6]);
    printf("9th value (index 8): %d\n", arr[8]);

    return 0;
}