#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, x1, x2;
    printf("Enter a b c : ");
    scanf("%lf %lf %lf", &a, &b, &c);

    int d = sqrt(b*b - 4*a*c);

    x1 = (-b + d)/(2*a);
    x1 = (-b - d)/(2*a);

    printf("x1 = %lf\nx2 = %lf\n", x1, x2);
    return 0;
}