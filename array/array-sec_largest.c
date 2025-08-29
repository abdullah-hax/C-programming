// Que : take input some numbers , show output of largest & second largest of those numbers


#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n], i, lar, sec_lar;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    
    if (a[0] > a[1])
    {
        lar = a[0];
        sec_lar = a[1];
    }
    else
    {
        lar = a[1];
        sec_lar = a[0];
    }

    for (i = 2; i < n; i++)
    {
        if (a[i] > lar)
        {
            sec_lar = lar; // sec_lar k must age likte hbe
            lar = a[i];
        }
        else
        {
            if ((a[i] > sec_lar) && (a[i] != lar))
            {
                sec_lar = a[i];
            }
        }
    }
    printf("Largest is %d \nSecond largest is %d", lar, sec_lar);
}

// Test input : 13 5 16 3 14