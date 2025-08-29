/* 

 Problem link : https://codeforces.com/contest/2123/problem/A

*/


#include <stdio.h>

void solve(){
    int n;
    scanf("%d", &n);
    int cnt[4] = {0};

    for(int i = 0 ; i < n; i++){
        cnt[i % 4]++;
    }

    if(cnt[0] == cnt[3] && cnt[1] == cnt[2]){
        printf("Bob\n");
    } else {
        printf("Alice\n");
    }
}

// Easy method
void solve2(){
    int n;
    scanf("%d", &n);

    if(n % 4 == 0){
        printf("Bob\n");
    } else {
        printf("Alice\n");
    }

}

int main() {
    
    int testcase;
    scanf("%d", &testcase);

    while(testcase--){
      // Use any of this solve
        solve1();
        solve2();  // Easy method
    }
    return 0;
}



/* === Using array (taking all input together) ===

int main() {
    
    int testcase;
    scanf("%d", &testcase);


    int arr[testcase], i;
    for(i = 0; i < testcase; i++){
        scanf("%d", &arr[i]);
    }

    for(i = 0 ; i < testcase; i++){
        if( arr[i] % 4 == 0){
            printf("Bob\n");
        } else {
            printf("Alice\n");
        }
    }
    return 0;
} */