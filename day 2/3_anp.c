//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include<stdio.h>
int main()
{
    int l, b;
    scanf("%d%d", &l, &b);
    printf("area = %d\n", l * b);
    printf("perimeter = %d\n", 2 * (l + b));
    return 0;
    
}
