/* 

 Problem link : https://codeforces.com/contest/2123/problem/A

*/


#include <stdio.h>

// void solve(){
//     int n;
//     scanf("%d", &n);
//     int cnt[4] = {0};

//     for(int i = 0 ; i < n; i++){
//         cnt[i % 4]++;
//     }

//     if(cnt[0] == cnt[3] && cnt[1] == cnt[2]){
//         printf("Bob\n");
//     } else {
//         printf("Alice\n");
//     }
// }

// Easy
// void solve2(){
//     int n;
//     scanf("%d", &n);

//     if(n % 4 == 0){
//         printf("Bob\n");
//     } else {
//         printf("Alice\n");
//     }

// }


// Easy : Using array (taking all input together) 
int i;
void solve2(int arr[], int testcase){

    for(i = 0 ; i < testcase; i++){
        if( arr[i] % 4 == 0){
            printf("Bob\n");
        } else {
            printf("Alice\n");
        }
    }
}

int main() {
    
    int testcase;
    scanf("%d", &testcase);

    int arr[testcase];
    for(i = 0; i < testcase; i++){
        scanf("%d", &arr[i]);
    }

    solve2(arr, testcase);

    // while(testcase--){
    //     // solve();
    //     solve2();
    // }
    return 0;
}