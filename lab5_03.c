#include <stdio.h>
#include <ctype.h>
#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, MAX_SIZE, stdin);

    while (str[i] != '\0')
    {
        str[i] = toupper(str[i]);
        i++;
    }

    printf("The string in upper case is: %s", str);

    return 0;
}