//
#include<stdio.h>
int main()
{
    int year;
    printf("Enter year");
    scanf("%d", &year);
    if(year%4==0)
    {
        printf("year %d is leap year", year);
    }
    else
    {
        printf("year is not a leap year");
        
    }
}