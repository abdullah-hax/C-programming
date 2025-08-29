#include <stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int *ptr, i;
    ptr = &a[0]; // address of 0th index
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *ptr); // valure at address ptr = a[0]
        ptr++;
    }
}