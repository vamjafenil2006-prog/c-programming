#include <stdio.h>
#include <ctype.h>

int main()
{
    int i;
    char sex_code;
    int boys_count = 0;
    int girls_count = 0;
    const int count = 50;

    printf("Enter 'B' for Boy or 'G' for Girl for 50 students:\n");

    for (i = 1; i <= count; i++)
    {
        printf("Enter sex code for student %d (B/G): ", i);
        scanf(" %c", &sex_code);
        sex_code = toupper(sex_code);

        if (sex_code == 'B')
        {
            boys_count++;
        }
        else if (sex_code == 'G')
        {
            girls_count++;
        }
        else
        {
            printf("Invalid code entered. Skipping this student.\n");
        }
    }

    printf("\nClass Analysis (Total 50 Students):\n");
    printf("Number of Boys: %d\n", boys_count);
    printf("Number of Girls: %d\n", girls_count);

    return 0;
}