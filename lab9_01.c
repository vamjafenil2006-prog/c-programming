#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *filePointer;
    char ch;
    int charCount = 0;
    int wordCount = 0;
    int lineCount = 0;
    int spaceCount = 0;
    int inWord = 0;

    filePointer = fopen("input.txt", "r");

    if (filePointer == NULL) {
        printf("Error: Could not open the file input.txt\n");
        return 1;
    }

    while ((ch = fgetc(filePointer)) != EOF) {
        charCount++;

        if (ch == ' ' || ch == '\t' || ch == '\n') {
            inWord = 0;
            if (ch == ' ') {
                spaceCount++;
            }
        } else if (inWord == 0) {
            inWord = 1;
            wordCount++;
        }

        if (ch == '\n') {
            lineCount++;
        }
    }

    if (charCount > 0 && lineCount == 0) {
        lineCount = 1;
    }

    fclose(filePointer);

    printf("File analysis results:\n");
    printf("Total Lines: %d\n", lineCount);
    printf("Total Words: %d\n", wordCount);
    printf("Total Characters: %d\n", charCount);
    printf("Total Spaces: %d\n", spaceCount);

    return 0;
}