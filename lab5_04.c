#include <stdio.h>
#include <ctype.h>
#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE];
    int i = 0;

    printf("Enter a string (e.g. AbC): ");
    fgets(str, MAX_SIZE, stdin);

    while (str[i] != '\0')
    {
        if (isupper(str[i]))
        {
            str[i] = tolower(str[i]);
        }
        else if (islower(str[i]))
        {
            str[i] = toupper(str[i]);
        }
        i++;
    }

    printf("The string in toggle case is: %s", str);

    return 0;
}