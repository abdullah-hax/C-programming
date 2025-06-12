

#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                printf("%d %d %d\n", i, j, k);
                if (j == 3)
                    goto out;
            }
        }
    }
    out:    // this is lebel ,, lebel doesn't need to be declared.
    printf("Came out of the loop.");
}

// for j = 0 , k iterates 3 times ,
// for j = 1 , k iterates 3 times ,
// for j = 2 , k iterates 3 times ,
// for j = 3 , k iterates 1 times then goto will be executed.