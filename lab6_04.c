#include <stdio.h>
#include <string.h>

int main()
{
    char book1[50];
    char book2[50];
    char book3[50];

    char *book_titles[3] = {book1, book2, book3};
    int i;

    printf("Please enter the title of 3 books.\n");

    for (i = 0; i < 3; i++)
    {
        printf("Enter title %d: ", i + 1);
        fgets(book_titles[i], 50, stdin);
        book_titles[i][strcspn(book_titles[i], "\n")] = 0;
    }

    printf("\nThe three accepted book titles are:\n");
    for (i = 0; i < 3; i++)
    {
        printf("Book %d: %s\n", i + 1, book_titles[i]);
    }

    return 0;
}