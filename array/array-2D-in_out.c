// Que : take input & print output of 2D array

/*

#include <stdio.h>
int main()
{
    int a[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
    };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", a[i][j]);
        }

        printf("\n");
    }
}

*/

#include <stdio.h>
int main()
{
    int a[2][5], i, j;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }

        printf("\n");
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d ", a[i][j]);
        }

        printf("\n");
    }
}