// Que: take some value as input & show which are the prime numbers and their addition

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], i, sum = 0;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("The prime numbers is : ");
    for (i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 2; j <= a[i] / 2; j++) // 0,1,2,3 ei loop e duktei parbena
        {
            if (a[i] % j == 0)
            {
                count++;
                break;
            }
        }
        if (a[i] < 2)
        {
            continue;
        }
        if (count)
        {
            continue;
        }
        else
        {
            printf("%d ", a[i]);
            sum = sum + a[i];
        }
    }
    printf("\nAddition is : %d", sum);
}
