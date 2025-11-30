#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {             // outer loop for rows
        for (int j = rows - i + 1; j <= rows; j++) { // inner loop for numbers
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
