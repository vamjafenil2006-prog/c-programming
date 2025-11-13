#include <stdio.h>

int main()
{
    int value;
    int notes[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int i, count;
    int num_notes = sizeof(notes) / sizeof(notes[0]);

    printf("Enter the amount for which you need the minimum number of notes: ");
    scanf("%d", &value);

    printf("\nMinimum notes required for %d Rs.:\n", value);

    for (i = 0; i < num_notes; i++)
    {
        count = value / notes[i];
        if (count > 0)
        {
            printf("%d note(s) of %d Rs.\n", count, notes[i]);
            value = value % notes[i];
        }
    }

    return 0;
}