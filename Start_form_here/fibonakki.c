// Que: show n times fibonakki numbers

#include <stdio.h>
int main()
{
    int n1 = 0, n2 = 1, n3, n;
    scanf("%d", &n);

    printf("%d\t%d", n1, n2);

    for (int i = 3; i <= n; i++)
    {
        n3 = n1 + n2;

        printf("\t%d", n3);

        n1 = n2;
        n2 = n3;
    }
}


