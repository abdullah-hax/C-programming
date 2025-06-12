// Que : take some numbers as input , show largest value of those numbers

// Recommended

#include <stdio.h>

int main()
{
    int a[5], i, lar;

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    if (a[0] > a[1])
    {
        lar = a[0];
    }
    else
        lar = a[1];

    for (i = 2; i < 5; i++)
    {
        if (a[i] > lar)
        {
            lar = a[i];
        }
    }

    printf("%d", lar);
}



// Alternative
/*

#include <stdio.h>
int main()
{
    int i, n;
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int largest = a[0];

    for (i = 1; i < n; i++)
    {
        if (a[i] > largest)
        {
            largest = a[i];
        }
    }

    printf("%d", largest);
}

*/

