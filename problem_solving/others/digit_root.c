/* 

=== Digit Root ===

You are given a positive integer N (1 ≤ N ≤ 10^9). 
Your task is to repeatedly sum the digits of N until it becomes a single-digit number. 
Finally, print that single-digit number.

Input :
A single integer N

Output :
Print the final single-digit result after repeatedly summing the digits.

Example:

Input:
254189

Step-by-step:
2 + 5 + 4 + 1 + 8 + 9 = 29
2 + 9 = 11
1 + 1 = 2

Output:
2


*/


#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    while(num/10 != 0){
        
        int sum = 0;
        while(num != 0)
        {
            sum = sum + num % 10;
            num = num / 10;
        }
        num = sum;
    }

    printf("%d", num);
    return 0;
}