// Que: show n times fibonakki numbers using function

#include <stdio.h>
int fib(int n1, int n2)
{
    for (int i = 3; i <= 10; i++)
    {

        int n3 = n1 + n2;
        printf("%d ", n3);

        n1 = n2;
        n2 = n3;
    }
}

void victory()
{
    printf("\nAzadi");
}

int main()
{
    int n1 = 0, n2 = 1;

    printf("%d %d ", n1, n2);
    fib(n1, n2);

    victory();
}
