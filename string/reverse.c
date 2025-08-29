//--------------------------------str reverse-------------------------------------------------------

#include <stdio.h>
int main()
{
    char a1[] = "Abdullah";
    char a2[30];

    int i = 0, len = 0;
    while (a1[i] != '\0')
    {
        len++;
        i++;
    }
  // long way-------
    printf("long way :\n");

    i = 0;
    int j = len - 1;

    for (; j >= 0; i++, j--)
    {
        a2[i] = a1[j];
    }
    a2[i] = '\0';

    printf("%s\n%s\n", a1, a2);

  // efficient way-----
    printf("efficient way : ");

    char a3[] = "Abdullah";

    for (i = 0, j = len - 1; i < j; i++, j--)
    {
        int temp = a3[i];
        a3[i] = a3[j];
        a3[j] = temp;
    }
    // a3[len] = '\0';    XXX (The line a3[len] = '\0'; is unnecessary since a is already a null-terminated string.)

    printf("%s\n", a3);

    /*  1. extra array declare krte hoina ja memory efficient.
        2. ekta new array te elements copy korar ceye eki array te swap kora faster
        3. loop km ghure, so fast. */

  // very shortcut----
    printf("very shortcut : ");

    char a4[] = "Abdullah";

    for (i = len - 1; i >= 0; i--)
    {
        printf("%c", a4[i]);
    }
    // a4[i] = '\0' ;     XXX (string print kora hoini , char print kora hoyece ,, tai null character lgbena.)
}

// with strrev()----
/*
#include <stdio.h>
#include<string.h>
int main()
{
    char str1[] = "Abdullah";

    strrev(str1);

    printf("%s\n", str1);
}
*/


/*

   C Standerd Library (string.h)  er functions : strlen(),strcmp(), strcat() & strcpy()
   strrev() is not included in C Standerd Library (string.h)

*/