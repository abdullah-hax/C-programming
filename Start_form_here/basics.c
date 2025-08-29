
//-- -- -- -- -- -- -- -- -- -(Basics)-- -- -- -- -- -- -- -- -- --

// num 1 -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --

#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 0, j = 0, k = 0; i < 4, k < 8, j < 10; i++)
    {
        printf("%d %d %d\n", i, j, k);
        j += 2;
        k += 3;
    }
}

/* note: according to condition i execute hbe 4 bar, j execute hbe 5 bar, k hbe 3 bar.
so, overall condition ta true hbe 5 bar ortat 5 bar execute hbe */

// num 2 -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --

#include <stdio.h>
int main()
{
    int i = 0, j = 2;
    for (i = 0; i < 5; i++, j = j + 2)
    {
        printf("%d %d\n", i, j);
    }
}

// num 3 -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -

#include <stdio.h>
int main()
{
    int x, y;
    x = 10;
    for (y = 10; y != x; ++y)
    {
        printf("%d", y);
    }
    printf("%d", y);
}

// num 4 -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -

#include <stdio.h>
int main()
{
    int i, s = 0;
    for (i = 1; i <= 100; i++)
    {
        s = s + i;
    }
    printf("%d\n", s);
    printf("%d", i);
}

// num 5 -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -

#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 10; i++)
        ;
    {
        printf("%d\n", i);
    }
    printf("ki obsta brother?");
}

#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 10; i++)
        ;
    {
        printf("%d\n", i);
    }
    printf("ki obsta brother?");
}

// num 6 -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -

// n=0> n er modde 0 raka hoyece so n er value programm er suru teke 0 count hbe
// n==0> eta ekta condition, jdi n er valur 0 hoi tahle execute krbe or not > if(n%2==0) printf("....");
//                                                                          > if (n==0) printf()
/////ortat n==0 dile 0 hoteo pare abr nao hte pare. but n=0 dile must 0 hbe/////

// num 7 -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --
//  Block এর সাইন হল {} (কোর্স ব্রেসেস বা curly braces)।
//  same block e eker odik new i declare krte parbena ,, vinno vinno block e bar bar new i declare krte parbe.

int main()
{
    int j;
    {
        int j = 1; // এই j নতুন একটা variable (কারণ আলাদাভাবে ডিক্লেয়ার করা হয়েছে), এর সাথে বাহিরের j এর কোনো সম্পর্ক নেই
        while (j <= 10)
        {
            printf("%d ", j);
            j = j + 2;
        }
    }
    printf("\n%d", j); // undefined,, garbage value print করবে। কারণ initialize করা হয়নি।
}
// output: 1 3 5 7 9
//         garbage value

int main()
{
    int j;
    {
        j = 1; // এটা কিন্তু বাহিরের j-ই , নতুন varible না।
        while (j <= 10)
        {
            printf("%d", j);
            j = j + 2;
        }
    }
    printf("\n%d", j); // বাহিরের j প্রিন্ট হবে, আর বাহিরের j এখন 11
}
// output: 1 3 5 7 9
//         11

int main()
{
    int j = 3; // বাহিরে j ডিক্লেয়ার করা হয়েছে এবং ইনিশিয়ালাইজ করা হয়েছে 3
    {
        int j = 1; // ভিতরের ব্লকে নতুন j ডিক্লেয়ার করা হয়েছে এবং ইনিশিয়ালাইজ করা হয়েছে 1
        while (j <= 10)
        {
            printf("%d", j); // ভিতরের j প্রিন্ট হবে
            j = j + 2;       // ভিতরের j এর মান 2 করে বাড়ানো হবে
        }
    }
    printf("\n%d", j); // বাইরের j প্রিন্ট হবে
}
// output: 1 3 5 7 9
//         3

// num 8 -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -

// 1.
int main()
{
    int x = 1, y = 2, z = 3;
    printf("%d %d %d", x + y * z, ++x, z--);
    // output: 7 2 3
}
// 2.
int main()
{
    int a = 3;
    int x = ++a; // a = 4
    int y = a--; // y = 4, a = 3
    int z = a;   // z = 3
    printf("%d %d %d", x, y, z);
    // Output: 4 4 3
}
// 3.
int main()
{
    int a = 3, b = 5;
    printf("%d", a++ + b); // // a++ recent valueta retun dibe then porer step e 1 barbe
    // output: 3+5
}
// 4.
int main()
{
    int a = 5;
    printf("%d %d %d", ++a, a--, a); // a--, a recent valueta retun dibe then porer step e 1 kmbe
    // output: 6 6 5

    // or,
    int a = 5;
    int first = ++a;  // a = 6
    int second = a--; // second = 6, a = 5
    int third = a;    // third = 5

    printf("%d %d %d", first, second, third);
    // Output: 6 6 5
}

// 5.
int main()
{
    int x = 1, y = 2, z = 3, result;
    result = x++ + y++ + z++;
    pirntf("%d  %d  %d  %d",result, x, y, z );
    // output: 1+2+3  2  3  4 
}
// 6.
int main()
{
    int a = 10;
    printf("%d", a++ + ++a);
    printf("\n%d", a);
    return 0;
    // output: 10+12
    //         12
}

// 7. 

#include <stdio.h>
int main() {
    int i = 10;
    i = i++;   // i = 10
    int a = i;  // a = i = 10
    printf("%d\n", a);  // a = 10
    printf("%d", i);    // i = 10
}
//  ** eta mukosto kore felo **
//     i = i++   (i = 10)
//     i = ++i   (i = 11)


// num 9 -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -

#include <stdio.h>
int main()
{
    int j = 1;
    while (j = j + 2, j <= 10)
    {
        printf("%d", j);
    }
    printf("%d", j);
}
// output: 3 5 7 9 11

// num 10(infinite loop)------ -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --

int main()
{
    while (3)
    {
        printf("Hello IIT");
    }
}
// infinite loop (because loop totokkon prjnto colte thake jotokkn na loopti false hoi, ar ekane loopti kkno false hbena)

int main()
{
    int x = 10, y = 2;
    while (x + y - 1)
    {
        printf("%d %d    ", x--, y--);
    }
}

// output:  10 2    9 1    8 0    7 -1    6 -2........(infinite loop)

// num 11 -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --

#include <stdio.h>
int main()
{
    int A;
    scanf("%d", &A);
    // if (-200000000<A<200000000 ) eta always true
    if (-200000000 < A && A < 200000000)
        printf("%d", A);
}

// num 12 -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -

#include <stdio.h>

int main()
{
    char ch1, ch2;

    scanf("%c", &ch1);
    scanf(" %c", &ch2); // obancito whitespace skip krbe.  whitespace = space, enter, tab.

    printf("ch1: %c, ch2: %c\n", ch1, ch2);
    return 0;
}