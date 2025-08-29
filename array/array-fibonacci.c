// Que : Print n times fibonakki numbers by using array

#include <stdio.h>
int main()
{
    int a[3], n;
    scanf("%d", &n);

    a[0] = 0;
    a[1] = 1;

    if (n >= 1)
        printf("%d ", a[0]);
    if (n >= 2)
        printf("%d ", a[1]);

    for (int i = 3; i <= n; i++)
    {
        a[2] = a[0] + a[1];
        
        printf("%d ", a[2]);

        a[0] = a[1];
        a[1] = a[2];
    }
}
