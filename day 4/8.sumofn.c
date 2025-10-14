//Write a program to find and display the sum of the first n natural numbers.
#include<stdio.h>
int main()
{
    //Sum of n natural numbers = n(n+1)/2
    int n, sum;
    printf("Enter a natural number: ");
    scanf("%d", &n);
    sum = n * (n + 1) / 2;
    printf("sum = %d\n", sum);
    return 0;
  
}