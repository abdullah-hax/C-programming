// Que : take some numbers as input , show reverse output of those numbers

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n], i, temp;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int j = n - 1, i = 0; i < j; j--, i++)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    /*
    ------ or (consume extra time) ------

    int b[n];
    for (int j = 0, i = n - 1; i >= 0; j++, i--)
    {
        b[j] = a[i];
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }

    ------ or (without logic) ------

    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
    
    */
    
    return 0;
}

// if index start with 0 then
// for odd, middle index= normal middle( (n+1)/2 ) - 1
// for even, middle index= normal middle ( (n/2 + n/2+1)/2 ) - 1  (But this is fractional, so we typically don't use a "middle index" for even n)
