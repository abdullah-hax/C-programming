/* 

 Problem link : https://codeforces.com/problemset/problem/158/A

*/
#include <stdio.h>

int main() {
    int n, k, i;
    int count = 0;

    scanf("%d %d", &n, &k);

    int contester[n];

    for(i = 0; i < n; i++){
        scanf("%d", &contester[i]);
    }
        
    for(i = 0; i < n; i++){
        if((contester[i] >= contester[k - 1]) && (contester[i] > 0))
        count++;
    }

    printf("%d", count);

    return 0;
}



/* === Alternative (but lengthy) ===

#include <stdio.h>

int main() {
    int n, k, i;
    int count = 0;

    scanf("%d %d", &n, &k);

    int contester[n];

    for(i = 0; i < n; i++){
        scanf("%d", &contester[i]);
    }
    
    if(contester[k - 1] > 0){
        
        for(i = 0; i < n; i++){
            if(contester[i] >= contester[k - 1])
            count++;
        }
    }
    
    if(contester[k - 1] == 0){
        
        for(i = 0; i < n; i++){
            if(contester[i] > contester[k - 1])
            count++;
        }
    }

    printf("%d", count);

    return 0;
}

*/


/*=== with input constraints (Not necessary in online problem)===

  input constraints :
     0 <= contester[i] <= 100
     1 <= k <= n
     k <= n <= 50

    ******
      -> online problem e eta nie cinta korar drkar nai
      -> real world e eta nie cinta korar drkar hte pare. karon user vul input ditei pare
    ******
    

#include <stdio.h>

int main() {
    int n, k, i;
    int count = 0;

    scanf("%d %d", &n, &k);

    if(n >= k && n <= 50) {

        int contester[n];

        for(i = 0; i < n; i++){
            scanf("%d", &contester[i]);
        }

        for(i = 0; i < n; i++){
            if(contester[i] >= 0 && contester[i] <= 100){
                if((contester[i] >= contester[k - 1]) && (contester[i] > 0))
                count++;
            }
        }
    
        printf("%d", count);
        return 0;
    }
}

*/