#include <stdio.h>
int main()
{

  char n;
  scanf(" %c", &n);

  if ((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z'))
  {
    if (n == 97 || n == 'e' || n == 'i' || n == 'o' || n == 'u' ||
        n == 'A' || n == 'E' || n == 'I' || n == 'O' || n == 'U')
      printf("%c is vowel\n", n);

    else
      printf("%c id consonent\n", n);
  }
  // there ASCII value of a is 97

  else
    printf("Invalid character.");
}

// *** some practise ***
// -----------------------------------------------------------------------------
/*

#include <stdio.h>

int main()
{
    char ch;
    ch = 'a';
    printf("%d %c", ch, ch);

    printf("\n");

    ch = 97;
    printf("%d %c", ch, ch);

    return 0;
}

output: 97 a
       97 a

//--------------------------------------------------------------------------------


#include <stdio.h>

int main()
{
  char ch = 'a';
  char golang = ch - 32;
  printf("%c and its ASCII value %d", golang);
  return 0;
}

output: A and its ASCII value 65
-----------------------

'a' → 97 (decimal) → 01100001 (binary) → stored in memory
    32 (decimal) → 00100000 (binary)
            01100001   (97)
          - 00100000   (32)
           ----------------
            01000001   (65)

  %c deyar pr 65 hoye jai A, then A print hoi.

//---------------------------------------------------------------------------------


#include <stdio.h>

int main()
{

  char ch = 32;
  char hel = 'a' - ch;
  printf("%c", hel);
  return 0;
}

output: A

*/

// ------------------------------------------------------------------------------

/*

*** vowel-consonent (by teacher) ***

#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);

    int lower_case_vowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    int upper_case_vowel = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');

    if(lower_case_vowel || upper_case_vowel){
      printf("%c is a vowel\n", ch);
    } else {
      printf("%c is a consonent\n", ch);
    }

    return 0;
}


*/
