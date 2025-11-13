#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE];
    int length;
    int i;

    printf("Enter a string: ");
    fgets(str, MAX_SIZE, stdin);

    length = strlen(str);
    if (length > 0 && str[length - 1] == '\n')
    {
        str[length - 1] = '\0';
        length--;
    }

    printf("\nPrinting characters vertically in reverse order:\n");

    for (i = length - 1; i >= 0; i--)
    {
        printf("%c\n", str[i]);
    }

    return 0;
}