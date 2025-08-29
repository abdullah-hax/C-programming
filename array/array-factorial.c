// // Que : take input of some numbers & show output of factorials of those numbers

// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);

//     int a[n], i;

//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     for (i = 0; i < n; i++)
//     {
//         int f = 1;
//         for (int j = a[i]; j >= 1; j--)
//         {
//             f = f * j;
//         }
//         printf("%d ", f);
//     }
// }

// // 0 or 1 input dileo correct output asbe.



// // arr[5];     // not initialized, every elements of 5 contain garbage value  
// // arr[5] = {0}     // first element is 0 & the rest are automatically 0    {0, 0, 0, 0, 0}
// // arr[5] = {3}     // first element is 3 & the rest are automatically 0     {3, 0, 0, 0, 0}
// // arr[5] = {2, 4}   // first two elements are 2, 4 & the rest are automatically 0    {2, 4, 0, 0, 0}

#include <stdio.h>

void solve() {
    int n;
    scanf("%d", &n);
    
    int cnt[4] = {0};  // to count 0,1,2,3 mod classes
    
    for (int i = 0; i < n; i++) {
        cnt[i % 4]++;
    }

    if (cnt[0] == cnt[3] && cnt[1] == cnt[2]) {
        printf("Bob\n");
    } else {
        printf("Alice\n");
    }
}

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        solve();
    }

    return 0;
}
