//Write a program to input two numbers and display their sum, difference, product, and quotient.

#include<stdio.h>
int main()
{
    int a, b;
    printf("enter first number: ");
    scanf("%d", &a);
    printf("enter second number: ");
    scanf("%d", &b);
    printf("sum = %d\n", a + b);
    printf("difference = %d\n", a - b);
    printf("product = %d\n", a * b);
    printf("quotient = %d\n", a / b);
    return 0;
}
