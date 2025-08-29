// prime by function

#include <stdio.h>

int prime(int a)
{
    if (a < 2)
        return 1;
    else
    {
        for (int i = 2; i <= a / 2; i++)
        {
            if (a % i == 0)
                return 1;
        }
        return 0;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    
    int call = prime(n);
    if (call)
        printf("non prime");
    else
        printf("prime");
}