// Que: Show the numbers till n which are divisable by 7

#include <stdio.h>
int main()
{
    int i, n;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 7 == 0)
        {
            printf("%d\n", i);
        }
    }
}



// Alternative & fast

/*

#include <stdio.h>
int main()
{
    int i, n;
    scanf("%d", &n);

    for (i = 7; i <= n; i = i + 7)
        printf("%d ", i);
}

*/
