#include <stdio.h>

int main() {
    char filename[100];
    FILE *fp;
    char ch;

    // Ask user for filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Try to open file in read mode
    fp = fopen(filename, "r");

    // Check if file exists
    if (fp == NULL) {
        printf("Error: Cannot open file %s\n", filename);
        return 1;
    }

    // Display file content
    printf("\n--- File Content ---\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    // Close file
    fclose(fp);
    return 0;
}
