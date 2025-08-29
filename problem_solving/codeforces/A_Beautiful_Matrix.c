/*
Problem link : https://codeforces.com/problemset/problem/263/A

declare arr[5][5]
read arr[5][5]

for i = 0 to i = 4 :
   for j = 0 to j = 4: 
     if(a[i][j] == 1)
       result = abs(2-i) + abs(2-j)
       return 0

*/


#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[5][5];

    int i, j;

    int row, col;

    for(i = 0; i<5; i++){
        for(j = 0; j<5; j++){
            scanf("%d", &arr[i][j]);

            if(arr[i][j] == 1){
                row = i;
                col = j;
            }
        }
    }

    int result = abs(2 - row) + abs(2 - col) ;

    printf("%d", result);

    return 0;
}