#include <stdio.h>
int main()
{
    int n1 = 1, n2 = 1, n3, n;
    scanf("%d", &n);


    for (int i = 3; i <= n; i++)
    {
        n3 = n1 + n2;

        n1 = n2;
        n2 = n3;
    }

    printf("\n%d", n3);
}
