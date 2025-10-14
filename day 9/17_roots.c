//Write a program to find the roots of a quadratic equation and categorize them.
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,xa,xb;
    printf("Enter value of a :");   
    scanf("%f", &a);
    printf("Enter value of b :");   
    scanf("%f", &b);                
    printf("Enter value of c :");
    scanf("%f", &c);
    xa=-(b-(sqrt((b*b)-4*a*c)))/2*a;
    xb=-(b+(sqrt((b*b)-4*a*c)))/2*a;
    printf("The roots are : %f and %f\n ", xa, xb);
    if ((b*b)-4*a*c<=1)
    {
        printf("the roots are real and different");
    }
    else if ((b*b)-4*a*c==0)
    {
        printf("the roots are real and same");
    }
    else
    printf("the roots are complex");

return 0;

}