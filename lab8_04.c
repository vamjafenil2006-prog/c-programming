#include <stdio.h>
#include <string.h>

struct Cricketer {
    char name[50];
    int age;
    int testMatches;
    double averageRuns;
};

void displayCricketers(struct Cricketer c[], int size) {
    printf("Name\t\tAge\tTests\tAverage Runs\n");
    printf("------------------------------------------------\n");
    for (int i = 0; i < size; i++) {
        printf("%s\t\t%d\t%d\t%.2lf\n", c[i].name, c[i].age, c[i].testMatches, c[i].averageRuns);
    }
}

void sortCricketers(struct Cricketer c[], int size) {
    struct Cricketer temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (c[j].averageRuns > c[j + 1].averageRuns) {
                temp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = temp;
            }
        }
    }
}

int main() {
    struct Cricketer team[10] = {
        {"Virat Kohli", 36, 113, 49.95},
        {"Rohit Sharma", 37, 59, 45.45},
        {"KL Rahul", 32, 48, 34.07},
        {"Shubman Gill", 25, 20, 32.20},
        {"Cheteshwar Pujara", 36, 103, 43.60},
        {"Rishabh Pant", 27, 33, 40.71},
        {"Ravindra Jadeja", 35, 70, 36.31},
        {"R Ashwin", 38, 99, 27.02},
        {"Jasprit Bumrah", 31, 37, 3.42},
        {"M Shami", 35, 68, 17.15}
    };
    int teamSize = 10;

    printf("--- Original Cricketer Data ---\n");
    displayCricketers(team, teamSize);

    sortCricketers(team, teamSize);

    printf("\n--- Cricketer Data Sorted by Average Runs (Ascending) ---\n");
    displayCricketers(team, teamSize);

    return 0;
}