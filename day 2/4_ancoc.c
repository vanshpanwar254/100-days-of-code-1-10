//Write a program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>
int main()
{
    float r;
    scanf("%f", &r);
    float area, circumference;
    area= 3.1415 * r * r;
    circumference = 2 * 3.1415 * r;
    printf("area = %.2f\n", area);
    printf("circumference = %.2f\n", circumference);
    return 0;
    
}