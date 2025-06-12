// Que : take a value as input & show its factorial (use function)

#include <stdio.h>

int fact(int n)
{
    if (n == 1 || n == 0)
        return 1;
    else
    {
        return n * fact(n - 1);
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int res = fact(n);
    printf("%d", res);
}




// for long number like 20!, use long long (%lld)

/*

#include <stdio.h>

long long fact(int n)
{
    if (n == 1 || n == 0)
        return 1;
    else
    {
        return n * fact(n - 1);
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    long long res = fact(n);
    printf("%lld", res);
}


*/
