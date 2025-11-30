#include <stdio.h>
#include <math.h>

int main() {
    int n, first, last, digits, swapped;
    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;  // last digit
    digits = (int)log10(n);  // number of digits - 1
    first = n / (int)pow(10, digits);  // first digit

    // Remove first digit
    int middle = n % (int)pow(10, digits);
    middle = middle / 10;  // remove last digit

    // Construct swapped number
    swapped = last * (int)pow(10, digits) + middle * 10 + first;

    printf("Swapped number: %d\n", swapped);
    return 0;
}
