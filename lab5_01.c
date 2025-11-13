#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, MAX_SIZE, stdin);

    while (str[length] != '\0' && str[length] != '\n')
    {
        length++;
    }

    printf("The length of the string is: %d\n", length);

    return 0;
}