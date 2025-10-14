//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include<stdio.h>
int main()
{
    int s, hrs, min, sec, time;
    printf("Enter time in seconds :");
    scanf("%d", &s);
    hrs = s / 3600;
    min = (s % 3600)/60;
    sec = min % 60;
    printf("%d:%d:%d", hrs, min, sec );

}