#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 1; i <= 4; i++) // outer loop
    {
        for (j = 1; j <= 3; j++) // middle loop (outer loop er under e 3 bar kore execute hbe, total 12 bar)
        {
            for (k = 1; k <= 2; k++) // inner loop (middle loop er under e 2 bar kore execute hbe, total 12x2=24)
            {
                printf("%d  ", k);
            }
        }
        printf("\n");
    }
}

// If I add a new line in the outer loop, there will be 4 rows,
// If I add a new line in the middle loop, there will be 4x3=12 rows,
// If I add a new line in the inner loop, there will be 4x3x2=24 rows