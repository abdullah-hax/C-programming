/*

Problem link : https://codeforces.com/problemset/problem/266/A

declare num

read num

declare str[num + 1]

scanf(str)


for i = 0 to i = num - 1:

   if str[i] == str[i + 1]
    count++


print (count)


*/

#include <stdio.h>

int main(){
    int num, count = 0;
    scanf("%d", &num);

    char str[num + 1];

    scanf("%s", str);

    for(int i = 0; i < num; i++){

        if(str[i] == str[i + 1]){
            count++;
        }
    }

    printf("%d", count);

}