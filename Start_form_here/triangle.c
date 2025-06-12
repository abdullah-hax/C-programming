#include <stdio.h>

int main()
{
    float a, b, c;

    // Input the arms of the triangle
    printf("Enter the three arms of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Check for valid triangle first
    if (a + b > c && b + c > a && c + a > b)
    {
        if (a == b && b == c)
        {
            printf("The triangle is Equilateral.\n");
        }
        else if (a == b || b == c || c == a)
        {
            printf("The triangle is Isosceles.\n");
        }
        else
        {
            printf("The triangle is Scalene.\n");
        }
    }
    else
    {
        printf("Invalid triangle.\n");
    }

    return 0;
}
