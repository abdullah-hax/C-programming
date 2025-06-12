#include <stdio.h>
int main()
{

    int a[] = {1, 2, 3, 4, 5};
    int *ptr = a; // ptr &a[0]
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(ptr + i)); //   ptr + i = &a[0 + i],  *(ptr + i) = a[0 + i]
        printf("%d ", *ptr);

        printf("\n");
        ptr++;
    }
}