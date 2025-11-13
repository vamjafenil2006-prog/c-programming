#include <stdio.h>

int main() {
    FILE *filePointer;
    char line[256];

    filePointer = fopen("input3.txt", "r");

    if (filePointer == NULL) {
        printf("Error: Could not open the file input3.txt\n");
        return 1;
    }

    printf("--- Content of the file input3.txt ---\n");
    while (fgets(line, sizeof(line), filePointer) != NULL) {
        printf("%s", line);
    }
    printf("\n--------------------------------------\n");

    fclose(filePointer);
    return 0;
}