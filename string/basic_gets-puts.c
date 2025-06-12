#include <stdio.h>
int main()
{
    char p[15] = "hello world";

    printf("%s\n", p);
    printf("%.6s\n", p);
    printf("%7.5s\n", p);
    puts(p); //  puts() auto new line e nie jai.

    printf("Input a name : ");

    scanf("%s", p);
    puts(p);

    // getchar();

    char r[15];
    gets(r);
    printf("%s\n", r); // no output
}

/*

  note : scanf() erpr kkno gets()/fgets() deya jabena, bcz scanf() buffer e \n pathabe & then gets()/fgets() buffer teke seta nie nibe.
        scanf()-gets() / scanf()-fgets() er majhe getchar() dite hbe jeno buffer teke \n ta getchar() nie nei.
*/

