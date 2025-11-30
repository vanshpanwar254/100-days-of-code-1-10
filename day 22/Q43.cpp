#include <stdio.h>

int main() {
    int n, temp, digit, sum = 0, fact;
    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    while (temp > 0) {
        digit = temp % 10;  // extract digit
        fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;  // factorial of digit
        }
        sum += fact;
        temp /= 10;  // move to next digit
    }

    if (sum == n)
        printf("%d is a Strong Number\n", n);
    else
        printf("%d is NOT a Strong Number\n", n);

    return 0;
}
