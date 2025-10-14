#include<stdio.h>
int main()
{ int num;

    printf("enter the number of your choice : ");
    scanf("%d", &num);
    if (num % 2==0)
    {
        printf("this number is even");

    }
    else
    {
        printf("this number is odd");
    }
}