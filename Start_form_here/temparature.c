//  Formula : C/5 = (F - 32)/9


#include <stdio.h>

int main()
{
    float C, F;
    printf("Enter the celcious: ");
    scanf("%f", &C);

    F = 9 * C / 5 + 32;

    printf("Farenhit: %f\n", F);
    return 0;
}
