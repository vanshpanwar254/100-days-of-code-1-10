#include <stdio.h>

int main() {
    int n, temp, remainder;
    long long binary = 0, revBinary = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    // Step 1: Build binary in reverse
    while (temp > 0) {
        remainder = temp % 2;
        binary = binary * 10 + remainder;
        temp = temp / 2;
    }

    // Step 2: Reverse the binary number to correct it
    while (binary > 0) {
        revBinary = revBinary * 10 + (binary % 10);
        binary = binary / 10;
    }

    printf("Binary representation of %d = %lld\n", n, revBinary);

    return 0;
}
