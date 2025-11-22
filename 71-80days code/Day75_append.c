//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[100];
    char newLine[200];

    printf("Enter the filename: ");
    scanf("%s", filename);

    file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error: Could not open file '%s'.\n", filename);
        return 1;
    }

    printf("Enter the text to append: ");
    getchar(); 
    fgets(newLine, sizeof(newLine), stdin);

    fputs(newLine, file);

    printf("Text appended successfully to '%s'.\n", filename);

    fclose(file);

    return 0;
}
