#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter number one:");
    scanf("%d", &num1);
    printf("Enter number two:");
    scanf("%d", &num2);
    if (num1-num2 > 0)
    {
        printf("number one is greater than number two");

    }
    else if (num1-num2==0)
    {
        printf("both numbers are equal");
    }
    else
    {
        printf("number two is greater than number one");

    }
    
    
    
}