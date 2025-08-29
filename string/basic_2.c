
/*
=== %s/string er characteristics ===

     *** 1D Array ***
      arr = &arr[0] = 0 থেকে n - 1 পর্যন্ত
           &arr[1] = 1 থেকে n - 1 পর্যন্ত
      strlen(arr) = strlen(&arr[0]) => 0 থেকে n - 1 পর্যন্ত length

     *** 2D Array ***
      arr = &arr[0][0] = 0th line এর 0 থেকে n - 1 পর্যন্ত
      arr[3] = &arr[3][0] = 3th line এর 0 থেকে n - 1 পর্যন্ত
              &arr[2][3] = 2th line এর 3 থেকে n - 1 পর্যন্ত
      strlen(arr[3]) = strlen(&arr[3][0]) => 3th line এর 0 থেকে n - 1 পর্যন্ত length

*/

//---------------------------------------------------------------------------------------

// ❗%s er jnno printf e must & use krte hbe -> printf("%s", &arr[3]);

//----------------------------------------------------------------------------------------

#include <stdio.h>

int main()
{
    int arr[20];
    int i;

    printf("Write 5 numbers : ");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("index 3 : %d\n", arr[3]); // generally printf e & use kora jaina

    //------but %s(scanf/printf), fgets() & gets() এই ৩ টাতে must & দিতে হবে ------//

    char str[3][101] = {"Abdullah",
                        "Hello",
                        "World"};

    for (i = 0; i < 3; i++)
    {
        printf("%s\n", str[i]); // &str[i][0]  => 0 to n-1 of of i th line
    }

    printf("&str[1][2] : %s\n", &str[1][2]); // => 3 to n-1 of 2 th line

    printf("Write a name : ");

    char hello[20];
    scanf("%s", hello);  // &hello[0]
    printf("%s", hello); // &hello[0]

    return 0;
}

//-------------------------- basic ----------------------------------------------

/* 
    1) "H" > compiler etake pointer hisebe deke
      'H' > compiler etake integer(ASCII code) hisebe deke.
    2) printf("\n"); > pointer
       printf('\n'); > integer (ASCII code)
    3) array er name first index er address mean kore
       str[10]; ekane str = &str[0] (eta array er charactaristics)

*/
