// #include <stdio.h>
// int main()
// {
//     float id, bill, unit;
//     char name;
//     printf("customer id no:\n");
//     scanf("%f", &id);
//     printf("customer name:\n");
//     scanf(" %c", &name);
//     printf("unit consumed:\n");
//     scanf("%f", &unit);

//     {
//         if (unit <= 199 && unit >= 0)
//             bill = unit * 1.2;
//         else if (unit >= 200 && unit < 400)
//             bill = unit * 1.5;
//         else if (unit >= 400 && unit < 600)
//             bill = unit * 1.8;
//         else if (unit >= 600)
//             bill = unit * 2;
//     }
//     // amount charged @2.00 tk per unit:%f

//     if (bill < 100)
//     {
//         printf("100\n");
//     }
//     else
//         printf("%f\n", bill);
//     if (bill > 400)
//     {
//         printf("%f", bill + bill * .15);
//     }
// }

#include <stdio.h>
int main()
{
    float id, bill, unit;
    char name;
    
    printf("customer id no:\n");
    scanf("%f", &id);
    printf("customer name:\n");
    scanf(" %c", &name);
    printf("unit consumed:\n");
    scanf("%f", &unit);

    if (unit <= 199 && unit >= 0)
        bill = unit * 1.2;
    else if (unit >= 200 && unit < 400)
        bill = 199 * 1.2 + (unit - 199) * 1.5;
    else if (unit >= 400 && unit < 600)
        bill = 199 * 1.2 + 200 * 1.5 + (unit - 200 - 199) * 1.8;
    else if (unit >= 600)
        bill = 199 * 1.2 + 200 * 1.5 + 200 * 1.8 + (unit - 200 - 200 - 199) * 2;
    // amount charged @2.00 tk per unit:%f

    if (bill < 100)
        printf("100\n");
    else
        printf("%f\n", bill);
    if (bill > 400)
        printf("%f", bill + bill * .15);
}