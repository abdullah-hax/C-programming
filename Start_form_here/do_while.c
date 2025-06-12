#include <stdio.h>

int main()
{

    {
        printf("Using for loop:\n");
        for (int i = 1; i < 0; i++) // conditionti i ke 1st value teke check kora shuru krbe
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    {
        printf("Using while loop:\n");
        int i = 1;
        while (i < 0) // conditionti i ke 1st value teke check kora shuru krbe
        {
            printf("%d ", i);
            i++;
        }
        printf("\n");
    }

    {
        printf("Using do-while loop:\n");
        int i = 1;
        do
        {
            printf("%d ", i);
            i++;
        } while (i < 0); // conditionti i ke '2nd value' teke check kora shuru krbe, tai i er value ekbar print hoye jabe.
        printf("\n");
    }

    return 0;
}
