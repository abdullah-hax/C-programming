/*

https://codeforces.com/problemset/problem/281/A

declare str[1001]

scanf(str)

if str[0] > 90
 str[0] = str[0] - 32

printf(str)

*/

#include <stdio.h>

int main()
{
    char str[1001];
    scanf("%s", str);

    // if(str[0] >= 'a' && str[0] <= 'z') (safer check)  or,

    if (str[0] > 90)
    {
        str[0] = str[0] - 32;
    }

    printf("%s", str);
    return 0;
}

// Note: Capital letter er ASCII value'r range 65-90.
//       er ceye boro hole small letter.