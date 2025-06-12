#include <stdio.h>
int main()
{
    int r, c, n;
    scanf("%d", &n);
    for (c = 1; c <= 5; c++)
    {
        printf("*");
    }
    printf("\n");
    for (r = 1; r <= (n - 2); r++)
    {
        printf("*   *\n");
    }
    for (c = 1; c <= 5; c++)
    {
        printf("*");
    }
}

