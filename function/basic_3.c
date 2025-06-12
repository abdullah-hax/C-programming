
#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    int result = sum(n1, n2);

    printf("%d", result);

    int k1, k2;
    scanf("%d %d", &k1, &k2);

    printf("%d", sum(k1, k2));
}