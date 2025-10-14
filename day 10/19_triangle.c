//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include<stdio.h>
int main()
{
    int s1,s2,s3;
    printf("Enter side 1 :");
    scanf("%d",&s1);
    printf("Enter side 2 :");
    scanf("%d",&s2);
    printf("Enter side 3 :");
    scanf("%d",&s3);
    if (s1==s2&&s1==s3)
    {
        printf("The triangle is a equilateral triangle");
    }
    else if (s1==s2 && s1!=s3)
    {
        printf("The triangle is a isosceles triangle");
    }
    else if (s1==s3 && s1!=s2)
    {
        printf("The triangle is a isosceles triangle");
    }
    else if (s2==s3 && s2!=s1)
    {
        printf("The triangle is a isosceles triangle");
    }
    else 
    {
        printf("The triangle is a scalene triangle");
    }
    return 0;
    

}