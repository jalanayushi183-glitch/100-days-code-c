//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *destFile;
    char sourceName[100], destName[100];
    char ch;

    printf("Enter the source file name: ");
    scanf("%s", sourceName);

    printf("Enter the destination file name: ");
    scanf("%s", destName);

    sourceFile = fopen(sourceName, "r");
    if (sourceFile == NULL) {
        printf("Error: Could not open source file '%s'.\n", sourceName);
        return 1;
    }

    destFile = fopen(destName, "w");
    if (destFile == NULL) {
        printf("Error: Could not open destination file '%s'.\n", destName);
        fclose(sourceFile);
        return 1;
    }

    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("Content copied successfully from '%s' to '%s'.\n", sourceName, destName);

    fclose(sourceFile);
    fclose(destFile);

    return 0;
}
