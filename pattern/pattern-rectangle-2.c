#include <stdio.h>
int main()
{
    int r, c, row, col;
    printf("inter the row & col: \n");

    scanf("%d\t%d", &row, &col);
    for (c = 1; c <= col; c++)
    {
        printf("*");
    }
    printf("\n");
    for (r = 1; r <= (row - 2); r++)
    {
        printf("*");
        for (c = 1; c <= (col - 2); c++)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    for (c = 1; c <= col; c++)
    {
        printf("*");
    }
}



//---- more efficient code ----

/* #include <stdio.h>

int main()
{
    int r, c, row, col;
    printf("inter the row & col: \n");
    scanf("%d\t%d", &row, &col);

    for (r = 1; r <= row; r++)
    {
        for (c = 1; c <= col; c++)
        {
            if (r == 1 || r == row || c == 1 || c == col)
            {
                // Print star for 1st and last row, column
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
    
*/