//Write a program to display the day of the week based on a number (1–7) using switch-case.
#include<stdio.h>
int main()
{
    char operator;
    printf("Enter the day of the week :");
    scanf(" %c",&operator);
    switch(operator)
    {
    case '1':
        printf("Its monday");
        break;

    case '2':
        printf("Its tuesday");
        break;
    
    case '3':
        printf("Its wednesday");
        break;        
    
    case '4':
        printf("Its thursday");
        break;
    
    case '5':
        printf("Its friday");
        break;

    case '6':
        printf("Its saturday");
        break;
    
    case '7':
        printf("Its sunday");
        break;
    
    default: 
        printf("invalid prompt");
    break;
}
return 0;
}