/* 

 problem link : https://codeforces.com/problemset/problem/50/A

*/


#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int area = a * b;

    if(area % 2 == 0) {
        printf("%d", area/2);
    }

    else {
        printf("%d", (area-1)/2);
    }
    return 0;
}