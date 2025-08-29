

#include <stdio.h>
int main()
{
    int a[5][5] = {
        {8, 3, 9, 0, 10},
        {3, 5, 17, 1, 1},
        {2, 8, 6, 23, 1},
        {15, 7, 3, 2, 9},
        {6, 14, 2, 6, 0}};

    int i, j, k, rowTotal[5], colTotal[5], sum;

    // find row total
    for (i = 0, k = 0; i < 5, k < 5; i++, k++)
    {

        sum = 0;
        for (j = 0; j < 5; j++)
        {
            sum = sum + a[i][j];
        }
        rowTotal[k] = sum;
    }

    // find column total
    for (j = 0, k = 0; j < 5, k < 5; j++, k++)
    {

        sum = 0;
        for (i = 0; i < 5; i++)
        {
            sum = sum + a[i][j];
        }
        colTotal[k] = sum;
    }

    // print row total
    for (i = 0; i < 5; i++)
    {
        printf("%d ", rowTotal[i]);
    }
    printf("\n");

    // print column total
    for (i = 0; i < 5; i++)
    {
        printf("%d ", colTotal[i]);
    }
}