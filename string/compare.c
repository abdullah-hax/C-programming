
/* #include <stdio.h>

int main() {
    char s1[] = "hello";
    char s2[] = "hello";

    if (s1 == s2)  // ❌ WRONG! Compares addresses, not contents
        printf("Strings are equal\n");
    else
        printf("Strings are NOT equal\n");

    return 0;
}
Output: Strings are NOT equal */


//------------------------------------string compare--------------------------------------

#include <stdio.h>

int main()
{
    char str1[] = "Abdullah";
    char str2[] = "Abdullahh";

    int i = 0;
    while (str1[i] != '\0' || str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            printf("not equal");
            return 0;
        }

        i++;
    }

    printf("equal");

    return 0;
}

//------------with strcmp()-----------

// strcmp(a1, a2)
