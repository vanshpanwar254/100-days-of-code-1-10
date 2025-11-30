#include <stdio.h>

int main() {
    int rows = 5, cols = 5;

    for (int i = 1; i <= rows; i++) {        // outer loop for rows
        for (int j = 1; j <= cols; j++) {    // inner loop for columns
            printf("*");
        }
        printf("\n"); // move to next line
    }

    return 0;
}
