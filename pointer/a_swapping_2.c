#include <stdio.h>
int main()
{
    int a = 10, b = 20;
    int *p1 = &a, *p2 = &b;

    printf("before : %d  %d", a, b);
    printf("\nbefore : %p  %p", p1, p2);

    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("\n\nafter : %d  %d", a, b);
    printf("\nafter : %p  %p", p1, p2);
}

/*Output :
    before : 10  20
    before : 0061FF10  0061FF0C

    after : 20  10
    after : 0061FF10  0061FF0C
*/