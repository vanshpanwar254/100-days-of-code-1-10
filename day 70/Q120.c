/*
Write a program to take a string input. Change it to sentence case.
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic
Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.
Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int capitalizeNext = 1;

    for(int i = 0; str[i] != '\0'; i++) {
        if(isspace(str[i])) {
            capitalizeNext = 1; 
        } else if(capitalizeNext && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            capitalizeNext = 0; 
        } else {
            str[i] = tolower(str[i]); // Convert to lowercase
        }
    }

    printf("Converted string: %s", str);
    return 0;
}
