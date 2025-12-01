#include <stdio.h>
#include <stdlib.h>
int main(){
    char sourceFile[100], destFile[100];
    FILE *source, *dest;
    int ch;

    // Take filenames from user
    printf("Enter source file name: ");
    scanf("%s", sourceFile);
    printf("Enter destination file name: ");
    scanf("%s", destFile);

    // Open source file in read mode
    source = fopen(sourceFile, "r");
    if (source == NULL) {
        printf("Error opening source file.\n");
        return 1;
    }

    // Open destination file in write mode
    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error opening destination file.\n");
        fclose(source);
        return 1;
    }

    // Copy content from source to destination
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
    }

    // Close both files
    fclose(source);
    fclose(dest);

    printf("File copied successfully to %s\n", destFile);
    return 0;
}
