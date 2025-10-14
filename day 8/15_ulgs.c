//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include<stdio.h>
char main()
{
    char ch;
    printf("Enter any character: ");
    scanf(" %c", &ch);
    if (ch >= 'A' && ch <='Z')
    {
        printf("The entered alphabet is in uppercase");
    }
    else if (ch >= 'a' && ch <='z')
    {
        printf("The entered alphabet is in lowercase");
    }
    else if (ch >= '1' && ch <='9')
    {
        printf("The entered character is digit");
    }
    else
    {
        printf("The entered character is a special character");
    }
    
}
