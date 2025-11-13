#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE];
    int i;
    int a_count = 0, e_count = 0, i_count = 0, o_count = 0, u_count = 0;

    printf("Enter a string: ");
    fgets(str, MAX_SIZE, stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        char ch = tolower(str[i]);
        
        if (ch == 'a')
        {
            a_count++;
        }
        else if (ch == 'e')
        {
            e_count++;
        }
        else if (ch == 'i')
        {
            i_count++;
        }
        else if (ch == 'o')
        {
            o_count++;
        }
        else if (ch == 'u')
        {
            u_count++;
        }
    }

    printf("\nVowel Frequency in the String:\n");
    printf("A/a: %d\n", a_count);
    printf("E/e: %d\n", e_count);
    printf("I/i: %d\n", i_count);
    printf("O/o: %d\n", o_count);
    printf("U/u: %d\n", u_count);

    return 0;
}