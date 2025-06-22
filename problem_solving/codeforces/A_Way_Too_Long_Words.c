
/*

 (1 ≤ row ≤ 100)
 letter lenth 1 to 100
 if letter lenth greater than 10 then organize the word

input :
4
word
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis

output :
word
l10n
i18n
p43s

*/


#include <stdio.h>
#include <string.h>

int main() {
  int n;
  scanf("%d", &n);
  // getchar();

  if(n>=1 && n<=100) {
    char str[n][101];

/* taking input

   *** method 1 ***

    int i=0;
    for (; i<n; i++) {

      int j=0;
      for (; j<101; j++) {
        scanf("%c", &str[i][j]);
        
        if(str[i][j] == '\n'){
          str[i][j] = '\0';
          break;
        }
      }
    }


   *** method 2 ***

    int i=0;
    while(i<n) {

      fgets(str[i], sizeof(str[i]), stdin);    // ekadhik line input nite parena, ekline ekline kore input nite pare, tai i use kora hoyece.
      str[i][strcspn(str[i], "\n")] = '\0';    // (shortform, longform hlo string er length ber kore kora)
      i++;
    }
    
*/

 // *** method 3 ***  (word er majkane space thakle ei method kaj krbena)
    int i;
    for( i = 0; i<n; i++) {
      scanf("%s", str[i]);
    }

// getting output

    // for ( i=0; i<n; i++) {
    //   int j=0;
    //   for (; str [i][j] != '\0'; j++) {
    //     printf("%c", str[i][j]);
    //   }
    // }


    i=0;
    for (; i<n; i++){

      int len = strlen(str[i]);
      if( len > 10 ){
        printf("%c%d%c\n", str[i][0], len - 2, str[i][len - 1]);
      } else printf("%s\n", str[i]);

    }
  }
} 



// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);
//     getchar(); // To consume the leftover '\n' after number input

//     if (n >= 1 && n <= 100) {
//         char str[n][101];

//         for (int i = 0; i < n; i++) {
//             int j = 0;
//             while (j < 100) {
//                 char ch = getchar();

//                 if (ch == '\n') {
//                     str[i][j] = '\0'; // null-terminate the string
//                     break;
//                 }

//                 str[i][j] = ch;
//                 j++;
//             }
//         }

//         // Print all lines
//         for (int i = 0; i < n; i++) {
//             printf("%s\n", str[i]);
//         }
//     }

//     return 0;
// }