#include <stdio.h>
void add(int a, int b)
{
    printf("%d\n", a + b); // Output ekan tekei paoa jabe
}
void sub(int a, int b, int c)
{
    printf("\n%d", a - b - c); // Output ekan tekei paoa jabe
}
int main()
{
    add(5, 4);
    add(2, 1);
    add(100, 4);

    sub(8, 7, 3);
    sub(20, 6, 4);
}