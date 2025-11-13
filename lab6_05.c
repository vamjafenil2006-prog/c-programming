#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_SIZE 100

int main()
{
    char full_name[MAX_SIZE];
    int i, last_space_index = -1;
    int length;

    printf("Enter a full name (e.g., John Fitzgerald Kennedy): ");
    fgets(full_name, MAX_SIZE, stdin);
    full_name[strcspn(full_name, "\n")] = 0;
    length = strlen(full_name);

    for (i = 0; i < length; i++)
    {
        if (full_name[i] == ' ')
        {
            last_space_index = i;
        }
    }

    printf("\nAbbreviated Name: ");

    printf("%c. ", toupper(full_name[0]));

    i = 0;
    while (i < last_space_index)
    {
        if (full_name[i] == ' ')
        {
            i++;
            if (i < last_space_index)
            {
                printf("%c. ", toupper(full_name[i]));
            }
        }
        i++;
    }

    for (i = last_space_index + 1; i < length; i++)
    {
        printf("%c", full_name[i]);
    }
    printf("\n");

    return 0;
}