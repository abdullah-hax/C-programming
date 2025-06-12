// Que : take input of some numbers & show output of factorials of those numbers

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n], i;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        int f = 1;
        for (int j = a[i]; j >= 1; j--)
        {
            f = f * j;
        }
        printf("%d ", f);
    }
}

// 0 or 1 input dileo correct output asbe.