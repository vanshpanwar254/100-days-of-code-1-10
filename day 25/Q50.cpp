#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {          // outer loop for rows
        for (int j = 1; j < i; j++) {          // inner loop for spaces
            printf(" ");
        }
        for (int k = rows; k >= i; k--) {      // inner loop for stars
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
