/*

declare str[101]
read str

for i = 0; str[i] != '\0'; i = i+2 
   for  j = i + 2; str[j] != '\0'; j = j+2
      if(str[j] < str[i])
         str[i] = str[j]


print(str)

*/


/*
#include <stdio.h>
#include <string.h>

int main() {
    
    char str[101];
    scanf("%s", str);

    int i, j;

    int len = strlen(str);

    for(i = 0; str[i] != '\0'; i += 2){
        for(j = i + 2; str[j] != '\0'; j += 2){
            if(str[j] < str[i]){
               char temp = str[i];   // Note: temp must be character
               str[i] = str[j];
               str[j] = temp;
            }
        }
    }

    printf("%s", str);
    return 0;
}

==========
 jkn only ekta digit (such as 2) input dibo tkn-
       i = 0 er jnno vetore dukbe, j = 2 hbe, 
       condition check kore dkbe str[2] != '\0' hoise, but str[2] = grabage value
       hoito tkn 2 & garbage value swap hbe ,tkn str[0] = garbage value, so str = garbage value
       (programiz er compiler e problem hoinai, codeforces & vs code er compiler e emnta ghotse)
*/

#include <stdio.h>
#include <string.h>

int main() {
    
    char str[101];
    scanf("%s", str);

    int i, j;

    int len = strlen(str);

    for(i = 0; i < len ; i += 2){
        for(j = i + 2; j < len ; j += 2){
            if(str[j] < str[i]){
               char temp = str[i];   // Note: temp must be character
               str[i] = str[j];
               str[j] = temp;
            }
        }
    }

    printf("%s", str);
    return 0;
}