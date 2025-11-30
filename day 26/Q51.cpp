#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {             // outer loop for rows
        for (int s = rows - i; s > 0; s--) {      // spaces before numbers
            printf(" ");
        }
        for (int j = rows - i + 1; j <= rows; j++) { // numbers
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
