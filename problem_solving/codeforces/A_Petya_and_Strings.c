// Problem link : https://codeforces.com/problemset/problem/112/A

/*

   ## alternative but eta boro ##

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    
    int count = 0;

    char str1[101], str2[101];

    scanf("%s", str1);
    scanf("%s", str2);

    int len = strlen(str1);

    for(int i = 0; i < len; i++){
        char c1 = tolower(str1[i]);
        char c2 = tolower(str2[i]);

        if(c1 > c2){
            count = 1;
            break;
        }

        else if(c1 < c2){
            count = -1;
            break;
        }

        else if(c1 == c2){
            continue;
        }
    }

    printf("%d", count);

    return 0;
} 

*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {

    char str1[101], str2[101];

    scanf("%s", str1);
    scanf("%s", str2);

    int len = strlen(str1);

    for(int i = 0; i < len; i++){
        char c1 = tolower(str1[i]);
        char c2 = tolower(str2[i]);

        if(c1 > c2){
            printf("1\n");
            return 0;
        }

        else if(c1 < c2){
            printf("-1\n");
            return 0;
        }
    }

    printf("0\n");

    return 0;
} 

/*
   ## alternative ##

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[101], str2[101];
    scanf("%s", str1);
    scanf("%s", str2);

    // Step 1: Convert both strings to lowercase
    for (int i = 0; i < strlen(str1); i++) {
        str1[i] = tolower(str1[i]);
        str2[i] = tolower(str2[i]);
    }

    // Step 2: Compare strings lexicographically
    int result = strcmp(str1, str2);

    if (result < 0) {
        printf("-1\n");
    } else if (result > 0) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}


*/




