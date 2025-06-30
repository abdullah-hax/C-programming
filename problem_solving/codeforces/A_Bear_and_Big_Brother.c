/*

Problem link : https://codeforces.com/problemset/problem/791/A

declare limak, bob

read limak, bob


for i = 1 to i = 10:
    limak = 4*3^i
    bob = 7*2^i

    if(limak > bob)
    break

print(i)

******

alternative & best:

for i = 1 to i = 10:
    limak = limak * 3
    bob = bob * 2

    if(limak > bob)
    break

*/


#include <stdio.h>

int main() {
    
    int limak, bob, years = 0;
    scanf("%d %d", &limak, &bob);

    while(limak <= bob){
        
        limak = limak * 3;
        bob = bob * 2; 

        years++;
    }

    printf("%d", years);

    return 0;
}


// #include <stdio.h>

// int main() {
    
//     int limak, bob, i;
//     scanf("%d %d", &limak, &bob);

//     for(i = 1; i<=10; i++){
//         limak = limak * 3;
//         bob = bob * 2; 

//         if(limak > bob){
//             break;
//         }
//     }

//     printf("%d", i);

//     return 0;
// }



// #include <stdio.h>
// #include <math.h>

// int main() {
    
//     int limak, bob, a, b, i;
//     scanf("%d %d", &a, &b);

//     for(i = 1; i<=10; i++){
//         limak = a * pow(3, i);
//         bob = b * pow(2, i);

//         if(limak > bob){
//             break;
//         }
//     }

//     printf("%d", i);

//     return 0;
// }