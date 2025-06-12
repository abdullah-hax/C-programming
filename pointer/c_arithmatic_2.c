#include <stdio.h>
int main()
{

    int a[] = {1, 2, 3, 4, 5};
    int *ptr = a; // ptr = &a[0]

    *(ptr + 1) = 10; // *(ptr + 1) = a[0 + 1]
    *(ptr + 4) = 40;
    *(ptr + 2) = 20;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
}

// Output : 1 10 20 4 40




