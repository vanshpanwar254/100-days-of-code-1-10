#include <stdio.h>
int main(){
    FILE *file;
    char input[256];

    // Open the file in append mode
    file = fopen("data.txt", "a");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Get user input
    printf("Enter text to append: ");
    fgets(input, sizeof(input), stdin);

    // Append the input to the file
    fputs(input, file);

    // Close the file
    fclose(file);

    printf("File updated successfully with appended text.\n");
    return 0;
}
