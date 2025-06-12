
// বাফার মানে হচ্ছে RAM-এর ভেতরে একটি temporal এরিয়া
// ইনপুট দেওয়ার পর, তা কিছুক্ষণের জন্য বাফারে জমা থাকে যতক্ষণ না প্রোগ্রাম তা পড়ে
/*

[Keyboard Input]
       ↓
  (Type something)
       ↓
[Buffer in RAM]  ←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←
       ↓
scanf() / gets() / fgets()   ( buffer থেকে read করে char গুলো তুলে নেই )
       ↓
[Variable in Program]      (then variable এ store করে (যদি int type variable হয়, char কে int এ convert করে))
       ↓
(Use the data in your code) (এরপর data গুলো আমরা use করতে পারব)

*/

/*

🧠 Key Rules for scanf("%s") :

Skips all leading whitespaces before reading.

Reads characters until it finds a whitespace

Stops reading when it hits the next whitespace.

It doesn’t store the whitespace.

// whitespace = space, tab, newline
// leftover whitespace in buffer is also leading whitespace


🧠 Key Rules for "%c":

Does not skip leading whitespaces .

Reads exactly one character, even if that character is a whitespace. Then stops.

" %c" skip leading whitespace.Comfortable.


🧠 Key Rules for "%d":
Skips all leading whitespaces.

Reads characters as long as they form a valid number (ignores non-numeric characters).

Stops reading when it hits the next whitespace.

Stops reading as soon as it encounters a character that cannot be part of a number (e.g., a space, tab, or any letter).


🧠 Key Rules for gets() :
doesn't skip leading whitespace

Reads an entire line including whitespace

it replaces \n with \0

unsafe for buffer overflow


----------------------------------------------------------------------------------------------------------------

Input----------------scanf("%s") sees----------------------------What gets stored
"hello world"	   Reads hello → stops at whitespace(' ')	             "hello"
" hello"	       skips leading space → reads "hello"	                "hello"
"\nhello"	       skips leading newline → reads "hello"                "hello"
--------------------------scanf("%c") sees
" hello"           doesn't skip leading whitespace,reads exactly the first character ' '         ' '  , bakigulo buffer e theke jabe
' A'               doesn't skip leading whitespace                                     ' '  ,  A buffer e theke jabe
' A' (" %c)        skip leading whitespace                                             'A'

note : string er kettre " %c" leading whitespace skip kore ortat string er votor jotobar space, \n deya hok knotai count hobe na.
"%c" er kettre sb count hobe, new line dile setao count hbe.
-----------------------scanf("%d") sees
   1234 234        skip leading whitespace, stops at whitespace       1234
1234abc            stops at non number                                1234
1234.456           stops at decimal point                             1234
----------------------------gets()
"Abdullah Al Mamun"  don't stops at space & tab, replaces \n with \0                         "Abdullah Al Mamun"
" Abd ar"            doesn't skip leading whitespace,don't stops..,replaces..                     " Abd ar"
"\n"                 replaces \n with \0, so index[0] will be \0, so array teke berie jabe       "not visible"

summary of %s and gets() : %s space dkle stop hoye jai(oratat space count korena)
                          gets() \n dkle stop hoye jai(\n ke \0 banai then stop hoy)
                          


%s, gets(), fgets() era sobai string er seshe automaically \0 add kore dei
gets() \n k \0 banai,, %s , fgets() banaina.

*/

// scanf("%s") → স্পেসের আগ পর্যন্ত পড়ে

// gets() → পুরো লাইন পড়ে

// fgets() → \n সহ পুরো লাইন পড়ে  (নিরাপদ)

//--------------------------------------------------------------------------------------------------------------------

#include <stdio.h>

int main()
{
    char ch[5];
    gets(ch); // Input: press Enter without typing anything

    if (ch[0] == '\0')
    {
        printf("You entered a newline!\n");
    }
    else
    {
        printf("You entered: %c\n", ch);
    }
    return 0;
}

// gets() string অর্থাৎ char type array input নেই।
// getchar() single char input নেই ASCII code হিসেবে।
// gets() \n k \0 dara replace kore

#include <stdio.h>

int main()
{
    char ch;
    ch = getchar(); // Input: press Enter without typing anything

    if (ch == '\n')
    {
        printf("You entered a newline!\n");
    }
    else
    {
        printf("You entered: %c\n", ch);
    }
    return 0;
}

//-------------------------------------1--------------------------------------

#include <stdio.h>

int main()
{
    char char1;
    char char2;

    scanf("%c", &char1);
    scanf("%c", &char2);

    printf("char1: %c\n", char1);
    printf("char2: [%c]\n", char2);
    return 0;
}
// input: "A" then press enter
// output :
//   char1: A
//   char2: [
//   ]             (new line hoyeche)

// input: "A" then space then press enter
// output :
//   char1: A
//   char2: [ ]    (ekta space hoyeche)

//-------------------------------------2--------------------------------------

#include <stdio.h>

int main()
{
    char char1[50];
    char char2[50];

    scanf("%s", char1); // input: "Abdullah" then press enter.
    gets(char2);        //  buffer এর \n , \0 দ্বারা replaced হবে, then array এর কাজ শেষ। অর্থাৎ char[0] = '\0' হবে , এরপর নরমালি array আর কোন কাজ নেই।

    printf("char1: %s\n", char1);
    printf("char2: %s\n", char2);
    printf("the end");
    return 0;
}

// output :
//   char1: Abdullah
//   char2: (ekhane \0 hbe)
//   the end

//-------------------------------------3--------------------------------------

#include <stdio.h>
int main()
{
    int age;
    char gender;

    printf("Enter age : ");
    scanf("%d", &age);
    printf("Enter gender : ");
    gender = getchar();

    printf("age = %d and gender = [%c]", age, gender);
    return 0;
}
// input : 19 then press enter then M
// output :
//    age = 19
//    gender = [
//    ]