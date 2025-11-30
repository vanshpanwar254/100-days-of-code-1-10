#include <stdio.h>

int main() {
    long long bin, bit, rev = 0, onesComp = 0;

    printf("Enter a binary number: ");
    scanf("%lld", &bin);

    long long temp = bin;

    // Step 1: Build flipped bits in reverse order
    while (temp > 0) {
        bit = temp % 10;

        if (bit == 0)
            rev = rev * 10 + 1;
        else
            rev = rev * 10 + 0;

        temp = temp / 10;
    }

    // Step 2: Reverse again to get correct 1's complement
    while (rev > 0) {
        onesComp = onesComp * 10 + (rev % 10);
        rev = rev / 10;
    }

    printf("1's Complement = %lld\n", onesComp);

    return 0;
}
