#include <stdio.h>
int main()
{
    int i, j, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {

        for (int k = 1; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    // for inverted triangle, change only the loop which generates row

    for (i = n; i >= 1; i--)
    {

        for (int k = 1; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}

// note: to make the pyramid more beautiful just reduce 1 row,, for(row = n - 1; ......)