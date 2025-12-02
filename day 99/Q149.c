#include <stdio.h>
int main() {

    char ch;
    scanf(" %c", &ch);
    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase alphabet.\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase alphabet.\n", ch);
    } else if (ch >= '0' && ch <= '9') {
        printf("Digit.\n", ch);
    } else {
        printf("Special character.\n", ch);
    }
    return 0;
}

