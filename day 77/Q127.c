#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fin, *fout;
    int ch;

    // Open input and output files
    fin = fopen("input.txt", "r");
    fout = fopen("output.txt", "w");

    if (fin == NULL || fout == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    // Read each character, convert to uppercase, write to output file
    while ((ch = fgetc(fin)) != EOF) {
        if (islower(ch)) {
            ch = toupper(ch);
        }
        fputc(ch, fout);
    }

    // Close files
    fclose(fin);
    fclose(fout);

    printf("Conversion complete. Check output.txt\n");

    return 0;
}

