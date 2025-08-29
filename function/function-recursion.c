//  Que: show sum of every digit of a number.

#include <stdio.h>

int sum(int n)
{
    if (n == 0)
        return 0;
    else
        return n % 10 + sum(n / 10);
}
int main()
{
    int n;
    scanf("%d", &n);

    int call = sum(n);
    printf("%d", call);
}