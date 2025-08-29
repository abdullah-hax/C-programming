// Que: take 3 numbers as input & show which is largest

#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
        printf("%d is largest", a);
    else if (b > c && b > a)
        printf("%d is largest", b);
    else if (c > b && c > a)
        printf("%d is largest", c);
    else if (a == b && b == c && c == a)
        printf("all is equal");
    
}

// 3ta  if dile compilar 3ta condition check kre execute krbe,,
// jdi  'else if' than  'else' thake tahle 1st conditon true holei compiler ar 2nd, 3rd check krbena,, 1st condition false hole 2nd con. & 2nd con. false hole 3rd con. e jabe.




// more efficient code

/*

#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
        printf("%d is largest", a);
    else if (b > c && b > a)
        printf("%d is largest", b);
    else if (c > b && c > a)
        printf("%d is largest", c);
    else if (a == b && b == c && c == a)
        printf("all is equal");
    else if (a == b && a > c)
        printf("%d is largest", a);
    else if (b == c && b > a)
        printf("%d is largest", a);
    else if (c == a && c > b)
        printf("%d is largest", c);
}

*/