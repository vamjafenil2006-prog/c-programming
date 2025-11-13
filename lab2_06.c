#include <stdio.h>

int main()
{
    int sub1, sub2, sub3, total;
    float average;

    printf("Enter marks for Subject 1 (0-100): ");
    scanf("%d", &sub1);
    printf("Enter marks for Subject 2 (0-100): ");
    scanf("%d", &sub2);
    printf("Enter marks for Subject 3 (0-100): ");
    scanf("%d", &sub3);

    total = sub1 + sub2 + sub3;
    average = (float)total / 3.0;

    printf("\n--- Result Summary ---\n");
    printf("Total Marks: %d\n", total);
    printf("Average Marks: %.2f\n", average);

    if (sub1 < 35 || sub2 < 35 || sub3 < 35)
    {
        printf("Grade: Fail (Failed in one or more subjects)\n");
    }
    else if (average >= 70.0)
    {
        printf("Grade: Distinction\n");
    }
    else if (average >= 60.0)
    {
        printf("Grade: First Class\n");
    }
    else if (average >= 50.0)
    {
        printf("Grade: Second Class\n");
    }
    else if (average >= 35.0)
    {
        printf("Grade: Third Class\n");
    }
    else
    {
        printf("Grade: Fail\n");
    }

    return 0;
}