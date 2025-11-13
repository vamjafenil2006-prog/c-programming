#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    char source[MAX_SIZE];
    char destination[MAX_SIZE];
    int i = 0;

    printf("Enter the source string: ");
    fgets(source, MAX_SIZE, stdin);

    while (source[i] != '\0')
    {
        destination[i] = source[i];
        i++;
    }
    
    destination[i] = '\0';

    printf("The source string has been copied.\n");
    printf("Source: %s", source);
    printf("Destination: %s", destination);

    return 0;
}