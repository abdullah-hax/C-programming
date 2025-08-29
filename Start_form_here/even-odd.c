#include <stdio.h>
int main()
{
    int x, a = 0;
    scanf("%d", &x);

    if (x == 0)
        printf("it is confusing");
    else if (x % 2 == 0)
        printf("even number\n");
    else
        printf("odd number");
    return 0;
}
