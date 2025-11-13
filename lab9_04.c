#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct StudentRecord {
    int rollNo;
    char name[50];
};

int main() {
    FILE *filePointer;
    struct StudentRecord record;
    char choice[5];

    filePointer = fopen("records.csv", "w");

    if (filePointer == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    fprintf(filePointer, "Roll No.,Name\n");

    do {
        printf("\nEnter Roll No.: ");
        if (scanf("%d", &record.rollNo) != 1) {
            printf("Invalid input. Exiting.\n");
            break;
        }

        printf("Enter Name: ");
        scanf("%s", record.name);

        fprintf(filePointer, "%d,%s\n", record.rollNo, record.name);
        printf("Record stored successfully.\n");

        printf("Do you want to enter more records? (yes/no): ");
        scanf("%s", choice);

    } while (strcmp(choice, "yes") == 0 || strcmp(choice, "y") == 0);

    fclose(filePointer);
    printf("\nAll records saved to records.csv. This file can be opened directly in MS-Excel.\n");

    return 0;
}