/*
Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram
Explanation 1:
The strings contain the same characters with the same frequencies.
Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram
Explanation 2:
The strings do not contain the same characters.
*/
#include <stdio.h>
#include <string.h>
int main(){
    char s[100], t[100];
    int count[26] = {0};
    int i;

    // Input two strings
    printf("Enter first string: ");
    scanf("%s", s);
    printf("Enter second string: ");
    scanf("%s", t);

    // If lengths are different, they cannot be anagrams
    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }

    // Count frequency of each character in both strings
    for (i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    // Check if all counts are zero
    for (i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
