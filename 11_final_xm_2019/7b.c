#include <stdio.h>

int main() {
    char string[] = "HELLO WORLD";
    for (int m = 0; string[m] = '\0'; m++) {
        if (m % 2 == 0)
            printf("%c", string[m]);
    }

    return 0;
}

/*
  string[m] = '\0' eta condition noi , eta assignment
     -> string[0] = 'H' er jaigai '\0' bosbe
     -> In C, '\0' treats as false in a loop condition in a boolean context.
     -> condition false houai loop ta ar kkno colbena
     
*/

#include <stdio.h>

int main() {
    char string[] = "HELLO WORLD";
    for (int m = 0; string[m] == '\0'; m++) {
        if (m % 2 == 0)
            printf("%c", string[m]);
    }

    return 0;
}

// string[0] jehetu '\0' noi tai condition false, so loop colbena.


#include <stdio.h>

int main() {
    char string[] = "HELLO WORLD";
    for (int m = 0; string[m] != '\0'; m++) {
        if (m % 2 == 0)
            printf("%c", string[m]);
    }

    return 0;
}

// Output : HLOWRD

//   H E L L O   W O R L D \0
//   0 1 2 3 4 5 6 7 8 9 10 11