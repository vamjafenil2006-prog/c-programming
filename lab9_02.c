#include <stdio.h>
#include <string.h>

int main() {
    FILE *filePointer;
    char line[100];

    filePointer = fopen("output2.txt", "w");

    if (filePointer == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter lines of text (hit Enter on an empty line to stop):\n");

    while (1) {
        printf("> ");
        if (fgets(line, sizeof(line), stdin) == NULL || line[0] == '\n') {
            break;
        }
        
        fputs(line, filePointer);
    }

    fclose(filePointer);
    printf("\nData successfully written to output2.txt\n");

    return 0;
}