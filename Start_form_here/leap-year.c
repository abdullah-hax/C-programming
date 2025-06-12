#include <stdio.h>
int main()
{
    int yr;
    scanf("%d", &yr);

    if (yr % 400 == 0 || (yr % 4 == 0 && yr % 100 != 0))
        printf("Leap yrear");
    else
        printf("Not leap year");
    return 0;
}

/*

#include <stdio.h>
int main()
{
    int yr;
    scanf("%d", &yr);

    if (yr % 400 == 0)
        printf("Leap yrear");
    else if (yr % 4 == 0 && yr % 100 != 0)
        printf("Leap yrear");
    else
        printf("Not leap year");
    return 0;
}

*/
