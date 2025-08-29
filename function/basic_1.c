

#include <stdio.h>
int sum(int a, int b)
{

    int c = a + b;
    return c;
}
int main()
{
    int result = sum(5, 6);
    printf("%d", result);
    
    result = sum(10, 7);
    printf("\n%d", result);

    printf("\n\n%d", sum(2, 2));
    printf("\n%d", sum(5, 1));

    printf("\n\n%d %d", sum(200, 300), sum(100, 50));
}

