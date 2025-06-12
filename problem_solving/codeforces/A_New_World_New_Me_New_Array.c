#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r;
    scanf("%d", &r);
    int t, n[r], k[r], p[r], j, op;

    for (int i = 0; i < r; i++)
    {
        scanf("%d %d %d", &n[i], &k[i], &p[i]);
    }

    for (int i = 0; i < r; i++)
    {
        if (abs(k[i]) % p[i] == 0)
        {
            op = abs(k[i]) / p[i];
        }
        else
            op = abs(k[i]) / p[i] + 1;

        if (op <= n[i])
        {
            printf("\n%d", op);
        }
        else
        {
            printf("\n-1");
        }
    }
}
