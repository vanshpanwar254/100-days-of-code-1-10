#include <stdio.h>

int main() {
    FILE *fp;
    char line[200];

    // Open the file in read mode
    fp = fopen("info.txt", "r");

    // Check if file exists or not
    if (fp == NULL) {
        printf("Error: Could not open the file.\n");
        return 1;
    }

    // Read file line by line till EOF
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    // Close the file
    fclose(fp);

    return 0;
}
