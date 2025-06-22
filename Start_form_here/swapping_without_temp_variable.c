
#include <stdio.h>

int main()
{
    int C, D;
    scanf("%d %d", &C, &D);

    C = C + D;
    D = C - D;
    C = C - D;

    printf("After swapping: %d  %d", C, D);
    return 0;
}