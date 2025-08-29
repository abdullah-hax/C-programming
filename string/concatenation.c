//--------------------------------string concatenation( jura lagano )---------------------------------------
#include <stdio.h>
int main()
{
    char str1[30] = "Abdullah"; // 8 characters + null character = 9 characters/ 9 index (9 bytes)
    char str2[] = " Al Mamun";  //  Abdullah = 8 characters = last char(h) er index 7
                                
    int i = 0;
    int j = 0, len = 0;
    while (str1[i] != '\0')
    {
        len++;
        i++;
    }

    while (str2[j] != '\0')
    {
        str1[len + j] = str2[j];
        j++;
    }
    str1[len + j] = '\0';

    printf("%s\n", str1);
}
// Ensure destination is large enough to hold source + \0 (null terminator)

// with library function------

#include <stdio.h>
#include <string.h>
int main()
{
    char destination[30] = "Abdullah";
    char source[] = "bin AR";

    strcat(destination, source);
    printf("%s\n", destination);
}


//  Ensure destination is large enough to hold source + \0 (null terminator)
//  source copy hoye destination e jabe

/*
strcat(destination, "bin AR");
strcat(destination, "t")
strcat(destination, 't') XXX
*/