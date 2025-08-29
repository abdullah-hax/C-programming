/* 

Problem link : https://codeforces.com/problemset/problem/546/A

fb dollar banana 
3   17    4
13 borrow

1*3 + 2*3 + 3*3 + 4*3 = total



for (i = 1; i <= banana ; i++){
    total = total + fb*i
}
    
borrow = total - dollar


*/

#include <stdio.h>

int main() {
    int fb, dollar, banana;
    scanf("%d %d %d", &fb, &dollar, &banana);

    int total = 0, borrow = 0;

    for(int i = 1; i <= banana; i++){
        total = total + fb*i;
    }

    if(total > dollar){
        borrow = total - dollar;
    }
    
    printf("%d", borrow);

    return 0;
}