
//  string is an array, char type array)

#include <stdio.h>

int main()
{

    char a1[6]; // hello consists of 5 characters,, you should take 6 index.
    a1[0] = 'H';
    a1[1] = 'e';
    a1[2] = 'l';
    a1[3] = 'l'; 
    a1[4] = 'o';
    a1[5] = '\0';

    char a2[] = {'W', 'o', 'r', 'l', 'd', '!', '\0'};
    char a3[] = "Sadik Al Mozahid"; //  Consists of 16 characters,, this array will take 17 index automatically (1 index for null char).

    printf("%s\n%s\n%s\n", a1, a2, a3);

    //-------input, output-----------

    /*
     there are 3 ways to take input :
       1) take every character separetly => 2 loops needed
       2) take input without whitespace => %s
       3) take input with whitespace => fgets (jkn \n press krbe tkn se \n input nie porer line e cole jabe)
    */

    char a4[30];
    scanf("%s", a4); 
    // gets(a4);  
    printf("%s", a4);

    //-------get output using loop-----------

    printf("Get output using loop\n");

    char a5[] = "Abdullah";

    int i = 0;
    while (i < 17)
    {
        printf("%c", a3[i]);
        i++;
    }

    /* a[8] = '\0' ,, but for '\0', the ASCII value is 0, which is a non-printable character.
     so a[8] doesn't produce any visible output. */
     
    printf("\n");

    int i = 0;
    for (; a5[i] != '\0';)
    {
        printf("%c", a5[i]);
        i++;
    }
}

/* 
    scanf() => space, tab dkle segulo buffer e patie dibe & '\0' bosabe. '\0' bosano manei string ta okhanei sesh.
    gets()  => space , tab dkle stop hbena. shudu \n dile \n k \0 banie dei. trpr string sesh.
*/

