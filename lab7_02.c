#include <stdio.h>

int isLeap(int year) {
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        return 1;
    else
        return 0;
}

int main() {
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    if (isLeap(year))
        printf("%d is a Leap Year\n", year);
    else
        printf("%d is NOT a Leap Year\n", year);
    return 0;
}
