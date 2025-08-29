/*

     # let, p = a er pointer(ortat address) = r-15 (ortat ram er 15 no. cell)
               => so, *p = value at address p (or, value at adress a)
                         = value at address 15 (suppose it is 20) or value at r-15
                         = a (direct a)

*/

#include <stdio.h>
int main()
{
    int a = 10, b = 20, temp;
    int *p1, *p2;
    p1 = &a;
    p2 = &b;

    // swapping
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("%d   %d", *p1, *p2);
}

//--- with funtion ---

/*

#include <stdio.h>
void swap( int *p1, int *p2)
{
   int  temp = *p1;
    *p1 = *p2;
    *p2 = temp;

}

int main()
{
    int a = 10, b =20;
    swap(&a, &b);
   printf("%d  %d", a, b);

}

*/