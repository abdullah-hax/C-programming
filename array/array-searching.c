// Que: take input some numbers, select any of those numbers & show output of the position of the number.

#include <stdio.h>
int main()
{
    int num[5] = {12, 23, 1, 45, 9};
    int value = 1;
    int pos = -3;  // It can be any negative number or 0
    for (int i = 0; i < 5; i++)
    {
        if (value == num[i])
        {
            pos = i + 1;
            break;
        }
    }
    if (pos == -3)
        printf("Not found");
    else
        printf("The position of value %d is '%d' ", value, pos);
}


/*
--------- for general use ----------

#include <stdio.h>
int main()
{
    int n;
    printf("How many numbers you want to input?: ");
    scanf("%d", &n);

    int num[n], i;
    printf("Input numbers: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    int value;
    printf("Enter the value you want to search the position: ");
    scanf("%d", &value);

    int pos = -1;

    for (i = 0; i < n; i++)
    {
        if (value == num[i])
        {
            pos = i + 1;
            break;
        }
    }
    
    if (pos == -1)
        printf("Not found");
    else
        printf("The position of value %d is '%d'", value, pos);
}

*/